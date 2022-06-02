
#include "../csrc/paddr.h"
#include "../csrc/utils.h"
#include "../csrc/difftest.h"
#include <dlfcn.h>
#include <stdio.h>

typedef struct {
  word_t gpr[32];
  vaddr_t pc;
} CPU_state;

CPU_state cpu;

void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) {
  assert(0);
}

void difftest_regcpy(void *dut, bool direction) {
  assert(0);
}

void difftest_exec(uint64_t n) {
  assert(0);
}

void difftest_raise_intr(word_t NO) {
  assert(0);
}


const char* regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  for(int i=0;i<32;i++){
  printf("%s %08lx\n", regs[i], cpu.gpr[i]);
  }
}


bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int i;
  for (i = 0; i < 32; i++) {
    if (ref_r->gpr[i] != gpr(i)) {
      printf("%s %08lx %08lx \n", regs[i], ref_r->gpr[i],pc);
      return false;
    }
  }
  //if (ref_r->pc != pc) return false;

  return true;

}
