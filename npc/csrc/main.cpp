//test.cpp
//#include "nvboard.h"     //Defines common routines
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include "Vysyx_22040175_top.h"
#include "assert.h"
#include "../csrc/paddr.h"


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
  for (i=0; i<10; i++) {
    top->rst = (i < 1);
    // dump variables into VCD file and toggle clock
    for (clk=0; clk<1; clk++) {
      tfp->dump (2*i+clk);
      top->clk = !top->clk;
      uint32_t pc = top->addr;
      top->instr = pmem_read(pc,1);
      top->eval ();
      
    }
    
    if (Verilated::gotFinish())  exit(0);
  }
  //tfp->close();
  exit(0);
}



