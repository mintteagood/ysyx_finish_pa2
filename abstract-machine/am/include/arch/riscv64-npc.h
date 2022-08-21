#ifndef ARCH_H__
#define ARCH_H__

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t mepc, mcause, gpr[32], mstatus;
};

#define GPR1 gpr[17] // a7
#define GPR2 gpr[10]  //a0  自己改  
#define GPR3 gpr[11]   //a1
#define GPR4 gpr[12]   //a2
#define GPRx gpr[10]  //a0
#endif
