//test.cpp
//#include "nvboard.h"     //Defines common routines
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include "Vysyx_22040175_top.h"
#include "assert.h"
#include "../csrc/paddr.h"

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR ") at pc = " FMT_WORD,
      addr, CONFIG_MBASE, CONFIG_MBASE + CONFIG_MSIZE, cpu.pc);
}
word_t paddr_read(paddr_t addr, int len) {
  if (likely(in_pmem(addr))) return pmem_read(addr, len);
  IFDEF(CONFIG_DEVICE, return mmio_read(addr, len));
  out_of_bound(addr);
  return 0;
}

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
  for (i=0; i<20; i++) {
    top->rst = (i < 2);
    // dump variables into VCD file and toggle clock
    for (clk=0; clk<2; clk++) {
      tfp->dump (2*i+clk);
      top->clk = !top->clk;
      top->instr = pmem_read(top->addr,64);
      top->eval ();
    }
    
    if (Verilated::gotFinish())  exit(0);
  }
  tfp->close();
  exit(0);
}



