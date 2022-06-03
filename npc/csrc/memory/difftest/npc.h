#ifndef __CPU_CPU_H__
#define __CPU_CPU_H__

#include "../csrc/common.h"
#include "../csrc/utils.h"
void cpu_exec(uint64_t n);

void set_nepc_state(int state, vaddr_t pc, int halt_ret);
void invalid_inst(vaddr_t thispc);

#define NPCTRAP(thispc, code) set_npc_state(NEMU_END, thispc, code)
#define INV(thispc) invalid_inst(thispc)

#endif
