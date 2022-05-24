// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__cpu_cpu__DOT__sub_en;
    SData/*11:0*/ top__DOT__cpu_cpu__DOT__imm;
    IData/*31:0*/ top__DOT__addr;
    IData/*31:0*/ top__DOT__instr;
    IData/*31:0*/ top__DOT__ext_imm;
    IData/*31:0*/ top__DOT__data1;
    IData/*31:0*/ top__DOT__data2;
    IData/*31:0*/ top__DOT__data_mem;
    IData/*31:0*/ top__DOT__cpu_cpu__DOT__offset;
    IData/*31:0*/ top__DOT__cpu_cpu__DOT__data_in2;
    IData/*31:0*/ top__DOT__cpu_cpu__DOT__data_out;
    IData/*31:0*/ top__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr;
    IData/*31:0*/ top__DOT__data_mem_cpu__DOT__addr;
    VlUnpacked<CData/*7:0*/, 32> top__DOT__instr_mem_cpu__DOT__instr_mem;
    VlUnpacked<IData/*31:0*/, 31> top__DOT__cpu_cpu__DOT__register_cpu__DOT__register;
    VlUnpacked<CData/*7:0*/, 32> top__DOT__data_mem_cpu__DOT__data;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    IData/*31:0*/ top__DOT__cpu_cpu__DOT__register_cpu__DOT____Vlvbound1;
    IData/*31:0*/ __Vdly__top__DOT__addr;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
