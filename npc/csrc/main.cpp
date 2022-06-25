#include "verilated_vcd_c.h"
#include <cassert>
#include <stdio.h>
#include <stdlib.h>
#include "Vysyx_22040175_top.h"
#include "verilated.h"
#include "verilated_dpi.h"
#include "assert.h"
#include <dlfcn.h>  //动态链接库相关函数
//加run和target
#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0X2800000

typedef uint64_t word_t;
typedef  uint32_t paddr_t;
typedef  word_t vaddr_t;

static uint8_t *pimem =NULL;

enum{DIFFTEST_TO_DUT,DIFFTEST_TO_REF,NPC_STOP,NPC_RUNNING,NPC_END,NPC_ABORT};
uint32_t current_inst = 0;

//加ebreak
typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} CPU_state; //nemu的CPU状态用于比较

CPU_state cpu = {};

uint32_t ebreak_flag = 0;
uint32_t unknown_code_flag = 0;
//DPIC
extern "C" void ebreak(){
  ebreak_flag = 1;
  printf("ebreakexternc\n");
}
extern "C" void unknown_inst(){
  unknown_code_flag = 1;
}
//加difftest
void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(word_t NO) = NULL;

int npc_state = NPC_STOP;
static int port = 1234;

//导出寄存器值 DPIC
uint64_t *cpu_gpr = NULL;
extern "C" void set_gpr_ptr(const svOpenArrayHandle r){
  cpu_gpr = (uint64_t *) (((VerilatedDpiOpenVar*)r) -> datap());
}
//函数声明
void init_imem();
uint8_t *guest_to_host(paddr_t paddr);
static long load_img(char *img_file);
word_t host_read(void *addr, int len);
int is_exit_status_bad();
void init_difftest(long img_size, int port);
void difftest_step(vaddr_t pc);
static void checkregs(CPU_state *ref, vaddr_t pc);
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc);
//static inline void host_write(void *addr, int len, word_t data);
static inline void host_write(void *addr, int len, word_t data);

//加为DPIC函数
extern "C" void pmem_read(long long raddr,long long *rdata){
  if(raddr >= CONFIG_MBASE){
    *rdata = host_read(guest_to_host(raddr), 8);
    printf("raddr = 0x%llx\n",raddr);
    printf("rdata = 0x%llx\n",*rdata);
  }
  else{
    *rdata = 0;
    printf("Warning: Invalid Instruction !\n");
  }
}

extern "C" void pmem_write(long long waddr,long long wdata,char wmask){
  long long addr = waddr;
  int len = 0;
  switch(wmask){
    //8bit
    case 0x1: len = 1; break;
    case 0x2: len = 1; addr = addr +1; break;
    case 0x4: len = 1; addr = addr +2; break;
    case 0x8: len = 1; addr = addr +3; break;
    case 0x10: len = 1; addr = addr + 4;break;
    case 0x20: len = 1; addr = addr + 5;break;
    case 0x40: len = 1; addr = addr + 6;break;
    case -128: len = 1; addr = addr + 7;break;
    //16bit
    case 0x3: len = 2;break;
    case 0xc: len = 2; addr = addr + 2;break;
    case 0x30: len = 2; addr = addr + 4;break;
    case -64: len = 2; addr = addr + 6;break;
     //32bit
     case 0xF: len = 4;break;
     case -16: len = 4;addr = addr + 4;break;
     //64bit
     case -1: len = 8 ;break;
     default:printf("False: Wmask is %x false!",wmask);
  }
  printf("waddr = %llx\n",waddr);
  printf("wdata = %llx\n",wdata);
  printf("len = %d\n",len);
  host_write(guest_to_host(addr),len,wdata);
}

/*static word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
   //printf("pmem_read success addr");
  return ret;
}*/

VerilatedContext *contextp = new VerilatedContext;
  // init top verilog instance
Vysyx_22040175_top* top = new Vysyx_22040175_top;
  // init trace dump

VerilatedVcdC* tfp = new VerilatedVcdC;




vluint64_t maintime = 0;
const vluint64_t max_sim_time = 2000;
//Vysyx_22040175_top *top; 
int main(int argc, char **argv, char **env) {
  contextp -> commandArgs(argc,argv);
  Verilated::traceEverOn(true);
  
   
  
  int clk;
  int a = 0;

  top->trace (tfp, 99);
  tfp->open ("Vysyx_22040175.vcd");
  // initialize simulation inputs
  top->clk = 1;
  top->rst = 1;
  // run simulation for 100 clock periods
  char* img_file = *(argv + 1);
  init_imem();
  printf("开始imem初始化\n");
  
  long img_size = load_img(img_file);
  int i;
  for (i=0;i<40 ; i++) {
    //while(!contextp -> gotFinish()){
     //for (i=0;i<15 ; i++) {
      
    top->rst = (i < 2);
      
    // dump variables into VCD file and toggle clock
    if(ebreak_flag){
      printf("ebreak: program is finished !\n");
      npc_state = NPC_END;
      break;
    }
    if(unknown_code_flag || top->unknown_code){
        printf("Warning: An unknown Inst! pc: %x;Inst: %x\n",top->pc,top->inst);
        npc_state = NPC_ABORT;
        break;
      }
  /*  for (clk=0; clk<2; clk++) {
      tfp->dump (2*i+clk);
      top->clk = !top->clk;
      top->eval ();
      
  }*/
      tfp->dump (2*i+clk);
      top->clk = !top->clk;
      top->eval ();
     if(top->clk==1){
      //top->inst = pmem_read(top->pc,8); //使用DPIC
      printf("main_time = %d\n",i);
      printf("PC:0x%0x;Inst:0x%x;\n",top->pc,top->inst);
      printf(" npc_gpr[%d]= 0x%08lx; Instruction is 0x%x\n",10,cpu_gpr[10],top->inst);
      printf(" npc_gpr[%d]= 0x%08lx; Instruction is 0x%x\n",1,cpu_gpr[1],top->inst);
      
      
     }
     if(top->clk==0){
        a= a+1;
         printf("main_time = %d\n",i);
      printf("PC:0x%0x;Inst:0x%x;\n",top->pc,top->inst);
        if (a>2){
       //printf("a =%d \n",a);
       
         difftest_step(top->pc);
        }
        else{
          init_difftest(img_size,port);
        }
     }
     
      if(npc_state == NPC_ABORT){
        printf("false:ABORT!The false PC is 0x%0x\n",top->pc);
        break;
      }
      
  
    }
  

  tfp->close();
  delete top;
  delete contextp;
  return is_exit_status_bad();
  if (Verilated::gotFinish())  exit(0);
  
}

void init_imem(){
  pimem = (uint8_t *) malloc(CONFIG_MSIZE);
 // printf("pimem _ success");
  assert(pimem);
}

uint8_t *guest_to_host(paddr_t paddr){
  //uint8_t *tmpl = pimem + paddr -CONFIG_MBASE;
  //printf("guest to host success pimem = %hhn\n",pimem);
  printf("guest to host success paddr  = %d\n",paddr );
  //printf("guest to host success addr = %hhn\n",pimem + paddr -CONFIG_MBASE);
  return pimem + paddr -CONFIG_MBASE;
}
inline word_t host_read(void *addr, int len) {
   //printf("host_read success addr");
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    case 8: return *(uint64_t *)addr;
    default: {printf("host_to_read is error !\n");assert(0);return 4096;};
  }
}
static inline void host_write(void *addr, int len,word_t data){
  printf("host_write1 ok!\n");
  uint8_t a;
  uint16_t b;
  uint32_t c;
  uint64_t* d;
  //printf("host_write wdata=%ld",data);
  switch (len){
    case 1: a=*(uint8_t *)addr;a = data; return;
    case 2: b=*(uint16_t *)addr; b= data; return;
    case 4: c=*(uint32_t *)addr;c = data;return;
    case 8: d =*(uint64_t *)addr;printf("host_write data=%ld!\n",data);d = data;printf("host_write ok!\n");return;
    default:{printf("host_write is error !\n"); assert(0);};
  }
}


static long load_img(char*img_file){
  if(img_file == NULL){
    printf("Error: No image is given !\n");
    assert(0);
    return 4096;
  }
  FILE *fp = fopen(img_file,"rb");
  assert(fp);
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  printf("The image is %s, size = %ld\n", img_file,size);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(CONFIG_MBASE), size, 1,fp);
  assert(ret == 1);
  fclose(fp);
  return size;
}
int is_exit_status_bad(){
  int good = (npc_state == NPC_END && cpu_gpr[10] == 0);
  //int good = (cpu_gpr[10] == 0);
  if(good){
    printf("\033[1;32m HIT GOOD TRAP! \033[0m \n");
  }
  else{
    printf("\033[1;31m HIT BAD TRAP! \033[0m \n");
  }
  return !good;
}
//Difftest初始化
void init_difftest(long img_size,int port){
  char const *ref_so_file = "/home/melissa/ysyx-workbench/nemu/tools/spike-diff/build/riscv64-spike-so";
  if(ref_so_file != NULL){
    printf("文件加载成功！\n");
  }
  assert(ref_so_file != NULL);
  void *handle;
  handle = dlopen(ref_so_file,RTLD_LAZY); //将动态库加载到内存中
  if(handle == NULL){
    printf("库打开失败！\n");
    printf("dlopen error. msg:%s", dlerror());
  }
  assert(handle);
  //用函数指针指向动态库中的对应函数，以便调用
  ref_difftest_memcpy = (void(*)(paddr_t, void*, size_t, bool))dlsym(handle,"difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void(*)(void*,bool))dlsym(handle,"difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void(*)(uint64_t))dlsym(handle,"difftest_exec");
  assert(ref_difftest_exec);
  
  ref_difftest_raise_intr = (void(*)(uint64_t))dlsym(handle,"difftest_raise_intr");
  assert(ref_difftest_raise_intr);

  void(*ref_difftest_init)(int) = (void(*)(int))dlsym(handle,"difftest_init");
  assert(ref_difftest_init);

  ref_difftest_init(port);
  cpu.pc = CONFIG_MBASE;
  ref_difftest_memcpy(CONFIG_MBASE,guest_to_host(CONFIG_MBASE), img_size, DIFFTEST_TO_REF);
  for(int i = 0; i < 32;i++){
    cpu.gpr[i] = 0;
  }
  ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}
//Difftest在CPU中比较功能的实现
void difftest_step (vaddr_t dnpc){
  CPU_state ref_r;
  ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
  checkregs(&ref_r, dnpc);
  ref_difftest_exec(1);
}


static void checkregs(CPU_state *ref, vaddr_t dnpc){
  if(!isa_difftest_checkregs(ref,dnpc)){
    npc_state = NPC_ABORT;
  }
}
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t dnpc){
  int i = 0;
  bool DIF_result = true;
  if(ref_r -> pc != dnpc){
    printf("False: PC is false! ref_dnpc is 0x%0lx;npc_dnpc is 0x%0lx; Instruction is 0x%x\n",ref_r->pc,dnpc,top->inst);
    DIF_result = false;
  }
  for (i=0; i<32;i++){
    if(ref_r->gpr[i] != cpu_gpr[i]){
      printf("False: Reg is false! ref_gpr[%d]: 0x%08lx;npc_gpr[%d]; 0x%08lx; Instruction is 0x%x\n",i,ref_r->gpr[i],i,cpu_gpr[i],top->inst);
      DIF_result = false;
    }
  }
  return DIF_result;
}