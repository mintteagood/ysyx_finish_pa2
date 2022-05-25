// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_22040175_top.h for the primary calling header

#ifndef VERILATED_VYSYX_22040175_TOP___024ROOT_H_
#define VERILATED_VYSYX_22040175_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vysyx_22040175_top__Syms;
class Vysyx_22040175_top_VerilatedVcd;


//----------

VL_MODULE(Vysyx_22040175_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);

    // LOCAL SIGNALS
    CData/*0:0*/ ysyx_22040175_top__DOT__cpu_cpu__DOT__sub_en;
    SData/*11:0*/ ysyx_22040175_top__DOT__cpu_cpu__DOT__imm;
    IData/*31:0*/ ysyx_22040175_top__DOT__addr;
    IData/*31:0*/ ysyx_22040175_top__DOT__instr;
    IData/*31:0*/ ysyx_22040175_top__DOT__ext_imm;
    IData/*31:0*/ ysyx_22040175_top__DOT__data1;
    IData/*31:0*/ ysyx_22040175_top__DOT__data2;
    IData/*31:0*/ ysyx_22040175_top__DOT__data_mem;
    IData/*31:0*/ ysyx_22040175_top__DOT__cpu_cpu__DOT__offset;
    IData/*31:0*/ ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2;
    IData/*31:0*/ ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out;
    IData/*31:0*/ ysyx_22040175_top__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr;
    IData/*31:0*/ ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr;
    VlUnpacked<CData/*7:0*/, 32> ysyx_22040175_top__DOT__instr_mem_cpu__DOT__instr_mem;
    VlUnpacked<IData/*31:0*/, 31> ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register;
    VlUnpacked<CData/*7:0*/, 32> ysyx_22040175_top__DOT__data_mem_cpu__DOT__data;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    IData/*31:0*/ ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT____Vlvbound1;
    IData/*31:0*/ __Vdly__ysyx_22040175_top__DOT__addr;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vysyx_22040175_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vysyx_22040175_top___024root);  ///< Copying not allowed
  public:
    Vysyx_22040175_top___024root(const char* name);
    ~Vysyx_22040175_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vysyx_22040175_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
