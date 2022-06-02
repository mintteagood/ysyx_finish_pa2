
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

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  int i;
  for (i = 0; i < 32; i++) {
    if (ref_r->gpr[i] != gpr(i)) {
      isa_reg_display(ref_r, pc);
      return false;
    }
  }
  //if (ref_r->pc != pc) return false;

  return true;

}