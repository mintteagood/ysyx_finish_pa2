#include "../csrc/paddr.h"
//#include <device/mmio.h>
//#include <isa.h>
#define panic(format, ...) Assert(0, format, ## __VA_ARGS__)

static uint8_t *pimem = NULL;
void init_imem() {
  pimem = (uint8_t *) malloc(CONFIG_MSIZE);
  assert(pimem);
 /* Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE);*/
}

uint8_t* guest_to_host(paddr_t paddr) { return pimem + paddr - CONFIG_MBASE; }
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

