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

extern const VlWide<12>/*383:0*/ Vysyx_22040175_top__ConstPool__CONST_3c62164f_0;

void Vysyx_22040175_top___024root___initial__TOP__1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(false, 8, 32, 0, VL_CVT_PACK_STR_NW(12, Vysyx_22040175_top__ConstPool__CONST_3c62164f_0)
                 ,  &(vlSelf->ysyx_22040175_top__DOT__instr_mem_cpu__DOT__instr_mem)
                 , 0, ~0ULL);
    vlSelf->ysyx_22040175_top__DOT__addr = 0U;
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr = 0U;
}

void Vysyx_22040175_top___024root___settle__TOP__5(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___settle__TOP__5\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__instr = ((0xffffff00U 
                                              & vlSelf->ysyx_22040175_top__DOT__instr) 
                                             | vlSelf->ysyx_22040175_top__DOT__instr_mem_cpu__DOT__instr_mem
                                             [(0x1fU 
                                               & ((IData)(3U) 
                                                  + vlSelf->ysyx_22040175_top__DOT__addr))]);
    vlSelf->ysyx_22040175_top__DOT__instr = ((0xffff00ffU 
                                              & vlSelf->ysyx_22040175_top__DOT__instr) 
                                             | (vlSelf->ysyx_22040175_top__DOT__instr_mem_cpu__DOT__instr_mem
                                                [(0x1fU 
                                                  & ((IData)(2U) 
                                                     + vlSelf->ysyx_22040175_top__DOT__addr))] 
                                                << 8U));
    vlSelf->ysyx_22040175_top__DOT__instr = ((0xff00ffffU 
                                              & vlSelf->ysyx_22040175_top__DOT__instr) 
                                             | (vlSelf->ysyx_22040175_top__DOT__instr_mem_cpu__DOT__instr_mem
                                                [(0x1fU 
                                                  & ((IData)(1U) 
                                                     + vlSelf->ysyx_22040175_top__DOT__addr))] 
                                                << 0x10U));
    vlSelf->ysyx_22040175_top__DOT__instr = ((0xffffffU 
                                              & vlSelf->ysyx_22040175_top__DOT__instr) 
                                             | (vlSelf->ysyx_22040175_top__DOT__instr_mem_cpu__DOT__instr_mem
                                                [(0x1fU 
                                                  & vlSelf->ysyx_22040175_top__DOT__addr)] 
                                                << 0x18U));
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__sub_en 
        = (IData)((0x40000033U == (0x4000007fU & vlSelf->ysyx_22040175_top__DOT__instr)));
    vlSelf->ysyx_22040175_top__DOT__data2 = ((0U != 
                                              (0x1fU 
                                               & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                  >> 0x14U)))
                                              ? ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->ysyx_22040175_top__DOT__instr 
                                                       >> 0x14U) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register
                                                 [(0x1fU 
                                                   & ((vlSelf->ysyx_22040175_top__DOT__instr 
                                                       >> 0x14U) 
                                                      - (IData)(1U)))]
                                                  : 0U)
                                              : 0U);
    vlSelf->ysyx_22040175_top__DOT__data1 = ((0U != 
                                              (0x1fU 
                                               & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                  >> 0xfU)))
                                              ? ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->ysyx_22040175_top__DOT__instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register
                                                 [(0x1fU 
                                                   & ((vlSelf->ysyx_22040175_top__DOT__instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U)))]
                                                  : 0U)
                                              : 0U);
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm 
        = (0xfffU & ((((((vlSelf->ysyx_22040175_top__DOT__instr 
                          >> 0x14U) * (1U & (((((((vlSelf->ysyx_22040175_top__DOT__instr 
                                                   >> 6U) 
                                                  & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                     >> 5U)) 
                                                 & (~ 
                                                    (1U 
                                                     & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                        >> 4U)))) 
                                                & (~ 
                                                   (1U 
                                                    & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                       >> 3U)))) 
                                               & (1U 
                                                  & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                     >> 2U))) 
                                              & (1U 
                                                 & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                    >> 1U))) 
                                             & (1U 
                                                & vlSelf->ysyx_22040175_top__DOT__instr)))) 
                        + ((1U & (((((((vlSelf->ysyx_22040175_top__DOT__instr 
                                        >> 6U) & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                  >> 5U)) 
                                      & (~ (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                  >> 4U)))) 
                                     & (~ (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                 >> 3U)))) 
                                    & (~ (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                >> 2U)))) 
                                   & (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                            >> 1U))) 
                                  & (1U & vlSelf->ysyx_22040175_top__DOT__instr))) 
                           * ((0x800U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                         >> 0x14U)) 
                              | ((0x400U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                            << 3U)) 
                                 | ((0x3f0U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                               >> 0x15U)) 
                                    | (0xfU & (vlSelf->ysyx_22040175_top__DOT__instr 
                                               >> 8U))))))) 
                       + ((1U & (((((((~ (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                >> 6U))) 
                                      & (~ (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                  >> 5U)))) 
                                     & (~ (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                 >> 4U)))) 
                                    & (~ (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                >> 3U)))) 
                                   & (~ (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                               >> 2U)))) 
                                  & (vlSelf->ysyx_22040175_top__DOT__instr 
                                     >> 1U)) & vlSelf->ysyx_22040175_top__DOT__instr)) 
                          * (vlSelf->ysyx_22040175_top__DOT__instr 
                             >> 0x14U))) + ((1U & (
                                                   ((((((~ 
                                                         (1U 
                                                          & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                             >> 6U))) 
                                                        & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                           >> 5U)) 
                                                       & (~ 
                                                          (1U 
                                                           & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                              >> 4U)))) 
                                                      & (~ 
                                                         (1U 
                                                          & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                             >> 3U)))) 
                                                     & (~ 
                                                        (1U 
                                                         & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                            >> 2U)))) 
                                                    & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                       >> 1U)) 
                                                   & (1U 
                                                      & vlSelf->ysyx_22040175_top__DOT__instr))) 
                                            * ((0xfe0U 
                                                & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                     >> 7U))))) 
                     + ((1U & (((((((~ (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                              >> 6U))) 
                                    & (~ (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                >> 5U)))) 
                                   & (vlSelf->ysyx_22040175_top__DOT__instr 
                                      >> 4U)) & (~ 
                                                 (1U 
                                                  & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                     >> 3U)))) 
                                 & (~ (1U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                             >> 2U)))) 
                                & (vlSelf->ysyx_22040175_top__DOT__instr 
                                   >> 1U)) & (1U & vlSelf->ysyx_22040175_top__DOT__instr))) 
                        * (vlSelf->ysyx_22040175_top__DOT__instr 
                           >> 0x14U))));
    vlSelf->ysyx_22040175_top__DOT__ext_imm = (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm) 
                                                               >> 0xbU)))) 
                                                << 0xcU) 
                                               | (IData)(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm));
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__offset 
        = ((3U == (3U & (vlSelf->ysyx_22040175_top__DOT__instr 
                         >> 2U))) ? (((- (IData)((vlSelf->ysyx_22040175_top__DOT__instr 
                                                  >> 0x1fU))) 
                                      << 0x14U) | (
                                                   (0x80000U 
                                                    & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                       >> 0xcU)) 
                                                   | ((0x7f800U 
                                                       & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                          >> 1U)) 
                                                      | ((0x400U 
                                                          & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                             >> 0xaU)) 
                                                         | (0x3ffU 
                                                            & (vlSelf->ysyx_22040175_top__DOT__instr 
                                                               >> 0x15U))))))
            : ((1U == (3U & (vlSelf->ysyx_22040175_top__DOT__instr 
                             >> 2U))) ? (vlSelf->ysyx_22040175_top__DOT__ext_imm 
                                         + vlSelf->ysyx_22040175_top__DOT__data1)
                : ((0U == (3U & (vlSelf->ysyx_22040175_top__DOT__instr 
                                 >> 2U))) ? vlSelf->ysyx_22040175_top__DOT__ext_imm
                    : 0U)));
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2 
        = ((0x20U & vlSelf->ysyx_22040175_top__DOT__instr)
            ? vlSelf->ysyx_22040175_top__DOT__data2
            : vlSelf->ysyx_22040175_top__DOT__ext_imm);
    vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr 
        = (vlSelf->ysyx_22040175_top__DOT__ext_imm 
           + vlSelf->ysyx_22040175_top__DOT__data1);
    if ((0x4000U & vlSelf->ysyx_22040175_top__DOT__instr)) {
        if ((0x2000U & vlSelf->ysyx_22040175_top__DOT__instr)) {
            vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
                = ((0x1000U & vlSelf->ysyx_22040175_top__DOT__instr)
                    ? (vlSelf->ysyx_22040175_top__DOT__data1 
                       & vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2)
                    : (vlSelf->ysyx_22040175_top__DOT__data1 
                       | vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2));
        } else if ((0x1000U & vlSelf->ysyx_22040175_top__DOT__instr)) {
            if ((0x40000000U & vlSelf->ysyx_22040175_top__DOT__instr)) {
                if ((0x40000000U & vlSelf->ysyx_22040175_top__DOT__instr)) {
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
    } else if ((0x2000U & vlSelf->ysyx_22040175_top__DOT__instr)) {
        vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
            = ((0x1000U & vlSelf->ysyx_22040175_top__DOT__instr)
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
    } else if ((0x1000U & vlSelf->ysyx_22040175_top__DOT__instr)) {
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

void Vysyx_22040175_top___024root___eval_initial(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_initial\n"); );
    // Body
    Vysyx_22040175_top___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vysyx_22040175_top___024root___eval_settle(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_settle\n"); );
    // Body
    Vysyx_22040175_top___024root___settle__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
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
    vlSelf->ysyx_22040175_top__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__ext_imm = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__data1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__data2 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_22040175_top__DOT__data_mem = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_22040175_top__DOT__instr_mem_cpu__DOT__instr_mem[__Vi0] = VL_RAND_RESET_I(8);
    }
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
    vlSelf->__Vdly__ysyx_22040175_top__DOT__addr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
