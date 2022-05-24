// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp1;
    // Body
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x2f637075U;
    __Vtemp1[2U] = 0x6e7063U;
    VL_READMEM_N(true, 8, 32, 0, VL_CVT_PACK_STR_NW(3, __Vtemp1)
                 ,  &(vlSelf->top__DOT__instr_mem_cpu__DOT__instr_mem)
                 , 0, ~0ULL);
    vlSelf->top__DOT__addr = 0U;
    vlSelf->top__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr = 0U;
}

void Vtop___024root___settle__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__5\n"); );
    // Body
    vlSelf->top__DOT__instr = ((0xffffff00U & vlSelf->top__DOT__instr) 
                               | vlSelf->top__DOT__instr_mem_cpu__DOT__instr_mem
                               [(0x1fU & ((IData)(3U) 
                                          + vlSelf->top__DOT__addr))]);
    vlSelf->top__DOT__instr = ((0xffff00ffU & vlSelf->top__DOT__instr) 
                               | (vlSelf->top__DOT__instr_mem_cpu__DOT__instr_mem
                                  [(0x1fU & ((IData)(2U) 
                                             + vlSelf->top__DOT__addr))] 
                                  << 8U));
    vlSelf->top__DOT__instr = ((0xff00ffffU & vlSelf->top__DOT__instr) 
                               | (vlSelf->top__DOT__instr_mem_cpu__DOT__instr_mem
                                  [(0x1fU & ((IData)(1U) 
                                             + vlSelf->top__DOT__addr))] 
                                  << 0x10U));
    vlSelf->top__DOT__instr = ((0xffffffU & vlSelf->top__DOT__instr) 
                               | (vlSelf->top__DOT__instr_mem_cpu__DOT__instr_mem
                                  [(0x1fU & vlSelf->top__DOT__addr)] 
                                  << 0x18U));
    vlSelf->top__DOT__cpu_cpu__DOT__sub_en = (IData)(
                                                     (0x40000033U 
                                                      == 
                                                      (0x4000007fU 
                                                       & vlSelf->top__DOT__instr)));
    vlSelf->top__DOT__data2 = ((0U != (0x1fU & (vlSelf->top__DOT__instr 
                                                >> 0x14U)))
                                ? ((0x1eU >= (0x1fU 
                                              & ((vlSelf->top__DOT__instr 
                                                  >> 0x14U) 
                                                 - (IData)(1U))))
                                    ? vlSelf->top__DOT__cpu_cpu__DOT__register_cpu__DOT__register
                                   [(0x1fU & ((vlSelf->top__DOT__instr 
                                               >> 0x14U) 
                                              - (IData)(1U)))]
                                    : 0U) : 0U);
    vlSelf->top__DOT__data1 = ((0U != (0x1fU & (vlSelf->top__DOT__instr 
                                                >> 0xfU)))
                                ? ((0x1eU >= (0x1fU 
                                              & ((vlSelf->top__DOT__instr 
                                                  >> 0xfU) 
                                                 - (IData)(1U))))
                                    ? vlSelf->top__DOT__cpu_cpu__DOT__register_cpu__DOT__register
                                   [(0x1fU & ((vlSelf->top__DOT__instr 
                                               >> 0xfU) 
                                              - (IData)(1U)))]
                                    : 0U) : 0U);
    vlSelf->top__DOT__cpu_cpu__DOT__imm = (0xfffU & 
                                           ((((((vlSelf->top__DOT__instr 
                                                 >> 0x14U) 
                                                * (1U 
                                                   & (((((((vlSelf->top__DOT__instr 
                                                            >> 6U) 
                                                           & (vlSelf->top__DOT__instr 
                                                              >> 5U)) 
                                                          & (~ 
                                                             (1U 
                                                              & (vlSelf->top__DOT__instr 
                                                                 >> 4U)))) 
                                                         & (~ 
                                                            (1U 
                                                             & (vlSelf->top__DOT__instr 
                                                                >> 3U)))) 
                                                        & (1U 
                                                           & (vlSelf->top__DOT__instr 
                                                              >> 2U))) 
                                                       & (1U 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 1U))) 
                                                      & (1U 
                                                         & vlSelf->top__DOT__instr)))) 
                                               + ((1U 
                                                   & (((((((vlSelf->top__DOT__instr 
                                                            >> 6U) 
                                                           & (vlSelf->top__DOT__instr 
                                                              >> 5U)) 
                                                          & (~ 
                                                             (1U 
                                                              & (vlSelf->top__DOT__instr 
                                                                 >> 4U)))) 
                                                         & (~ 
                                                            (1U 
                                                             & (vlSelf->top__DOT__instr 
                                                                >> 3U)))) 
                                                        & (~ 
                                                           (1U 
                                                            & (vlSelf->top__DOT__instr 
                                                               >> 2U)))) 
                                                       & (1U 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 1U))) 
                                                      & (1U 
                                                         & vlSelf->top__DOT__instr))) 
                                                  * 
                                                  ((0x800U 
                                                    & (vlSelf->top__DOT__instr 
                                                       >> 0x14U)) 
                                                   | ((0x400U 
                                                       & (vlSelf->top__DOT__instr 
                                                          << 3U)) 
                                                      | ((0x3f0U 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 0x15U)) 
                                                         | (0xfU 
                                                            & (vlSelf->top__DOT__instr 
                                                               >> 8U))))))) 
                                              + ((1U 
                                                  & (((((((~ 
                                                           (1U 
                                                            & (vlSelf->top__DOT__instr 
                                                               >> 6U))) 
                                                          & (~ 
                                                             (1U 
                                                              & (vlSelf->top__DOT__instr 
                                                                 >> 5U)))) 
                                                         & (~ 
                                                            (1U 
                                                             & (vlSelf->top__DOT__instr 
                                                                >> 4U)))) 
                                                        & (~ 
                                                           (1U 
                                                            & (vlSelf->top__DOT__instr 
                                                               >> 3U)))) 
                                                       & (~ 
                                                          (1U 
                                                           & (vlSelf->top__DOT__instr 
                                                              >> 2U)))) 
                                                      & (vlSelf->top__DOT__instr 
                                                         >> 1U)) 
                                                     & vlSelf->top__DOT__instr)) 
                                                 * 
                                                 (vlSelf->top__DOT__instr 
                                                  >> 0x14U))) 
                                             + ((1U 
                                                 & (((((((~ 
                                                          (1U 
                                                           & (vlSelf->top__DOT__instr 
                                                              >> 6U))) 
                                                         & (vlSelf->top__DOT__instr 
                                                            >> 5U)) 
                                                        & (~ 
                                                           (1U 
                                                            & (vlSelf->top__DOT__instr 
                                                               >> 4U)))) 
                                                       & (~ 
                                                          (1U 
                                                           & (vlSelf->top__DOT__instr 
                                                              >> 3U)))) 
                                                      & (~ 
                                                         (1U 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 2U)))) 
                                                     & (vlSelf->top__DOT__instr 
                                                        >> 1U)) 
                                                    & (1U 
                                                       & vlSelf->top__DOT__instr))) 
                                                * (
                                                   (0xfe0U 
                                                    & (vlSelf->top__DOT__instr 
                                                       >> 0x14U)) 
                                                   | (0x1fU 
                                                      & (vlSelf->top__DOT__instr 
                                                         >> 7U))))) 
                                            + ((1U 
                                                & (((((((~ 
                                                         (1U 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 6U))) 
                                                        & (~ 
                                                           (1U 
                                                            & (vlSelf->top__DOT__instr 
                                                               >> 5U)))) 
                                                       & (vlSelf->top__DOT__instr 
                                                          >> 4U)) 
                                                      & (~ 
                                                         (1U 
                                                          & (vlSelf->top__DOT__instr 
                                                             >> 3U)))) 
                                                     & (~ 
                                                        (1U 
                                                         & (vlSelf->top__DOT__instr 
                                                            >> 2U)))) 
                                                    & (vlSelf->top__DOT__instr 
                                                       >> 1U)) 
                                                   & (1U 
                                                      & vlSelf->top__DOT__instr))) 
                                               * (vlSelf->top__DOT__instr 
                                                  >> 0x14U))));
    vlSelf->top__DOT__ext_imm = (((- (IData)((1U & 
                                              ((IData)(vlSelf->top__DOT__cpu_cpu__DOT__imm) 
                                               >> 0xbU)))) 
                                  << 0xcU) | (IData)(vlSelf->top__DOT__cpu_cpu__DOT__imm));
    vlSelf->top__DOT__cpu_cpu__DOT__offset = ((3U == 
                                               (3U 
                                                & (vlSelf->top__DOT__instr 
                                                   >> 2U)))
                                               ? ((
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__instr 
                                                               >> 0x1fU))) 
                                                   << 0x14U) 
                                                  | ((0x80000U 
                                                      & (vlSelf->top__DOT__instr 
                                                         >> 0xcU)) 
                                                     | ((0x7f800U 
                                                         & (vlSelf->top__DOT__instr 
                                                            >> 1U)) 
                                                        | ((0x400U 
                                                            & (vlSelf->top__DOT__instr 
                                                               >> 0xaU)) 
                                                           | (0x3ffU 
                                                              & (vlSelf->top__DOT__instr 
                                                                 >> 0x15U))))))
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->top__DOT__instr 
                                                       >> 2U)))
                                                   ? 
                                                  (vlSelf->top__DOT__ext_imm 
                                                   + vlSelf->top__DOT__data1)
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSelf->top__DOT__instr 
                                                        >> 2U)))
                                                    ? vlSelf->top__DOT__ext_imm
                                                    : 0U)));
    vlSelf->top__DOT__cpu_cpu__DOT__data_in2 = ((0x20U 
                                                 & vlSelf->top__DOT__instr)
                                                 ? vlSelf->top__DOT__data2
                                                 : vlSelf->top__DOT__ext_imm);
    vlSelf->top__DOT__data_mem_cpu__DOT__addr = (vlSelf->top__DOT__ext_imm 
                                                 + vlSelf->top__DOT__data1);
    if ((0x4000U & vlSelf->top__DOT__instr)) {
        if ((0x2000U & vlSelf->top__DOT__instr)) {
            vlSelf->top__DOT__cpu_cpu__DOT__data_out 
                = ((0x1000U & vlSelf->top__DOT__instr)
                    ? (vlSelf->top__DOT__data1 & vlSelf->top__DOT__cpu_cpu__DOT__data_in2)
                    : (vlSelf->top__DOT__data1 | vlSelf->top__DOT__cpu_cpu__DOT__data_in2));
        } else if ((0x1000U & vlSelf->top__DOT__instr)) {
            if ((0x40000000U & vlSelf->top__DOT__instr)) {
                if ((0x40000000U & vlSelf->top__DOT__instr)) {
                    vlSelf->top__DOT__cpu_cpu__DOT__data_out 
                        = (vlSelf->top__DOT__data1 
                           >> (0x1fU & vlSelf->top__DOT__cpu_cpu__DOT__data_in2));
                }
            } else {
                vlSelf->top__DOT__cpu_cpu__DOT__data_out 
                    = (vlSelf->top__DOT__data1 >> (0x1fU 
                                                   & vlSelf->top__DOT__cpu_cpu__DOT__data_in2));
            }
        } else {
            vlSelf->top__DOT__cpu_cpu__DOT__data_out 
                = (vlSelf->top__DOT__data1 ^ vlSelf->top__DOT__cpu_cpu__DOT__data_in2);
        }
    } else if ((0x2000U & vlSelf->top__DOT__instr)) {
        vlSelf->top__DOT__cpu_cpu__DOT__data_out = 
            ((0x1000U & vlSelf->top__DOT__instr) ? 
             ((vlSelf->top__DOT__data1 < vlSelf->top__DOT__cpu_cpu__DOT__data_in2)
               ? 1U : 0U) : (((vlSelf->top__DOT__data1 
                               >> 0x1fU) > (vlSelf->top__DOT__cpu_cpu__DOT__data_in2 
                                            >> 0x1fU))
                              ? 1U : (((vlSelf->top__DOT__data1 
                                        >> 0x1fU) == 
                                       (vlSelf->top__DOT__cpu_cpu__DOT__data_in2 
                                        >> 0x1fU)) ? 
                                      ((vlSelf->top__DOT__data1 
                                        < vlSelf->top__DOT__cpu_cpu__DOT__data_in2)
                                        ? 1U : 0U) : 0U)));
    } else if ((0x1000U & vlSelf->top__DOT__instr)) {
        vlSelf->top__DOT__cpu_cpu__DOT__data_out = 
            (vlSelf->top__DOT__data1 << (0x1fU & vlSelf->top__DOT__cpu_cpu__DOT__data_in2));
    } else if (vlSelf->top__DOT__cpu_cpu__DOT__sub_en) {
        if (vlSelf->top__DOT__cpu_cpu__DOT__sub_en) {
            vlSelf->top__DOT__cpu_cpu__DOT__data_out 
                = (vlSelf->top__DOT__data1 - vlSelf->top__DOT__cpu_cpu__DOT__data_in2);
        }
    } else {
        vlSelf->top__DOT__cpu_cpu__DOT__data_out = 
            (vlSelf->top__DOT__data1 + vlSelf->top__DOT__cpu_cpu__DOT__data_in2);
    }
    vlSelf->top__DOT__data_mem_cpu__DOT__data[(0x1fU 
                                               & ((IData)(3U) 
                                                  + vlSelf->top__DOT__data_mem_cpu__DOT__addr))] 
        = (0xffU & vlSelf->top__DOT__data2);
    vlSelf->top__DOT__data_mem_cpu__DOT__data[(0x1fU 
                                               & ((IData)(2U) 
                                                  + vlSelf->top__DOT__data_mem_cpu__DOT__addr))] 
        = (0xffU & (vlSelf->top__DOT__data2 >> 8U));
    vlSelf->top__DOT__data_mem_cpu__DOT__data[(0x1fU 
                                               & ((IData)(1U) 
                                                  + vlSelf->top__DOT__data_mem_cpu__DOT__addr))] 
        = (0xffU & (vlSelf->top__DOT__data2 >> 0x10U));
    vlSelf->top__DOT__data_mem_cpu__DOT__data[(0x1fU 
                                               & vlSelf->top__DOT__data_mem_cpu__DOT__addr)] 
        = (vlSelf->top__DOT__data2 >> 0x18U);
    vlSelf->top__DOT__data_mem = ((0xffffff00U & vlSelf->top__DOT__data_mem) 
                                  | vlSelf->top__DOT__data_mem_cpu__DOT__data
                                  [(0x1fU & vlSelf->top__DOT__data_mem_cpu__DOT__addr)]);
    vlSelf->top__DOT__data_mem = ((0xffff00ffU & vlSelf->top__DOT__data_mem) 
                                  | (vlSelf->top__DOT__data_mem_cpu__DOT__data
                                     [(0x1fU & ((IData)(1U) 
                                                + vlSelf->top__DOT__data_mem_cpu__DOT__addr))] 
                                     << 8U));
    vlSelf->top__DOT__data_mem = ((0xff00ffffU & vlSelf->top__DOT__data_mem) 
                                  | (vlSelf->top__DOT__data_mem_cpu__DOT__data
                                     [(0x1fU & ((IData)(2U) 
                                                + vlSelf->top__DOT__data_mem_cpu__DOT__addr))] 
                                     << 0x10U));
    vlSelf->top__DOT__data_mem = ((0xffffffU & vlSelf->top__DOT__data_mem) 
                                  | (vlSelf->top__DOT__data_mem_cpu__DOT__data
                                     [(0x1fU & ((IData)(3U) 
                                                + vlSelf->top__DOT__data_mem_cpu__DOT__addr))] 
                                     << 0x18U));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ext_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__instr_mem_cpu__DOT__instr_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->top__DOT__cpu_cpu__DOT__offset = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_cpu__DOT__imm = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__cpu_cpu__DOT__data_in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_cpu__DOT__sub_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__cpu_cpu__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__cpu_cpu__DOT__register_cpu__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_mem_cpu__DOT__addr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__data_mem_cpu__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__top__DOT__addr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
