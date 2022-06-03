//test.cpp
//#include "nvboard.h"     //Defines common routines
#include "verilated_vcd_c.h"
#include <stdio.h>
#include <stdlib.h>
#include "Vysyx_22040175_top.h"
#include "assert.h"
#include "../csrc/memory/paddr.h"
#include "../csrc/difftest/difftest.h"

int port = 1;
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
  //init_difftest(img_file,img_size,port);
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



