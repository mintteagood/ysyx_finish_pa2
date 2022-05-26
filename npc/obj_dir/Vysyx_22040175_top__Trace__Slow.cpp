// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040175_top__Syms.h"


void Vysyx_22040175_top___024root__traceInitSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040175_top___024root__traceInitTop(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040175_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22040175_top___024root__traceInitSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+75,"clk", false,-1);
        tracep->declBit(c+76,"rst", false,-1);
        tracep->declBus(c+77,"instr", false,-1, 31,0);
        tracep->declBus(c+78,"addr", false,-1, 31,0);
        tracep->declBit(c+75,"ysyx_22040175_top clk", false,-1);
        tracep->declBit(c+76,"ysyx_22040175_top rst", false,-1);
        tracep->declBus(c+77,"ysyx_22040175_top instr", false,-1, 31,0);
        tracep->declBus(c+78,"ysyx_22040175_top addr", false,-1, 31,0);
        tracep->declBus(c+1,"ysyx_22040175_top ext_imm", false,-1, 31,0);
        tracep->declBus(c+2,"ysyx_22040175_top data1", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22040175_top data2", false,-1, 31,0);
        tracep->declBit(c+79,"ysyx_22040175_top lw_en", false,-1);
        tracep->declBit(c+80,"ysyx_22040175_top sw_en", false,-1);
        tracep->declBus(c+4,"ysyx_22040175_top data_mem", false,-1, 31,0);
        tracep->declBit(c+75,"ysyx_22040175_top cpu_cpu clk", false,-1);
        tracep->declBit(c+76,"ysyx_22040175_top cpu_cpu rst", false,-1);
        tracep->declBus(c+4,"ysyx_22040175_top cpu_cpu data_mem", false,-1, 31,0);
        tracep->declBus(c+77,"ysyx_22040175_top cpu_cpu instr", false,-1, 31,0);
        tracep->declBus(c+78,"ysyx_22040175_top cpu_cpu addr", false,-1, 31,0);
        tracep->declBus(c+2,"ysyx_22040175_top cpu_cpu data1", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22040175_top cpu_cpu data2", false,-1, 31,0);
        tracep->declBus(c+1,"ysyx_22040175_top cpu_cpu ext_imm", false,-1, 31,0);
        tracep->declBit(c+79,"ysyx_22040175_top cpu_cpu lw_en", false,-1);
        tracep->declBit(c+80,"ysyx_22040175_top cpu_cpu sw_en", false,-1);
        tracep->declBit(c+81,"ysyx_22040175_top cpu_cpu jmp_en", false,-1);
        tracep->declBit(c+82,"ysyx_22040175_top cpu_cpu jmpr_en", false,-1);
        tracep->declBit(c+83,"ysyx_22040175_top cpu_cpu jmpb_en", false,-1);
        tracep->declBus(c+5,"ysyx_22040175_top cpu_cpu offset", false,-1, 31,0);
        tracep->declBus(c+84,"ysyx_22040175_top cpu_cpu op", false,-1, 6,0);
        tracep->declBus(c+85,"ysyx_22040175_top cpu_cpu rd", false,-1, 4,0);
        tracep->declBus(c+86,"ysyx_22040175_top cpu_cpu func3", false,-1, 2,0);
        tracep->declBus(c+87,"ysyx_22040175_top cpu_cpu rs1", false,-1, 4,0);
        tracep->declBus(c+88,"ysyx_22040175_top cpu_cpu rs2", false,-1, 4,0);
        tracep->declBit(c+89,"ysyx_22040175_top cpu_cpu func", false,-1);
        tracep->declBus(c+6,"ysyx_22040175_top cpu_cpu imm", false,-1, 11,0);
        tracep->declBus(c+90,"ysyx_22040175_top cpu_cpu jmp", false,-1, 31,0);
        tracep->declBit(c+91,"ysyx_22040175_top cpu_cpu wr_en", false,-1);
        tracep->declBus(c+92,"ysyx_22040175_top cpu_cpu wr_data", false,-1, 31,0);
        tracep->declBus(c+7,"ysyx_22040175_top cpu_cpu data_in2", false,-1, 31,0);
        tracep->declBit(c+8,"ysyx_22040175_top cpu_cpu sub_en", false,-1);
        tracep->declBus(c+9,"ysyx_22040175_top cpu_cpu data_out", false,-1, 31,0);
        tracep->declBit(c+93,"ysyx_22040175_top cpu_cpu pass", false,-1);
        tracep->declBit(c+75,"ysyx_22040175_top cpu_cpu pc_cpu clk", false,-1);
        tracep->declBit(c+76,"ysyx_22040175_top cpu_cpu pc_cpu rst", false,-1);
        tracep->declBit(c+81,"ysyx_22040175_top cpu_cpu pc_cpu jmp_en", false,-1);
        tracep->declBit(c+82,"ysyx_22040175_top cpu_cpu pc_cpu jmpr_en", false,-1);
        tracep->declBit(c+83,"ysyx_22040175_top cpu_cpu pc_cpu jmpb_en", false,-1);
        tracep->declBus(c+5,"ysyx_22040175_top cpu_cpu pc_cpu offset", false,-1, 31,0);
        tracep->declBus(c+78,"ysyx_22040175_top cpu_cpu pc_cpu addr", false,-1, 31,0);
        tracep->declBus(c+94,"ysyx_22040175_top cpu_cpu pc_cpu next_addr", false,-1, 31,0);
        tracep->declBus(c+77,"ysyx_22040175_top cpu_cpu decode_cpu instr", false,-1, 31,0);
        tracep->declBus(c+84,"ysyx_22040175_top cpu_cpu decode_cpu op", false,-1, 6,0);
        tracep->declBus(c+85,"ysyx_22040175_top cpu_cpu decode_cpu rd", false,-1, 4,0);
        tracep->declBus(c+86,"ysyx_22040175_top cpu_cpu decode_cpu func3", false,-1, 2,0);
        tracep->declBus(c+87,"ysyx_22040175_top cpu_cpu decode_cpu rs1", false,-1, 4,0);
        tracep->declBus(c+88,"ysyx_22040175_top cpu_cpu decode_cpu rs2", false,-1, 4,0);
        tracep->declBit(c+89,"ysyx_22040175_top cpu_cpu decode_cpu func", false,-1);
        tracep->declBus(c+6,"ysyx_22040175_top cpu_cpu decode_cpu imm", false,-1, 11,0);
        tracep->declBus(c+90,"ysyx_22040175_top cpu_cpu decode_cpu jmp", false,-1, 31,0);
        tracep->declBit(c+75,"ysyx_22040175_top cpu_cpu register_cpu clk", false,-1);
        tracep->declBit(c+91,"ysyx_22040175_top cpu_cpu register_cpu wr_en", false,-1);
        tracep->declBus(c+87,"ysyx_22040175_top cpu_cpu register_cpu rs1", false,-1, 4,0);
        tracep->declBus(c+88,"ysyx_22040175_top cpu_cpu register_cpu rs2", false,-1, 4,0);
        tracep->declBus(c+85,"ysyx_22040175_top cpu_cpu register_cpu rd", false,-1, 4,0);
        tracep->declBus(c+92,"ysyx_22040175_top cpu_cpu register_cpu wr_data", false,-1, 31,0);
        tracep->declBus(c+2,"ysyx_22040175_top cpu_cpu register_cpu data1", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22040175_top cpu_cpu register_cpu data2", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+44+i*1,"ysyx_22040175_top cpu_cpu register_cpu register", true,(i+1), 31,0);}}
        tracep->declBus(c+2,"ysyx_22040175_top cpu_cpu alu_cpu data_in1", false,-1, 31,0);
        tracep->declBus(c+7,"ysyx_22040175_top cpu_cpu alu_cpu data_in2", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top cpu_cpu alu_cpu func3", false,-1, 2,0);
        tracep->declBit(c+89,"ysyx_22040175_top cpu_cpu alu_cpu func", false,-1);
        tracep->declBit(c+8,"ysyx_22040175_top cpu_cpu alu_cpu sub_en", false,-1);
        tracep->declBus(c+9,"ysyx_22040175_top cpu_cpu alu_cpu data_out", false,-1, 31,0);
        tracep->declBus(c+10,"ysyx_22040175_top cpu_cpu alu_cpu shamt", false,-1, 4,0);
        tracep->declBus(c+84,"ysyx_22040175_top cpu_cpu control_cpu op", false,-1, 6,0);
        tracep->declBit(c+89,"ysyx_22040175_top cpu_cpu control_cpu func", false,-1);
        tracep->declBit(c+93,"ysyx_22040175_top cpu_cpu control_cpu pass", false,-1);
        tracep->declBit(c+91,"ysyx_22040175_top cpu_cpu control_cpu wr_en", false,-1);
        tracep->declBit(c+8,"ysyx_22040175_top cpu_cpu control_cpu sub_en", false,-1);
        tracep->declBit(c+81,"ysyx_22040175_top cpu_cpu control_cpu jmp_en", false,-1);
        tracep->declBit(c+82,"ysyx_22040175_top cpu_cpu control_cpu jmpr_en", false,-1);
        tracep->declBit(c+83,"ysyx_22040175_top cpu_cpu control_cpu jmpb_en", false,-1);
        tracep->declBit(c+79,"ysyx_22040175_top cpu_cpu control_cpu lw_en", false,-1);
        tracep->declBit(c+80,"ysyx_22040175_top cpu_cpu control_cpu sw_en", false,-1);
        tracep->declBus(c+6,"ysyx_22040175_top cpu_cpu ext32_cpu imm", false,-1, 11,0);
        tracep->declBus(c+1,"ysyx_22040175_top cpu_cpu ext32_cpu ext_imm", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22040175_top cpu_cpu data_in2_sel_cpu data2", false,-1, 31,0);
        tracep->declBus(c+1,"ysyx_22040175_top cpu_cpu data_in2_sel_cpu ext_imm", false,-1, 31,0);
        tracep->declBit(c+95,"ysyx_22040175_top cpu_cpu data_in2_sel_cpu sel", false,-1);
        tracep->declBus(c+7,"ysyx_22040175_top cpu_cpu data_in2_sel_cpu data_in2", false,-1, 31,0);
        tracep->declBus(c+9,"ysyx_22040175_top cpu_cpu wr_data_sel_cpu data_out", false,-1, 31,0);
        tracep->declBus(c+78,"ysyx_22040175_top cpu_cpu wr_data_sel_cpu addr", false,-1, 31,0);
        tracep->declBus(c+4,"ysyx_22040175_top cpu_cpu wr_data_sel_cpu data_mem", false,-1, 31,0);
        tracep->declBit(c+96,"ysyx_22040175_top cpu_cpu wr_data_sel_cpu sel1", false,-1);
        tracep->declBit(c+97,"ysyx_22040175_top cpu_cpu wr_data_sel_cpu sel2", false,-1);
        tracep->declBus(c+92,"ysyx_22040175_top cpu_cpu wr_data_sel_cpu wr_data", false,-1, 31,0);
        tracep->declBus(c+90,"ysyx_22040175_top cpu_cpu offset_sel_cpu jmp", false,-1, 31,0);
        tracep->declBus(c+1,"ysyx_22040175_top cpu_cpu offset_sel_cpu ext_imm", false,-1, 31,0);
        tracep->declBus(c+2,"ysyx_22040175_top cpu_cpu offset_sel_cpu data1", false,-1, 31,0);
        tracep->declBus(c+98,"ysyx_22040175_top cpu_cpu offset_sel_cpu sel", false,-1, 1,0);
        tracep->declBus(c+5,"ysyx_22040175_top cpu_cpu offset_sel_cpu offset", false,-1, 31,0);
        tracep->declBus(c+2,"ysyx_22040175_top cpu_cpu pass_jud_cpu data1", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22040175_top cpu_cpu pass_jud_cpu data2", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top cpu_cpu pass_jud_cpu func3", false,-1, 2,0);
        tracep->declBit(c+93,"ysyx_22040175_top cpu_cpu pass_jud_cpu pass", false,-1);
        tracep->declBus(c+1,"ysyx_22040175_top data_mem_cpu ext_imm", false,-1, 31,0);
        tracep->declBus(c+2,"ysyx_22040175_top data_mem_cpu data1", false,-1, 31,0);
        tracep->declBus(c+3,"ysyx_22040175_top data_mem_cpu data2", false,-1, 31,0);
        tracep->declBit(c+79,"ysyx_22040175_top data_mem_cpu lw_en", false,-1);
        tracep->declBit(c+80,"ysyx_22040175_top data_mem_cpu sw_en", false,-1);
        tracep->declBus(c+4,"ysyx_22040175_top data_mem_cpu data_mem", false,-1, 31,0);
        tracep->declBus(c+11,"ysyx_22040175_top data_mem_cpu addr", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+12+i*1,"ysyx_22040175_top data_mem_cpu data", true,(i+0), 7,0);}}
    }
}

void Vysyx_22040175_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22040175_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040175_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22040175_top___024root__traceRegister(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22040175_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22040175_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22040175_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22040175_top___024root__traceFullSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040175_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040175_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040175_top___024root*>(voidSelf);
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040175_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040175_top___024root__traceFullSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->ysyx_22040175_top__DOT__ext_imm),32);
        tracep->fullIData(oldp+2,(vlSelf->ysyx_22040175_top__DOT__data1),32);
        tracep->fullIData(oldp+3,(vlSelf->ysyx_22040175_top__DOT__data2),32);
        tracep->fullIData(oldp+4,(vlSelf->ysyx_22040175_top__DOT__data_mem),32);
        tracep->fullIData(oldp+5,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__offset),32);
        tracep->fullSData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__imm),12);
        tracep->fullIData(oldp+7,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2),32);
        tracep->fullBit(oldp+8,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__sub_en));
        tracep->fullIData(oldp+9,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out),32);
        tracep->fullCData(oldp+10,((0x1fU & vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_in2)),5);
        tracep->fullIData(oldp+11,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__addr),32);
        tracep->fullCData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[0]),8);
        tracep->fullCData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[1]),8);
        tracep->fullCData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[2]),8);
        tracep->fullCData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[3]),8);
        tracep->fullCData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[4]),8);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[5]),8);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[6]),8);
        tracep->fullCData(oldp+19,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[7]),8);
        tracep->fullCData(oldp+20,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[8]),8);
        tracep->fullCData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[9]),8);
        tracep->fullCData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[10]),8);
        tracep->fullCData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[11]),8);
        tracep->fullCData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[12]),8);
        tracep->fullCData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[13]),8);
        tracep->fullCData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[14]),8);
        tracep->fullCData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[15]),8);
        tracep->fullCData(oldp+28,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[16]),8);
        tracep->fullCData(oldp+29,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[17]),8);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[18]),8);
        tracep->fullCData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[19]),8);
        tracep->fullCData(oldp+32,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[20]),8);
        tracep->fullCData(oldp+33,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[21]),8);
        tracep->fullCData(oldp+34,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[22]),8);
        tracep->fullCData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[23]),8);
        tracep->fullCData(oldp+36,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[24]),8);
        tracep->fullCData(oldp+37,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[25]),8);
        tracep->fullCData(oldp+38,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[26]),8);
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[27]),8);
        tracep->fullCData(oldp+40,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[28]),8);
        tracep->fullCData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[29]),8);
        tracep->fullCData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[30]),8);
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__data_mem_cpu__DOT__data[31]),8);
        tracep->fullIData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[0]),32);
        tracep->fullIData(oldp+45,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[1]),32);
        tracep->fullIData(oldp+46,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[2]),32);
        tracep->fullIData(oldp+47,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[3]),32);
        tracep->fullIData(oldp+48,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[4]),32);
        tracep->fullIData(oldp+49,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[5]),32);
        tracep->fullIData(oldp+50,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[6]),32);
        tracep->fullIData(oldp+51,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[7]),32);
        tracep->fullIData(oldp+52,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[8]),32);
        tracep->fullIData(oldp+53,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[9]),32);
        tracep->fullIData(oldp+54,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[10]),32);
        tracep->fullIData(oldp+55,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[11]),32);
        tracep->fullIData(oldp+56,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[12]),32);
        tracep->fullIData(oldp+57,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[13]),32);
        tracep->fullIData(oldp+58,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[14]),32);
        tracep->fullIData(oldp+59,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[15]),32);
        tracep->fullIData(oldp+60,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[16]),32);
        tracep->fullIData(oldp+61,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[17]),32);
        tracep->fullIData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[18]),32);
        tracep->fullIData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[19]),32);
        tracep->fullIData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[20]),32);
        tracep->fullIData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[21]),32);
        tracep->fullIData(oldp+66,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[22]),32);
        tracep->fullIData(oldp+67,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[23]),32);
        tracep->fullIData(oldp+68,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[24]),32);
        tracep->fullIData(oldp+69,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[25]),32);
        tracep->fullIData(oldp+70,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[26]),32);
        tracep->fullIData(oldp+71,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[27]),32);
        tracep->fullIData(oldp+72,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[28]),32);
        tracep->fullIData(oldp+73,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[29]),32);
        tracep->fullIData(oldp+74,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__register_cpu__DOT__register[30]),32);
        tracep->fullBit(oldp+75,(vlSelf->clk));
        tracep->fullBit(oldp+76,(vlSelf->rst));
        tracep->fullIData(oldp+77,(vlSelf->instr),32);
        tracep->fullIData(oldp+78,(vlSelf->addr),32);
        tracep->fullBit(oldp+79,((3U == (0x7fU & vlSelf->instr))));
        tracep->fullBit(oldp+80,((0x23U == (0x7fU & vlSelf->instr))));
        tracep->fullBit(oldp+81,((0x6fU == (0x7fU & vlSelf->instr))));
        tracep->fullBit(oldp+82,((0x67U == (0x7fU & vlSelf->instr))));
        tracep->fullBit(oldp+83,(((0x63U == (0x7fU 
                                             & vlSelf->instr)) 
                                  & ((0x4000U & vlSelf->instr)
                                      ? ((0x2000U & vlSelf->instr)
                                          ? ((0x1000U 
                                              & vlSelf->instr)
                                              ? (vlSelf->ysyx_22040175_top__DOT__data1 
                                                 >= vlSelf->ysyx_22040175_top__DOT__data2)
                                              : (vlSelf->ysyx_22040175_top__DOT__data1 
                                                 < vlSelf->ysyx_22040175_top__DOT__data2))
                                          : ((0x1000U 
                                              & vlSelf->instr)
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
                                      : ((~ (vlSelf->instr 
                                             >> 0xdU)) 
                                         & ((0x1000U 
                                             & vlSelf->instr)
                                             ? (vlSelf->ysyx_22040175_top__DOT__data1 
                                                != vlSelf->ysyx_22040175_top__DOT__data2)
                                             : (vlSelf->ysyx_22040175_top__DOT__data1 
                                                == vlSelf->ysyx_22040175_top__DOT__data2)))))));
        tracep->fullCData(oldp+84,((0x7fU & vlSelf->instr)),7);
        tracep->fullCData(oldp+85,((0x1fU & (vlSelf->instr 
                                             >> 7U))),5);
        tracep->fullCData(oldp+86,((7U & (vlSelf->instr 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+87,((0x1fU & (vlSelf->instr 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+88,((0x1fU & (vlSelf->instr 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+89,((1U & (vlSelf->instr 
                                        >> 0x1eU))));
        tracep->fullIData(oldp+90,((((- (IData)((vlSelf->instr 
                                                 >> 0x1fU))) 
                                     << 0x14U) | ((0x80000U 
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
                                                              >> 0x15U))))))),32);
        tracep->fullBit(oldp+91,((((((0x33U == (0x7fU 
                                                & vlSelf->instr)) 
                                     | (0x13U == (0x7fU 
                                                  & vlSelf->instr))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->instr))) 
                                  | (3U == (0x7fU & vlSelf->instr)))));
        tracep->fullIData(oldp+92,(((0x10U & vlSelf->instr)
                                     ? vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__data_out
                                     : ((0x40U & vlSelf->instr)
                                         ? ((IData)(4U) 
                                            + vlSelf->addr)
                                         : vlSelf->ysyx_22040175_top__DOT__data_mem))),32);
        tracep->fullBit(oldp+93,(((0x4000U & vlSelf->instr)
                                   ? ((0x2000U & vlSelf->instr)
                                       ? ((0x1000U 
                                           & vlSelf->instr)
                                           ? (vlSelf->ysyx_22040175_top__DOT__data1 
                                              >= vlSelf->ysyx_22040175_top__DOT__data2)
                                           : (vlSelf->ysyx_22040175_top__DOT__data1 
                                              < vlSelf->ysyx_22040175_top__DOT__data2))
                                       : ((0x1000U 
                                           & vlSelf->instr)
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
                                   : ((~ (vlSelf->instr 
                                          >> 0xdU)) 
                                      & ((0x1000U & vlSelf->instr)
                                          ? (vlSelf->ysyx_22040175_top__DOT__data1 
                                             != vlSelf->ysyx_22040175_top__DOT__data2)
                                          : (vlSelf->ysyx_22040175_top__DOT__data1 
                                             == vlSelf->ysyx_22040175_top__DOT__data2))))));
        tracep->fullIData(oldp+94,(vlSelf->ysyx_22040175_top__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr),32);
        tracep->fullBit(oldp+95,((1U & (vlSelf->instr 
                                        >> 5U))));
        tracep->fullBit(oldp+96,((1U & (vlSelf->instr 
                                        >> 4U))));
        tracep->fullBit(oldp+97,((1U & (vlSelf->instr 
                                        >> 6U))));
        tracep->fullCData(oldp+98,((3U & (vlSelf->instr 
                                          >> 2U))),2);
    }
}
