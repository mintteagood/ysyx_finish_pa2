//test.cpp
//#include "nvboard.h"     //Defines common routines
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include "Vysyx_22040175_top.h"
#include "assert.h"


#define CONFIG_MBASE 0x80000000
#define CONFIG_MSIZE 0X2800000
#define MUXDEF(macro, X, Y)  MUX_MACRO_PROPERTY(__P_DEF_, macro, X, Y)
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
static uint8_t *pimem =NULL;
void init_mem(){
  pimem = (uint8_t *) malloc(CONFIG_MSIZE);
  //printf("pimem = %hhn\n",pimem);
  assert(pimem);
}
static long load_img(char*img_file){
  if(img_file == NULL){
    printf("Error: No image is given !\n");
    assert(0);
    return 4096;
  }
}
uint8_t *guest_to_host(paddr_t paddr){
  uint8_t *tmpl = pimem + paddr -CONFIG_MBASE;
  printf("guest to host success addr = %lx\n",tmpl);
  return tmpl;
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



int port = 4;
Vysyx_22040175_top *top; 
int main(int argc, char **argv, char **env) {
  int i;
  int clk;
  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vysyx_22040175_top* top = new Vysyx_22040175_top;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("Vysyx_22040175.vcd");
  // initialize simulation inputs
  top->clk = 1;
  top->rst = 1;
  // run simulation for 100 clock periods
  char* img_file = *(argv + 1);
  init_imem();
  long img_size = load_img(img_file);
  //init_difftest(optarg,img_size,1234);
  for (i=0; i<200; i++) {
    top->rst = (i < 2);
    // dump variables into VCD file and toggle clock
    for (clk=0; clk<2; clk++) {
      tfp->dump (2*i+clk);
      top->clk = !top->clk;
      top->eval ();
  }
  int a = 0;
     if(top->clk==1){
      top->inst = pmem_read(top->curr_pc,3);
      a= a+1;
     }
     if (a>2){
       //difftest_step(top->curr_pc,top->next_pc);
     }

  }
  if (Verilated::gotFinish())  exit(0);
  tfp->close();
  exit(0);
}





