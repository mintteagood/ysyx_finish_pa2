#include "../csrc/paddr.h"
#include <stdio.h>

#define panic(format, ...) Assert(0, format, ## __VA_ARGS__)

static uint8_t *pimem = NULL;
void init_imem() {
  pimem = (uint8_t *) malloc(CONFIG_MSIZE);
  assert(pimem);
 /* Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE);*/
}

uint8_t* guest_to_host(paddr_t paddr) { 
  uint8_t* tmp1;
  tmp1 = pimem + paddr - CONFIG_MBASE;
  return pimem + paddr - CONFIG_MBASE;
  printf(" guest_to_host ok%hhn\n",tmp1);
   }
paddr_t host_to_guest(uint8_t *haddr) { return haddr - pimem + CONFIG_MBASE; }

word_t host_read(void *addr, int len) {
  switch (len) {
    case 1: return *(uint8_t  *)addr;
    case 2: return *(uint16_t *)addr;
    case 4: return *(uint32_t *)addr;
    IFDEF(CONFIG_ISA64, case 8: return *(uint64_t *)addr);
    default: MUXDEF(CONFIG_RT_CHECK, assert(0), return 0);
  }
}
word_t pmem_read(paddr_t addr, int len) {
  word_t ret = host_read(guest_to_host(addr), len);
  return ret;
}

long load_img(char *img_file){
  if(img_file == NULL){
    printf("Error: No image is giveb !\n");
    assert(0);
    return 1024;
  }
  FILE *fp = fopen(img_file, "rb"); //以二进制的格式将.bin文件读入到file节后体中        
  assert(fp);  //判断是否成功读入
  fseek(fp, 0, SEEK_END);
  long size = ftell(fp); //获取.bin文件总长度
  printf("The image is %s, size = %ld\n",img_file, size);
  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(CONFIG_MBASE),size, 1, fp); //将.bin文件忠的指令放入开辟的存储空间中
  assert(ret == 1);
  fclose(fp);
  return size;
}