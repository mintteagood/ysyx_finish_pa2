// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

//==========


void Vysyx_22040175_top___024root___ctor_var_reset(Vysyx_22040175_top___024root* vlSelf);

Vysyx_22040175_top___024root::Vysyx_22040175_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vysyx_22040175_top___024root___ctor_var_reset(this);
}

void Vysyx_22040175_top___024root::__Vconfigure(Vysyx_22040175_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vysyx_22040175_top___024root::~Vysyx_22040175_top___024root() {
}

void Vysyx_22040175_top___024root___settle__TOP__2(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__sub_en 
        = (IData)((0x40000033ULL == (0x4000007fULL 
                                     & vlSelf->instr)));
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm 
        = (0xfffU & ((((((0xfffU & (IData)((vlSelf->instr 
                                            >> 0x14U))) 
                         * (1U & (((((((IData)((vlSelf->instr 
                                                >> 6U)) 
                                       & (IData)((vlSelf->instr 
                                                  >> 5U))) 
                                      & (~ (1U & (IData)(
                                                         (vlSelf->instr 
                                                          >> 4U))))) 
                                     & (~ (1U & (IData)(
                                                        (vlSelf->instr 
                                                         >> 3U))))) 
                                    & (1U & (IData)(
                                                    (vlSelf->instr 
                                                     >> 2U)))) 
                                   & (1U & (IData)(
                                                   (vlSelf->instr 
                                                    >> 1U)))) 
                                  & (1U & (IData)(vlSelf->instr))))) 
                        + ((1U & (((((((IData)((vlSelf->instr 
                                                >> 6U)) 
                                       & (IData)((vlSelf->instr 
                                                  >> 5U))) 
                                      & (~ (1U & (IData)(
                                                         (vlSelf->instr 
                                                          >> 4U))))) 
                                     & (~ (1U & (IData)(
                                                        (vlSelf->instr 
                                                         >> 3U))))) 
                                    & (~ (1U & (IData)(
                                                       (vlSelf->instr 
                                                        >> 2U))))) 
                                   & (1U & (IData)(
                                                   (vlSelf->instr 
                                                    >> 1U)))) 
                                  & (1U & (IData)(vlSelf->instr)))) 
                           * ((0x800U & ((IData)((vlSelf->instr 
                                                  >> 0x1fU)) 
                                         << 0xbU)) 
                              | ((0x400U & ((IData)(
                                                    (vlSelf->instr 
                                                     >> 7U)) 
                                            << 0xaU)) 
                                 | ((0x3f0U & ((IData)(
                                                       (vlSelf->instr 
                                                        >> 0x19U)) 
                                               << 4U)) 
                                    | (0xfU & (IData)(
                                                      (vlSelf->instr 
                                                       >> 8U)))))))) 
                       + ((1U & (((((((~ (1U & (IData)(
                                                       (vlSelf->instr 
                                                        >> 6U)))) 
                                      & (~ (1U & (IData)(
                                                         (vlSelf->instr 
                                                          >> 5U))))) 
                                     & (~ (1U & (IData)(
                                                        (vlSelf->instr 
                                                         >> 4U))))) 
                                    & (~ (1U & (IData)(
                                                       (vlSelf->instr 
                                                        >> 3U))))) 
                                   & (~ (1U & (IData)(
                                                      (vlSelf->instr 
                                                       >> 2U))))) 
                                  & (IData)((vlSelf->instr 
                                             >> 1U))) 
                                 & (IData)(vlSelf->instr))) 
                          * (0xfffU & (IData)((vlSelf->instr 
                                               >> 0x14U))))) 
                      + ((1U & (((((((~ (1U & (IData)(
                                                      (vlSelf->instr 
                                                       >> 6U)))) 
                                     & (IData)((vlSelf->instr 
                                                >> 5U))) 
                                    & (~ (1U & (IData)(
                                                       (vlSelf->instr 
                                                        >> 4U))))) 
                                   & (~ (1U & (IData)(
                                                      (vlSelf->instr 
                                                       >> 3U))))) 
                                  & (~ (1U & (IData)(
                                                     (vlSelf->instr 
                                                      >> 2U))))) 
                                 & (IData)((vlSelf->instr 
                                            >> 1U))) 
                                & (1U & (IData)(vlSelf->instr)))) 
                         * ((0xfe0U & ((IData)((vlSelf->instr 
                                                >> 0x19U)) 
                                       << 5U)) | (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->instr 
                                                             >> 7U)))))) 
                     + ((1U & (((((((~ (1U & (IData)(
                                                     (vlSelf->instr 
                                                      >> 6U)))) 
                                    & (~ (1U & (IData)(
                                                       (vlSelf->instr 
                                                        >> 5U))))) 
                                   & (IData)((vlSelf->instr 
                                              >> 4U))) 
                                  & (~ (1U & (IData)(
                                                     (vlSelf->instr 
                                                      >> 3U))))) 
                                 & (~ (1U & (IData)(
                                                    (vlSelf->instr 
                                                     >> 2U))))) 
                                & (IData)((vlSelf->instr 
                                           >> 1U))) 
                               & (1U & (IData)(vlSelf->instr)))) 
                        * (0xfffU & (IData)((vlSelf->instr 
                                             >> 0x14U))))));
    vlSelf->ysyx_22040175_top__DOT__data2 = ((0U != 
                                              (0x1fU 
                                               & (IData)(
                                                         (vlSelf->instr 
                                                          >> 0x14U))))
                                              ? ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(
                                                              (vlSelf->instr 
                                                               >> 0x14U)) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register
                                                 [(0x1fU 
                                                   & ((IData)(
                                                              (vlSelf->instr 
                                                               >> 0x14U)) 
                                                      - (IData)(1U)))]
                                                  : 0U)
                                              : 0U);
    vlSelf->ysyx_22040175_top__DOT__data1 = ((0U != 
                                              (0x1fU 
                                               & (IData)(
                                                         (vlSelf->instr 
                                                          >> 0xfU))))
                                              ? ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((IData)(
                                                              (vlSelf->instr 
                                                               >> 0xfU)) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register
                                                 [(0x1fU 
                                                   & ((IData)(
                                                              (vlSelf->instr 
                                                               >> 0xfU)) 
                                                      - (IData)(1U)))]
                                                  : 0U)
                                              : 0U);
    vlSelf->ysyx_22040175_top__DOT__ext_imm = (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm) 
                                                               >> 0xbU)))) 
                                                << 0xcU) 
                                               | (IData)(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm));
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__offset 
        = ((3U == (3U & (IData)((vlSelf->instr >> 2U))))
            ? (((- (IData)((1U & (IData)((vlSelf->instr 
                                          >> 0x1fU))))) 
                << 0x14U) | ((0x80000U & ((IData)((vlSelf->instr 
                                                   >> 0x1fU)) 
                                          << 0x13U)) 
                             | ((0x7f800U & ((IData)(
                                                     (vlSelf->instr 
                                                      >> 0xcU)) 
                                             << 0xbU)) 
                                | ((0x400U & ((IData)(
                                                      (vlSelf->instr 
                                                       >> 0x14U)) 
                                              << 0xaU)) 
                                   | (0x3ffU & (IData)(
                                                       (vlSelf->instr 
                                                        >> 0x15U)))))))
            : ((1U == (3U & (IData)((vlSelf->instr 
                                     >> 2U)))) ? (vlSelf->ysyx_22040175_top__DOT__ext_imm 
                                                  + vlSelf->ysyx_22040175_top__DOT__data1)
                : ((0U == (3U & (IData)((vlSelf->instr 
                                         >> 2U)))) ? vlSelf->ysyx_22040175_top__DOT__ext_imm
                    : 0U)));
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2 
        = ((1U & (IData)((vlSelf->instr >> 5U))) ? vlSelf->ysyx_22040175_top__DOT__data2
            : vlSelf->ysyx_22040175_top__DOT__ext_imm);
    vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr 
        = (vlSelf->ysyx_22040175_top__DOT__ext_imm 
           + vlSelf->ysyx_22040175_top__DOT__data1);
    if ((1U & (IData)((vlSelf->instr >> 0xeU)))) {
        if ((1U & (IData)((vlSelf->instr >> 0xdU)))) {
            vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
                = ((1U & (IData)((vlSelf->instr >> 0xcU)))
                    ? (vlSelf->ysyx_22040175_top__DOT__data1 
                       & vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2)
                    : (vlSelf->ysyx_22040175_top__DOT__data1 
                       | vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2));
        } else if ((1U & (IData)((vlSelf->instr >> 0xcU)))) {
            if ((1U & (IData)((vlSelf->instr >> 0x1eU)))) {
                if ((1U & (IData)((vlSelf->instr >> 0x1eU)))) {
                    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
                        = (vlSelf->ysyx_22040175_top__DOT__data1 
                           >> (0x1fU & vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2));
                }
            } else {
                vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
                    = (vlSelf->ysyx_22040175_top__DOT__data1 
                       >> (0x1fU & vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2));
            }
        } else {
            vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
                = (vlSelf->ysyx_22040175_top__DOT__data1 
                   ^ vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2);
        }
    } else if ((1U & (IData)((vlSelf->instr >> 0xdU)))) {
        vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
            = ((1U & (IData)((vlSelf->instr >> 0xcU)))
                ? ((vlSelf->ysyx_22040175_top__DOT__data1 
                    < vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2)
                    ? 1U : 0U) : (((vlSelf->ysyx_22040175_top__DOT__data1 
                                    >> 0x1fU) > (vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2 
                                                 >> 0x1fU))
                                   ? 1U : (((vlSelf->ysyx_22040175_top__DOT__data1 
                                             >> 0x1fU) 
                                            == (vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2 
                                                >> 0x1fU))
                                            ? ((vlSelf->ysyx_22040175_top__DOT__data1 
                                                < vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2)
                                                ? 1U
                                                : 0U)
                                            : 0U)));
    } else if ((1U & (IData)((vlSelf->instr >> 0xcU)))) {
        vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
            = (vlSelf->ysyx_22040175_top__DOT__data1 
               << (0x1fU & vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2));
    } else if (vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__sub_en) {
        if (vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__sub_en) {
            vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
                = (vlSelf->ysyx_22040175_top__DOT__data1 
                   - vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2);
        }
    } else {
        vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
            = (vlSelf->ysyx_22040175_top__DOT__data1 
               + vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2);
    }
    vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[(0x1fU 
                                                             & ((IData)(3U) 
                                                                + vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr))] 
        = (0xffU & vlSelf->ysyx_22040175_top__DOT__data2);
    vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[(0x1fU 
                                                             & ((IData)(2U) 
                                                                + vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr))] 
        = (0xffU & (vlSelf->ysyx_22040175_top__DOT__data2 
                    >> 8U));
    vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[(0x1fU 
                                                             & ((IData)(1U) 
                                                                + vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr))] 
        = (0xffU & (vlSelf->ysyx_22040175_top__DOT__data2 
                    >> 0x10U));
    vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[(0x1fU 
                                                             & vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr)] 
        = (vlSelf->ysyx_22040175_top__DOT__data2 >> 0x18U);
    vlSelf->ysyx_22040175_top__DOT__data_mem = ((0xffffff00U 
                                                 & vlSelf->ysyx_22040175_top__DOT__data_mem) 
                                                | vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data
                                                [(0x1fU 
                                                  & vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr)]);
    vlSelf->ysyx_22040175_top__DOT__data_mem = ((0xffff00ffU 
                                                 & vlSelf->ysyx_22040175_top__DOT__data_mem) 
                                                | (vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(1U) 
                                                       + vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr))] 
                                                   << 8U));
    vlSelf->ysyx_22040175_top__DOT__data_mem = ((0xff00ffffU 
                                                 & vlSelf->ysyx_22040175_top__DOT__data_mem) 
                                                | (vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(2U) 
                                                       + vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr))] 
                                                   << 0x10U));
    vlSelf->ysyx_22040175_top__DOT__data_mem = ((0xffffffU 
                                                 & vlSelf->ysyx_22040175_top__DOT__data_mem) 
                                                | (vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data
                                                   [
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr))] 
                                                   << 0x18U));
}

void Vysyx_22040175_top___024root___initial__TOP__6(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___initial__TOP__6\n"); );
    // Body
    vlSelf->addr = 0x80000000U;
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr = 0U;
}

void Vysyx_22040175_top___024root___eval_initial(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vysyx_22040175_top___024root___initial__TOP__6(vlSelf);
}

void Vysyx_22040175_top___024root___eval_settle(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040175_top___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vysyx_22040175_top___024root___final(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___final\n"); );
}

void Vysyx_22040175_top___024root___ctor_var_reset(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->instr = VL_RAND_RESET_Q(64);
    vlSelf->addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__ext_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__data1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__data2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__data_mem = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__offset = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm = VL_RAND_RESET_I(12);
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__sub_en = VL_RAND_RESET_I(1);
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT____Vlvbound1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__addr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
