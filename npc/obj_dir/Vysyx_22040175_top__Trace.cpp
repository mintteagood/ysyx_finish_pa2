// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040175_top__Syms.h"


void Vysyx_22040175_top___024root__traceChgSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040175_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040175_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040175_top___024root*>(voidSelf);
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22040175_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040175_top___024root__traceChgSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(vlSelf->ysyx_22040175_top__DOT__ext_imm),32);
            tracep->chgIData(oldp+1,(vlSelf->ysyx_22040175_top__DOT__data1),32);
            tracep->chgIData(oldp+2,(vlSelf->ysyx_22040175_top__DOT__data2),32);
            tracep->chgIData(oldp+3,(vlSelf->ysyx_22040175_top__DOT__data_mem),32);
            tracep->chgIData(oldp+4,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__offset),32);
            tracep->chgSData(oldp+5,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm),12);
            tracep->chgIData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2),32);
            tracep->chgBit(oldp+7,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__sub_en));
            tracep->chgIData(oldp+8,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out),32);
            tracep->chgCData(oldp+9,((0x1fU & vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2)),5);
            tracep->chgIData(oldp+10,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr),32);
            tracep->chgCData(oldp+11,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[0]),8);
            tracep->chgCData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[1]),8);
            tracep->chgCData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[2]),8);
            tracep->chgCData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[3]),8);
            tracep->chgCData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[4]),8);
            tracep->chgCData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[5]),8);
            tracep->chgCData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[6]),8);
            tracep->chgCData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[7]),8);
            tracep->chgCData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[8]),8);
            tracep->chgCData(oldp+20,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[9]),8);
            tracep->chgCData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[10]),8);
            tracep->chgCData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[11]),8);
            tracep->chgCData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[12]),8);
            tracep->chgCData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[13]),8);
            tracep->chgCData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[14]),8);
            tracep->chgCData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[15]),8);
            tracep->chgCData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[16]),8);
            tracep->chgCData(oldp+28,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[17]),8);
            tracep->chgCData(oldp+29,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[18]),8);
            tracep->chgCData(oldp+30,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[19]),8);
            tracep->chgCData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[20]),8);
            tracep->chgCData(oldp+32,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[21]),8);
            tracep->chgCData(oldp+33,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[22]),8);
            tracep->chgCData(oldp+34,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[23]),8);
            tracep->chgCData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[24]),8);
            tracep->chgCData(oldp+36,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[25]),8);
            tracep->chgCData(oldp+37,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[26]),8);
            tracep->chgCData(oldp+38,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[27]),8);
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[28]),8);
            tracep->chgCData(oldp+40,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[29]),8);
            tracep->chgCData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[30]),8);
            tracep->chgCData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[31]),8);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[0]),32);
            tracep->chgIData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[1]),32);
            tracep->chgIData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[2]),32);
            tracep->chgIData(oldp+46,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[3]),32);
            tracep->chgIData(oldp+47,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[4]),32);
            tracep->chgIData(oldp+48,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[5]),32);
            tracep->chgIData(oldp+49,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[6]),32);
            tracep->chgIData(oldp+50,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[7]),32);
            tracep->chgIData(oldp+51,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[8]),32);
            tracep->chgIData(oldp+52,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[9]),32);
            tracep->chgIData(oldp+53,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[10]),32);
            tracep->chgIData(oldp+54,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[11]),32);
            tracep->chgIData(oldp+55,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[12]),32);
            tracep->chgIData(oldp+56,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[13]),32);
            tracep->chgIData(oldp+57,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[14]),32);
            tracep->chgIData(oldp+58,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[15]),32);
            tracep->chgIData(oldp+59,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[16]),32);
            tracep->chgIData(oldp+60,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[17]),32);
            tracep->chgIData(oldp+61,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[18]),32);
            tracep->chgIData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[19]),32);
            tracep->chgIData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[20]),32);
            tracep->chgIData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[21]),32);
            tracep->chgIData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[22]),32);
            tracep->chgIData(oldp+66,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[23]),32);
            tracep->chgIData(oldp+67,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[24]),32);
            tracep->chgIData(oldp+68,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[25]),32);
            tracep->chgIData(oldp+69,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[26]),32);
            tracep->chgIData(oldp+70,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[27]),32);
            tracep->chgIData(oldp+71,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[28]),32);
            tracep->chgIData(oldp+72,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[29]),32);
            tracep->chgIData(oldp+73,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[30]),32);
        }
        tracep->chgBit(oldp+74,(vlSelf->clk));
        tracep->chgBit(oldp+75,(vlSelf->rst));
        tracep->chgQData(oldp+76,(vlSelf->instr),64);
        tracep->chgIData(oldp+78,(vlSelf->addr),32);
        tracep->chgBit(oldp+79,((3U == (0x7fU & (IData)(vlSelf->instr)))));
        tracep->chgBit(oldp+80,((0x23U == (0x7fU & (IData)(vlSelf->instr)))));
        tracep->chgIData(oldp+81,((IData)(vlSelf->instr)),32);
        tracep->chgBit(oldp+82,((0x6fU == (0x7fU & (IData)(vlSelf->instr)))));
        tracep->chgBit(oldp+83,((0x67U == (0x7fU & (IData)(vlSelf->instr)))));
        tracep->chgBit(oldp+84,(((0x63U == (0x7fU & (IData)(vlSelf->instr))) 
                                 & ((1U & (IData)((vlSelf->instr 
                                                   >> 0xeU)))
                                     ? ((1U & (IData)(
                                                      (vlSelf->instr 
                                                       >> 0xdU)))
                                         ? ((1U & (IData)(
                                                          (vlSelf->instr 
                                                           >> 0xcU)))
                                             ? (vlSelf->ysyx_22040175_top__DOT__data1 
                                                >= vlSelf->ysyx_22040175_top__DOT__data2)
                                             : (vlSelf->ysyx_22040175_top__DOT__data1 
                                                < vlSelf->ysyx_22040175_top__DOT__data2))
                                         : ((1U & (IData)(
                                                          (vlSelf->instr 
                                                           >> 0xcU)))
                                             ? (((vlSelf->ysyx_22040175_top__DOT__data1 
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
                                             : (((vlSelf->ysyx_22040175_top__DOT__data1 
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
                                     : ((~ (IData)(
                                                   (vlSelf->instr 
                                                    >> 0xdU))) 
                                        & ((1U & (IData)(
                                                         (vlSelf->instr 
                                                          >> 0xcU)))
                                            ? (vlSelf->ysyx_22040175_top__DOT__data1 
                                               != vlSelf->ysyx_22040175_top__DOT__data2)
                                            : (vlSelf->ysyx_22040175_top__DOT__data1 
                                               == vlSelf->ysyx_22040175_top__DOT__data2)))))));
        tracep->chgCData(oldp+85,((0x7fU & (IData)(vlSelf->instr))),7);
        tracep->chgCData(oldp+86,((0x1fU & (IData)(
                                                   (vlSelf->instr 
                                                    >> 7U)))),5);
        tracep->chgCData(oldp+87,((7U & (IData)((vlSelf->instr 
                                                 >> 0xcU)))),3);
        tracep->chgCData(oldp+88,((0x1fU & (IData)(
                                                   (vlSelf->instr 
                                                    >> 0xfU)))),5);
        tracep->chgCData(oldp+89,((0x1fU & (IData)(
                                                   (vlSelf->instr 
                                                    >> 0x14U)))),5);
        tracep->chgBit(oldp+90,((1U & (IData)((vlSelf->instr 
                                               >> 0x1eU)))));
        tracep->chgIData(oldp+91,((((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->instr 
                                                           >> 0x1fU))))) 
                                    << 0x14U) | ((0x80000U 
                                                  & ((IData)(
                                                             (vlSelf->instr 
                                                              >> 0x1fU)) 
                                                     << 0x13U)) 
                                                 | ((0x7f800U 
                                                     & ((IData)(
                                                                (vlSelf->instr 
                                                                 >> 0xcU)) 
                                                        << 0xbU)) 
                                                    | ((0x400U 
                                                        & ((IData)(
                                                                   (vlSelf->instr 
                                                                    >> 0x14U)) 
                                                           << 0xaU)) 
                                                       | (0x3ffU 
                                                          & (IData)(
                                                                    (vlSelf->instr 
                                                                     >> 0x15U)))))))),32);
        tracep->chgBit(oldp+92,((((((0x33U == (0x7fU 
                                               & (IData)(vlSelf->instr))) 
                                    | (0x13U == (0x7fU 
                                                 & (IData)(vlSelf->instr)))) 
                                   | (0x6fU == (0x7fU 
                                                & (IData)(vlSelf->instr)))) 
                                  | (0x67U == (0x7fU 
                                               & (IData)(vlSelf->instr)))) 
                                 | (3U == (0x7fU & (IData)(vlSelf->instr))))));
        tracep->chgIData(oldp+93,(((1U & (IData)((vlSelf->instr 
                                                  >> 4U)))
                                    ? vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out
                                    : ((1U & (IData)(
                                                     (vlSelf->instr 
                                                      >> 6U)))
                                        ? ((IData)(4U) 
                                           + vlSelf->addr)
                                        : vlSelf->ysyx_22040175_top__DOT__data_mem))),32);
        tracep->chgBit(oldp+94,(((1U & (IData)((vlSelf->instr 
                                                >> 0xeU)))
                                  ? ((1U & (IData)(
                                                   (vlSelf->instr 
                                                    >> 0xdU)))
                                      ? ((1U & (IData)(
                                                       (vlSelf->instr 
                                                        >> 0xcU)))
                                          ? (vlSelf->ysyx_22040175_top__DOT__data1 
                                             >= vlSelf->ysyx_22040175_top__DOT__data2)
                                          : (vlSelf->ysyx_22040175_top__DOT__data1 
                                             < vlSelf->ysyx_22040175_top__DOT__data2))
                                      : ((1U & (IData)(
                                                       (vlSelf->instr 
                                                        >> 0xcU)))
                                          ? (((vlSelf->ysyx_22040175_top__DOT__data1 
                                               >> 0x1fU) 
                                              <= (vlSelf->ysyx_22040175_top__DOT__data2 
                                                  >> 0x1fU)) 
                                             & (((vlSelf->ysyx_22040175_top__DOT__data1 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->ysyx_22040175_top__DOT__data2 
                                                  >> 0x1fU)) 
                                                | (vlSelf->ysyx_22040175_top__DOT__data1 
                                                   >= vlSelf->ysyx_22040175_top__DOT__data2)))
                                          : (((vlSelf->ysyx_22040175_top__DOT__data1 
                                               >> 0x1fU) 
                                              > (vlSelf->ysyx_22040175_top__DOT__data2 
                                                 >> 0x1fU)) 
                                             | (((vlSelf->ysyx_22040175_top__DOT__data1 
                                                  >> 0x1fU) 
                                                 == 
                                                 (vlSelf->ysyx_22040175_top__DOT__data2 
                                                  >> 0x1fU)) 
                                                & (vlSelf->ysyx_22040175_top__DOT__data1 
                                                   < vlSelf->ysyx_22040175_top__DOT__data2)))))
                                  : ((~ (IData)((vlSelf->instr 
                                                 >> 0xdU))) 
                                     & ((1U & (IData)(
                                                      (vlSelf->instr 
                                                       >> 0xcU)))
                                         ? (vlSelf->ysyx_22040175_top__DOT__data1 
                                            != vlSelf->ysyx_22040175_top__DOT__data2)
                                         : (vlSelf->ysyx_22040175_top__DOT__data1 
                                            == vlSelf->ysyx_22040175_top__DOT__data2))))));
        tracep->chgIData(oldp+95,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr),32);
        tracep->chgBit(oldp+96,((1U & (IData)((vlSelf->instr 
                                               >> 5U)))));
        tracep->chgBit(oldp+97,((1U & (IData)((vlSelf->instr 
                                               >> 4U)))));
        tracep->chgBit(oldp+98,((1U & (IData)((vlSelf->instr 
                                               >> 6U)))));
        tracep->chgCData(oldp+99,((3U & (IData)((vlSelf->instr 
                                                 >> 2U)))),2);
    }
}

void Vysyx_22040175_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22040175_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040175_top___024root*>(voidSelf);
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
