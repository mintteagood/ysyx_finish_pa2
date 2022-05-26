// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

//==========

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__sub_en 
        = (IData)((0x40000033U == (0x4000007fU & vlSelf->instr)));
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm 
        = (0xfffU & ((((((vlSelf->instr >> 0x14U) * 
                         (1U & (((((((vlSelf->instr 
                                      >> 6U) & (vlSelf->instr 
                                                >> 5U)) 
                                    & (~ (1U & (vlSelf->instr 
                                                >> 4U)))) 
                                   & (~ (1U & (vlSelf->instr 
                                               >> 3U)))) 
                                  & (1U & (vlSelf->instr 
                                           >> 2U))) 
                                 & (1U & (vlSelf->instr 
                                          >> 1U))) 
                                & (1U & vlSelf->instr)))) 
                        + ((1U & (((((((vlSelf->instr 
                                        >> 6U) & (vlSelf->instr 
                                                  >> 5U)) 
                                      & (~ (1U & (vlSelf->instr 
                                                  >> 4U)))) 
                                     & (~ (1U & (vlSelf->instr 
                                                 >> 3U)))) 
                                    & (~ (1U & (vlSelf->instr 
                                                >> 2U)))) 
                                   & (1U & (vlSelf->instr 
                                            >> 1U))) 
                                  & (1U & vlSelf->instr))) 
                           * ((0x800U & (vlSelf->instr 
                                         >> 0x14U)) 
                              | ((0x400U & (vlSelf->instr 
                                            << 3U)) 
                                 | ((0x3f0U & (vlSelf->instr 
                                               >> 0x15U)) 
                                    | (0xfU & (vlSelf->instr 
                                               >> 8U))))))) 
                       + ((1U & (((((((~ (1U & (vlSelf->instr 
                                                >> 6U))) 
                                      & (~ (1U & (vlSelf->instr 
                                                  >> 5U)))) 
                                     & (~ (1U & (vlSelf->instr 
                                                 >> 4U)))) 
                                    & (~ (1U & (vlSelf->instr 
                                                >> 3U)))) 
                                   & (~ (1U & (vlSelf->instr 
                                               >> 2U)))) 
                                  & (vlSelf->instr 
                                     >> 1U)) & vlSelf->instr)) 
                          * (vlSelf->instr >> 0x14U))) 
                      + ((1U & (((((((~ (1U & (vlSelf->instr 
                                               >> 6U))) 
                                     & (vlSelf->instr 
                                        >> 5U)) & (~ 
                                                   (1U 
                                                    & (vlSelf->instr 
                                                       >> 4U)))) 
                                   & (~ (1U & (vlSelf->instr 
                                               >> 3U)))) 
                                  & (~ (1U & (vlSelf->instr 
                                              >> 2U)))) 
                                 & (vlSelf->instr >> 1U)) 
                                & (1U & vlSelf->instr))) 
                         * ((0xfe0U & (vlSelf->instr 
                                       >> 0x14U)) | 
                            (0x1fU & (vlSelf->instr 
                                      >> 7U))))) + 
                     ((1U & (((((((~ (1U & (vlSelf->instr 
                                            >> 6U))) 
                                  & (~ (1U & (vlSelf->instr 
                                              >> 5U)))) 
                                 & (vlSelf->instr >> 4U)) 
                                & (~ (1U & (vlSelf->instr 
                                            >> 3U)))) 
                               & (~ (1U & (vlSelf->instr 
                                           >> 2U)))) 
                              & (vlSelf->instr >> 1U)) 
                             & (1U & vlSelf->instr))) 
                      * (vlSelf->instr >> 0x14U))));
    vlSelf->ysyx_22040175_top__DOT__ext_imm = (((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm) 
                                                               >> 0xbU)))) 
                                                << 0xcU) 
                                               | (IData)(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm));
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__4(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->__Vdly__addr = vlSelf->addr;
    vlSelf->__Vdly__addr = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr);
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__5(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__5\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register__v0;
    IData/*31:0*/ __Vdlyvval__ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register__v0;
    // Body
    __Vdlyvset__ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register__v0 = 0U;
    if ((((((0x33U == (0x7fU & vlSelf->instr)) | (0x13U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->instr))) 
           | (0x6fU == (0x7fU & vlSelf->instr))) | 
          (0x67U == (0x7fU & vlSelf->instr))) | (3U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->instr)))) {
        vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT____Vlvbound1 
            = ((0x10U & vlSelf->instr) ? vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out
                : ((0x40U & vlSelf->instr) ? ((IData)(4U) 
                                              + vlSelf->addr)
                    : vlSelf->ysyx_22040175_top__DOT__data_mem));
        if ((0x1eU >= (0x1fU & ((vlSelf->instr >> 7U) 
                                - (IData)(1U))))) {
            __Vdlyvval__ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register__v0 
                = vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT____Vlvbound1;
            __Vdlyvset__ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register__v0 = 1U;
            __Vdlyvdim0__ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register__v0 
                = (0x1fU & ((vlSelf->instr >> 7U) - (IData)(1U)));
        }
    }
    if (__Vdlyvset__ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register__v0) {
        vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[__Vdlyvdim0__ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register__v0] 
            = __Vdlyvval__ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register__v0;
    }
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__7(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr 
        = ((IData)(vlSelf->rst) ? 0U : ((0x6fU == (0x7fU 
                                                   & vlSelf->instr))
                                         ? (vlSelf->addr 
                                            + (vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__offset 
                                               << 1U))
                                         : ((0x67U 
                                             == (0x7fU 
                                                 & vlSelf->instr))
                                             ? vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__offset
                                             : (((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->instr)) 
                                                 & ((0x4000U 
                                                     & vlSelf->instr)
                                                     ? 
                                                    ((0x2000U 
                                                      & vlSelf->instr)
                                                      ? 
                                                     ((0x1000U 
                                                       & vlSelf->instr)
                                                       ? 
                                                      (vlSelf->ysyx_22040175_top__DOT__data1 
                                                       >= vlSelf->ysyx_22040175_top__DOT__data2)
                                                       : 
                                                      (vlSelf->ysyx_22040175_top__DOT__data1 
                                                       < vlSelf->ysyx_22040175_top__DOT__data2))
                                                      : 
                                                     ((0x1000U 
                                                       & vlSelf->instr)
                                                       ? 
                                                      (((vlSelf->ysyx_22040175_top__DOT__data1 
                                                         >> 0x1fU) 
                                                        <= 
                                                        (vlSelf->ysyx_22040175_top__DOT__data2 
                                                         >> 0x1fU)) 
                                                       & (((vlSelf->ysyx_22040175_top__DOT__data1 
                                                            >> 0x1fU) 
                                                           != 
                                                           (vlSelf->ysyx_22040175_top__DOT__data2 
                                                            >> 0x1fU)) 
                                                          | (vlSelf->ysyx_22040175_top__DOT__data1 
                                                             >= vlSelf->ysyx_22040175_top__DOT__data2)))
                                                       : 
                                                      (((vlSelf->ysyx_22040175_top__DOT__data1 
                                                         >> 0x1fU) 
                                                        > 
                                                        (vlSelf->ysyx_22040175_top__DOT__data2 
                                                         >> 0x1fU)) 
                                                       | (((vlSelf->ysyx_22040175_top__DOT__data1 
                                                            >> 0x1fU) 
                                                           == 
                                                           (vlSelf->ysyx_22040175_top__DOT__data2 
                                                            >> 0x1fU)) 
                                                          & (vlSelf->ysyx_22040175_top__DOT__data1 
                                                             < vlSelf->ysyx_22040175_top__DOT__data2)))))
                                                     : 
                                                    ((~ 
                                                      (vlSelf->instr 
                                                       >> 0xdU)) 
                                                     & ((0x1000U 
                                                         & vlSelf->instr)
                                                         ? 
                                                        (vlSelf->ysyx_22040175_top__DOT__data1 
                                                         != vlSelf->ysyx_22040175_top__DOT__data2)
                                                         : 
                                                        (vlSelf->ysyx_22040175_top__DOT__data1 
                                                         == vlSelf->ysyx_22040175_top__DOT__data2)))))
                                                 ? 
                                                (vlSelf->addr 
                                                 + 
                                                 (vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__offset 
                                                  << 1U))
                                                 : 
                                                ((IData)(4U) 
                                                 + vlSelf->addr)))));
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__8(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__8\n"); );
    // Body
    vlSelf->addr = vlSelf->__Vdly__addr;
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__9(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__9\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__data2 = ((0U != 
                                              (0x1fU 
                                               & (vlSelf->instr 
                                                  >> 0x14U)))
                                              ? ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->instr 
                                                       >> 0x14U) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register
                                                 [(0x1fU 
                                                   & ((vlSelf->instr 
                                                       >> 0x14U) 
                                                      - (IData)(1U)))]
                                                  : 0U)
                                              : 0U);
    vlSelf->ysyx_22040175_top__DOT__data1 = ((0U != 
                                              (0x1fU 
                                               & (vlSelf->instr 
                                                  >> 0xfU)))
                                              ? ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register
                                                 [(0x1fU 
                                                   & ((vlSelf->instr 
                                                       >> 0xfU) 
                                                      - (IData)(1U)))]
                                                  : 0U)
                                              : 0U);
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2 
        = ((0x20U & vlSelf->instr) ? vlSelf->ysyx_22040175_top__DOT__data2
            : vlSelf->ysyx_22040175_top__DOT__ext_imm);
    vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__offset 
        = ((3U == (3U & (vlSelf->instr >> 2U))) ? (
                                                   ((- (IData)(
                                                               (vlSelf->instr 
                                                                >> 0x1fU))) 
                                                    << 0x14U) 
                                                   | ((0x80000U 
                                                       & (vlSelf->instr 
                                                          >> 0xcU)) 
                                                      | ((0x7f800U 
                                                          & (vlSelf->instr 
                                                             >> 1U)) 
                                                         | ((0x400U 
                                                             & (vlSelf->instr 
                                                                >> 0xaU)) 
                                                            | (0x3ffU 
                                                               & (vlSelf->instr 
                                                                  >> 0x15U))))))
            : ((1U == (3U & (vlSelf->instr >> 2U)))
                ? (vlSelf->ysyx_22040175_top__DOT__ext_imm 
                   + vlSelf->ysyx_22040175_top__DOT__data1)
                : ((0U == (3U & (vlSelf->instr >> 2U)))
                    ? vlSelf->ysyx_22040175_top__DOT__ext_imm
                    : 0U)));
    vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr 
        = (vlSelf->ysyx_22040175_top__DOT__ext_imm 
           + vlSelf->ysyx_22040175_top__DOT__data1);
    if ((0x4000U & vlSelf->instr)) {
        if ((0x2000U & vlSelf->instr)) {
            vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
                = ((0x1000U & vlSelf->instr) ? (vlSelf->ysyx_22040175_top__DOT__data1 
                                                & vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2)
                    : (vlSelf->ysyx_22040175_top__DOT__data1 
                       | vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2));
        } else if ((0x1000U & vlSelf->instr)) {
            if ((0x40000000U & vlSelf->instr)) {
                if ((0x40000000U & vlSelf->instr)) {
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
    } else if ((0x2000U & vlSelf->instr)) {
        vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out 
            = ((0x1000U & vlSelf->instr) ? ((vlSelf->ysyx_22040175_top__DOT__data1 
                                             < vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2)
                                             ? 1U : 0U)
                : (((vlSelf->ysyx_22040175_top__DOT__data1 
                     >> 0x1fU) > (vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2 
                                  >> 0x1fU)) ? 1U : 
                   (((vlSelf->ysyx_22040175_top__DOT__data1 
                      >> 0x1fU) == (vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2 
                                    >> 0x1fU)) ? ((vlSelf->ysyx_22040175_top__DOT__data1 
                                                   < vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2)
                                                   ? 1U
                                                   : 0U)
                     : 0U)));
    } else if ((0x1000U & vlSelf->instr)) {
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

void Vysyx_22040175_top___024root___eval(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval\n"); );
    // Body
    Vysyx_22040175_top___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vysyx_22040175_top___024root___sequent__TOP__4(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Vysyx_22040175_top___024root___sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk)) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vysyx_22040175_top___024root___sequent__TOP__7(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vysyx_22040175_top___024root___sequent__TOP__8(vlSelf);
    }
    Vysyx_22040175_top___024root___combo__TOP__9(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22040175_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22040175_top___024root___eval_debug_assertions(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
