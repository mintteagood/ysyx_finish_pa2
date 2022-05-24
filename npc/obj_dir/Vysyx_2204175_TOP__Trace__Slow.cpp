// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_2204175_TOP__Syms.h"


void Vysyx_2204175_TOP___024root__traceInitSub0(Vysyx_2204175_TOP___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_2204175_TOP___024root__traceInitTop(Vysyx_2204175_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2204175_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_2204175_TOP___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_2204175_TOP___024root__traceInitSub0(Vysyx_2204175_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2204175_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+125,"clk", false,-1);
        tracep->declBit(c+126,"rst", false,-1);
        tracep->declBit(c+125,"ysyx_2204175_TOP clk", false,-1);
        tracep->declBit(c+126,"ysyx_2204175_TOP rst", false,-1);
        tracep->declBus(c+64,"ysyx_2204175_TOP addr", false,-1, 31,0);
        tracep->declBus(c+65,"ysyx_2204175_TOP instr", false,-1, 31,0);
        tracep->declBus(c+66,"ysyx_2204175_TOP ext_imm", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_2204175_TOP data1", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_2204175_TOP data2", false,-1, 31,0);
        tracep->declBit(c+67,"ysyx_2204175_TOP lw_en", false,-1);
        tracep->declBit(c+68,"ysyx_2204175_TOP sw_en", false,-1);
        tracep->declBus(c+87,"ysyx_2204175_TOP data_mem", false,-1, 31,0);
        tracep->declBus(c+64,"ysyx_2204175_TOP instr_mem_cpu addr", false,-1, 31,0);
        tracep->declBus(c+65,"ysyx_2204175_TOP instr_mem_cpu instr", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+1+i*1,"ysyx_2204175_TOP instr_mem_cpu instr_mem", true,(i+0), 7,0);}}
        tracep->declBit(c+125,"ysyx_2204175_TOP cpu_cpu clk", false,-1);
        tracep->declBit(c+126,"ysyx_2204175_TOP cpu_cpu rst", false,-1);
        tracep->declBus(c+87,"ysyx_2204175_TOP cpu_cpu data_mem", false,-1, 31,0);
        tracep->declBus(c+65,"ysyx_2204175_TOP cpu_cpu instr", false,-1, 31,0);
        tracep->declBus(c+64,"ysyx_2204175_TOP cpu_cpu addr", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_2204175_TOP cpu_cpu data1", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_2204175_TOP cpu_cpu data2", false,-1, 31,0);
        tracep->declBus(c+66,"ysyx_2204175_TOP cpu_cpu ext_imm", false,-1, 31,0);
        tracep->declBit(c+67,"ysyx_2204175_TOP cpu_cpu lw_en", false,-1);
        tracep->declBit(c+68,"ysyx_2204175_TOP cpu_cpu sw_en", false,-1);
        tracep->declBit(c+69,"ysyx_2204175_TOP cpu_cpu jmp_en", false,-1);
        tracep->declBit(c+70,"ysyx_2204175_TOP cpu_cpu jmpr_en", false,-1);
        tracep->declBit(c+127,"ysyx_2204175_TOP cpu_cpu jmpb_en", false,-1);
        tracep->declBus(c+88,"ysyx_2204175_TOP cpu_cpu offset", false,-1, 31,0);
        tracep->declBus(c+71,"ysyx_2204175_TOP cpu_cpu op", false,-1, 6,0);
        tracep->declBus(c+72,"ysyx_2204175_TOP cpu_cpu rd", false,-1, 4,0);
        tracep->declBus(c+73,"ysyx_2204175_TOP cpu_cpu func3", false,-1, 2,0);
        tracep->declBus(c+74,"ysyx_2204175_TOP cpu_cpu rs1", false,-1, 4,0);
        tracep->declBus(c+75,"ysyx_2204175_TOP cpu_cpu rs2", false,-1, 4,0);
        tracep->declBit(c+76,"ysyx_2204175_TOP cpu_cpu func", false,-1);
        tracep->declBus(c+77,"ysyx_2204175_TOP cpu_cpu imm", false,-1, 11,0);
        tracep->declBus(c+78,"ysyx_2204175_TOP cpu_cpu jmp", false,-1, 31,0);
        tracep->declBit(c+79,"ysyx_2204175_TOP cpu_cpu wr_en", false,-1);
        tracep->declBus(c+128,"ysyx_2204175_TOP cpu_cpu wr_data", false,-1, 31,0);
        tracep->declBus(c+89,"ysyx_2204175_TOP cpu_cpu data_in2", false,-1, 31,0);
        tracep->declBit(c+80,"ysyx_2204175_TOP cpu_cpu sub_en", false,-1);
        tracep->declBus(c+90,"ysyx_2204175_TOP cpu_cpu data_out", false,-1, 31,0);
        tracep->declBit(c+129,"ysyx_2204175_TOP cpu_cpu pass", false,-1);
        tracep->declBit(c+125,"ysyx_2204175_TOP cpu_cpu pc_cpu clk", false,-1);
        tracep->declBit(c+126,"ysyx_2204175_TOP cpu_cpu pc_cpu rst", false,-1);
        tracep->declBit(c+69,"ysyx_2204175_TOP cpu_cpu pc_cpu jmp_en", false,-1);
        tracep->declBit(c+70,"ysyx_2204175_TOP cpu_cpu pc_cpu jmpr_en", false,-1);
        tracep->declBit(c+127,"ysyx_2204175_TOP cpu_cpu pc_cpu jmpb_en", false,-1);
        tracep->declBus(c+88,"ysyx_2204175_TOP cpu_cpu pc_cpu offset", false,-1, 31,0);
        tracep->declBus(c+64,"ysyx_2204175_TOP cpu_cpu pc_cpu addr", false,-1, 31,0);
        tracep->declBus(c+130,"ysyx_2204175_TOP cpu_cpu pc_cpu next_addr", false,-1, 31,0);
        tracep->declBus(c+65,"ysyx_2204175_TOP cpu_cpu decode_cpu instr", false,-1, 31,0);
        tracep->declBus(c+71,"ysyx_2204175_TOP cpu_cpu decode_cpu op", false,-1, 6,0);
        tracep->declBus(c+72,"ysyx_2204175_TOP cpu_cpu decode_cpu rd", false,-1, 4,0);
        tracep->declBus(c+73,"ysyx_2204175_TOP cpu_cpu decode_cpu func3", false,-1, 2,0);
        tracep->declBus(c+74,"ysyx_2204175_TOP cpu_cpu decode_cpu rs1", false,-1, 4,0);
        tracep->declBus(c+75,"ysyx_2204175_TOP cpu_cpu decode_cpu rs2", false,-1, 4,0);
        tracep->declBit(c+76,"ysyx_2204175_TOP cpu_cpu decode_cpu func", false,-1);
        tracep->declBus(c+77,"ysyx_2204175_TOP cpu_cpu decode_cpu imm", false,-1, 11,0);
        tracep->declBus(c+78,"ysyx_2204175_TOP cpu_cpu decode_cpu jmp", false,-1, 31,0);
        tracep->declBit(c+125,"ysyx_2204175_TOP cpu_cpu register_cpu clk", false,-1);
        tracep->declBit(c+79,"ysyx_2204175_TOP cpu_cpu register_cpu wr_en", false,-1);
        tracep->declBus(c+74,"ysyx_2204175_TOP cpu_cpu register_cpu rs1", false,-1, 4,0);
        tracep->declBus(c+75,"ysyx_2204175_TOP cpu_cpu register_cpu rs2", false,-1, 4,0);
        tracep->declBus(c+72,"ysyx_2204175_TOP cpu_cpu register_cpu rd", false,-1, 4,0);
        tracep->declBus(c+128,"ysyx_2204175_TOP cpu_cpu register_cpu wr_data", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_2204175_TOP cpu_cpu register_cpu data1", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_2204175_TOP cpu_cpu register_cpu data2", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+33+i*1,"ysyx_2204175_TOP cpu_cpu register_cpu register", true,(i+1), 31,0);}}
        tracep->declBus(c+85,"ysyx_2204175_TOP cpu_cpu alu_cpu data_in1", false,-1, 31,0);
        tracep->declBus(c+89,"ysyx_2204175_TOP cpu_cpu alu_cpu data_in2", false,-1, 31,0);
        tracep->declBus(c+73,"ysyx_2204175_TOP cpu_cpu alu_cpu func3", false,-1, 2,0);
        tracep->declBit(c+76,"ysyx_2204175_TOP cpu_cpu alu_cpu func", false,-1);
        tracep->declBit(c+80,"ysyx_2204175_TOP cpu_cpu alu_cpu sub_en", false,-1);
        tracep->declBus(c+90,"ysyx_2204175_TOP cpu_cpu alu_cpu data_out", false,-1, 31,0);
        tracep->declBus(c+91,"ysyx_2204175_TOP cpu_cpu alu_cpu shamt", false,-1, 4,0);
        tracep->declBus(c+71,"ysyx_2204175_TOP cpu_cpu control_cpu op", false,-1, 6,0);
        tracep->declBit(c+76,"ysyx_2204175_TOP cpu_cpu control_cpu func", false,-1);
        tracep->declBit(c+129,"ysyx_2204175_TOP cpu_cpu control_cpu pass", false,-1);
        tracep->declBit(c+79,"ysyx_2204175_TOP cpu_cpu control_cpu wr_en", false,-1);
        tracep->declBit(c+80,"ysyx_2204175_TOP cpu_cpu control_cpu sub_en", false,-1);
        tracep->declBit(c+69,"ysyx_2204175_TOP cpu_cpu control_cpu jmp_en", false,-1);
        tracep->declBit(c+70,"ysyx_2204175_TOP cpu_cpu control_cpu jmpr_en", false,-1);
        tracep->declBit(c+127,"ysyx_2204175_TOP cpu_cpu control_cpu jmpb_en", false,-1);
        tracep->declBit(c+67,"ysyx_2204175_TOP cpu_cpu control_cpu lw_en", false,-1);
        tracep->declBit(c+68,"ysyx_2204175_TOP cpu_cpu control_cpu sw_en", false,-1);
        tracep->declBus(c+77,"ysyx_2204175_TOP cpu_cpu ext32_cpu imm", false,-1, 11,0);
        tracep->declBus(c+66,"ysyx_2204175_TOP cpu_cpu ext32_cpu ext_imm", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_2204175_TOP cpu_cpu data_in2_sel_cpu data2", false,-1, 31,0);
        tracep->declBus(c+66,"ysyx_2204175_TOP cpu_cpu data_in2_sel_cpu ext_imm", false,-1, 31,0);
        tracep->declBit(c+81,"ysyx_2204175_TOP cpu_cpu data_in2_sel_cpu sel", false,-1);
        tracep->declBus(c+89,"ysyx_2204175_TOP cpu_cpu data_in2_sel_cpu data_in2", false,-1, 31,0);
        tracep->declBus(c+90,"ysyx_2204175_TOP cpu_cpu wr_data_sel_cpu data_out", false,-1, 31,0);
        tracep->declBus(c+64,"ysyx_2204175_TOP cpu_cpu wr_data_sel_cpu addr", false,-1, 31,0);
        tracep->declBus(c+87,"ysyx_2204175_TOP cpu_cpu wr_data_sel_cpu data_mem", false,-1, 31,0);
        tracep->declBit(c+82,"ysyx_2204175_TOP cpu_cpu wr_data_sel_cpu sel1", false,-1);
        tracep->declBit(c+83,"ysyx_2204175_TOP cpu_cpu wr_data_sel_cpu sel2", false,-1);
        tracep->declBus(c+128,"ysyx_2204175_TOP cpu_cpu wr_data_sel_cpu wr_data", false,-1, 31,0);
        tracep->declBus(c+78,"ysyx_2204175_TOP cpu_cpu offset_sel_cpu jmp", false,-1, 31,0);
        tracep->declBus(c+66,"ysyx_2204175_TOP cpu_cpu offset_sel_cpu ext_imm", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_2204175_TOP cpu_cpu offset_sel_cpu data1", false,-1, 31,0);
        tracep->declBus(c+84,"ysyx_2204175_TOP cpu_cpu offset_sel_cpu sel", false,-1, 1,0);
        tracep->declBus(c+88,"ysyx_2204175_TOP cpu_cpu offset_sel_cpu offset", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_2204175_TOP cpu_cpu pass_jud_cpu data1", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_2204175_TOP cpu_cpu pass_jud_cpu data2", false,-1, 31,0);
        tracep->declBus(c+73,"ysyx_2204175_TOP cpu_cpu pass_jud_cpu func3", false,-1, 2,0);
        tracep->declBit(c+129,"ysyx_2204175_TOP cpu_cpu pass_jud_cpu pass", false,-1);
        tracep->declBus(c+66,"ysyx_2204175_TOP data_mem_cpu ext_imm", false,-1, 31,0);
        tracep->declBus(c+85,"ysyx_2204175_TOP data_mem_cpu data1", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_2204175_TOP data_mem_cpu data2", false,-1, 31,0);
        tracep->declBit(c+67,"ysyx_2204175_TOP data_mem_cpu lw_en", false,-1);
        tracep->declBit(c+68,"ysyx_2204175_TOP data_mem_cpu sw_en", false,-1);
        tracep->declBus(c+87,"ysyx_2204175_TOP data_mem_cpu data_mem", false,-1, 31,0);
        tracep->declBus(c+92,"ysyx_2204175_TOP data_mem_cpu addr", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+93+i*1,"ysyx_2204175_TOP data_mem_cpu data", true,(i+0), 7,0);}}
    }
}

void Vysyx_2204175_TOP___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_2204175_TOP___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_2204175_TOP___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_2204175_TOP___024root__traceRegister(Vysyx_2204175_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2204175_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_2204175_TOP___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_2204175_TOP___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_2204175_TOP___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_2204175_TOP___024root__traceFullSub0(Vysyx_2204175_TOP___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_2204175_TOP___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_2204175_TOP___024root* const __restrict vlSelf = static_cast<Vysyx_2204175_TOP___024root*>(voidSelf);
    Vysyx_2204175_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_2204175_TOP___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_2204175_TOP___024root__traceFullSub0(Vysyx_2204175_TOP___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_2204175_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[0]),8);
        tracep->fullCData(oldp+2,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[1]),8);
        tracep->fullCData(oldp+3,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[2]),8);
        tracep->fullCData(oldp+4,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[3]),8);
        tracep->fullCData(oldp+5,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[4]),8);
        tracep->fullCData(oldp+6,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[5]),8);
        tracep->fullCData(oldp+7,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[6]),8);
        tracep->fullCData(oldp+8,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[7]),8);
        tracep->fullCData(oldp+9,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[8]),8);
        tracep->fullCData(oldp+10,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[9]),8);
        tracep->fullCData(oldp+11,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[10]),8);
        tracep->fullCData(oldp+12,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[11]),8);
        tracep->fullCData(oldp+13,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[12]),8);
        tracep->fullCData(oldp+14,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[13]),8);
        tracep->fullCData(oldp+15,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[14]),8);
        tracep->fullCData(oldp+16,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[15]),8);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[16]),8);
        tracep->fullCData(oldp+18,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[17]),8);
        tracep->fullCData(oldp+19,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[18]),8);
        tracep->fullCData(oldp+20,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[19]),8);
        tracep->fullCData(oldp+21,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[20]),8);
        tracep->fullCData(oldp+22,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[21]),8);
        tracep->fullCData(oldp+23,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[22]),8);
        tracep->fullCData(oldp+24,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[23]),8);
        tracep->fullCData(oldp+25,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[24]),8);
        tracep->fullCData(oldp+26,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[25]),8);
        tracep->fullCData(oldp+27,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[26]),8);
        tracep->fullCData(oldp+28,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[27]),8);
        tracep->fullCData(oldp+29,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[28]),8);
        tracep->fullCData(oldp+30,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[29]),8);
        tracep->fullCData(oldp+31,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[30]),8);
        tracep->fullCData(oldp+32,(vlSelf->ysyx_2204175_TOP__DOT__instr_mem_cpu__DOT__instr_mem[31]),8);
        tracep->fullIData(oldp+33,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[0]),32);
        tracep->fullIData(oldp+34,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[1]),32);
        tracep->fullIData(oldp+35,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[2]),32);
        tracep->fullIData(oldp+36,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[3]),32);
        tracep->fullIData(oldp+37,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[4]),32);
        tracep->fullIData(oldp+38,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[5]),32);
        tracep->fullIData(oldp+39,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[6]),32);
        tracep->fullIData(oldp+40,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[7]),32);
        tracep->fullIData(oldp+41,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[8]),32);
        tracep->fullIData(oldp+42,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[9]),32);
        tracep->fullIData(oldp+43,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[10]),32);
        tracep->fullIData(oldp+44,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[11]),32);
        tracep->fullIData(oldp+45,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[12]),32);
        tracep->fullIData(oldp+46,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[13]),32);
        tracep->fullIData(oldp+47,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[14]),32);
        tracep->fullIData(oldp+48,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[15]),32);
        tracep->fullIData(oldp+49,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[16]),32);
        tracep->fullIData(oldp+50,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[17]),32);
        tracep->fullIData(oldp+51,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[18]),32);
        tracep->fullIData(oldp+52,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[19]),32);
        tracep->fullIData(oldp+53,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[20]),32);
        tracep->fullIData(oldp+54,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[21]),32);
        tracep->fullIData(oldp+55,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[22]),32);
        tracep->fullIData(oldp+56,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[23]),32);
        tracep->fullIData(oldp+57,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[24]),32);
        tracep->fullIData(oldp+58,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[25]),32);
        tracep->fullIData(oldp+59,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[26]),32);
        tracep->fullIData(oldp+60,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[27]),32);
        tracep->fullIData(oldp+61,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[28]),32);
        tracep->fullIData(oldp+62,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[29]),32);
        tracep->fullIData(oldp+63,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__register_cpu__DOT__register[30]),32);
        tracep->fullIData(oldp+64,(vlSelf->ysyx_2204175_TOP__DOT__addr),32);
        tracep->fullIData(oldp+65,(vlSelf->ysyx_2204175_TOP__DOT__instr),32);
        tracep->fullIData(oldp+66,(vlSelf->ysyx_2204175_TOP__DOT__ext_imm),32);
        tracep->fullBit(oldp+67,((3U == (0x7fU & vlSelf->ysyx_2204175_TOP__DOT__instr))));
        tracep->fullBit(oldp+68,((0x23U == (0x7fU & vlSelf->ysyx_2204175_TOP__DOT__instr))));
        tracep->fullBit(oldp+69,((0x6fU == (0x7fU & vlSelf->ysyx_2204175_TOP__DOT__instr))));
        tracep->fullBit(oldp+70,((0x67U == (0x7fU & vlSelf->ysyx_2204175_TOP__DOT__instr))));
        tracep->fullCData(oldp+71,((0x7fU & vlSelf->ysyx_2204175_TOP__DOT__instr)),7);
        tracep->fullCData(oldp+72,((0x1fU & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                             >> 7U))),5);
        tracep->fullCData(oldp+73,((7U & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                          >> 0xcU))),3);
        tracep->fullCData(oldp+74,((0x1fU & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+75,((0x1fU & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+76,((1U & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                        >> 0x1eU))));
        tracep->fullSData(oldp+77,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__imm),12);
        tracep->fullIData(oldp+78,((((- (IData)((vlSelf->ysyx_2204175_TOP__DOT__instr 
                                                 >> 0x1fU))) 
                                     << 0x14U) | ((0x80000U 
                                                   & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                                      >> 0xcU)) 
                                                  | ((0x7f800U 
                                                      & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                                         >> 1U)) 
                                                     | ((0x400U 
                                                         & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                                            >> 0xaU)) 
                                                        | (0x3ffU 
                                                           & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                                              >> 0x15U))))))),32);
        tracep->fullBit(oldp+79,((((((0x33U == (0x7fU 
                                                & vlSelf->ysyx_2204175_TOP__DOT__instr)) 
                                     | (0x13U == (0x7fU 
                                                  & vlSelf->ysyx_2204175_TOP__DOT__instr))) 
                                    | (0x6fU == (0x7fU 
                                                 & vlSelf->ysyx_2204175_TOP__DOT__instr))) 
                                   | (0x67U == (0x7fU 
                                                & vlSelf->ysyx_2204175_TOP__DOT__instr))) 
                                  | (3U == (0x7fU & vlSelf->ysyx_2204175_TOP__DOT__instr)))));
        tracep->fullBit(oldp+80,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__sub_en));
        tracep->fullBit(oldp+81,((1U & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                        >> 5U))));
        tracep->fullBit(oldp+82,((1U & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                        >> 4U))));
        tracep->fullBit(oldp+83,((1U & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                        >> 6U))));
        tracep->fullCData(oldp+84,((3U & (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                          >> 2U))),2);
        tracep->fullIData(oldp+85,(vlSelf->ysyx_2204175_TOP__DOT__data1),32);
        tracep->fullIData(oldp+86,(vlSelf->ysyx_2204175_TOP__DOT__data2),32);
        tracep->fullIData(oldp+87,(vlSelf->ysyx_2204175_TOP__DOT__data_mem),32);
        tracep->fullIData(oldp+88,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__offset),32);
        tracep->fullIData(oldp+89,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__data_in2),32);
        tracep->fullIData(oldp+90,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__data_out),32);
        tracep->fullCData(oldp+91,((0x1fU & vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__data_in2)),5);
        tracep->fullIData(oldp+92,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__addr),32);
        tracep->fullCData(oldp+93,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[0]),8);
        tracep->fullCData(oldp+94,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[1]),8);
        tracep->fullCData(oldp+95,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[2]),8);
        tracep->fullCData(oldp+96,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[3]),8);
        tracep->fullCData(oldp+97,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[4]),8);
        tracep->fullCData(oldp+98,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[5]),8);
        tracep->fullCData(oldp+99,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[6]),8);
        tracep->fullCData(oldp+100,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[7]),8);
        tracep->fullCData(oldp+101,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[8]),8);
        tracep->fullCData(oldp+102,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[9]),8);
        tracep->fullCData(oldp+103,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[10]),8);
        tracep->fullCData(oldp+104,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[11]),8);
        tracep->fullCData(oldp+105,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[12]),8);
        tracep->fullCData(oldp+106,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[13]),8);
        tracep->fullCData(oldp+107,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[14]),8);
        tracep->fullCData(oldp+108,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[15]),8);
        tracep->fullCData(oldp+109,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[16]),8);
        tracep->fullCData(oldp+110,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[17]),8);
        tracep->fullCData(oldp+111,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[18]),8);
        tracep->fullCData(oldp+112,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[19]),8);
        tracep->fullCData(oldp+113,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[20]),8);
        tracep->fullCData(oldp+114,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[21]),8);
        tracep->fullCData(oldp+115,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[22]),8);
        tracep->fullCData(oldp+116,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[23]),8);
        tracep->fullCData(oldp+117,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[24]),8);
        tracep->fullCData(oldp+118,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[25]),8);
        tracep->fullCData(oldp+119,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[26]),8);
        tracep->fullCData(oldp+120,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[27]),8);
        tracep->fullCData(oldp+121,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[28]),8);
        tracep->fullCData(oldp+122,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[29]),8);
        tracep->fullCData(oldp+123,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[30]),8);
        tracep->fullCData(oldp+124,(vlSelf->ysyx_2204175_TOP__DOT__data_mem_cpu__DOT__data[31]),8);
        tracep->fullBit(oldp+125,(vlSelf->clk));
        tracep->fullBit(oldp+126,(vlSelf->rst));
        tracep->fullBit(oldp+127,(((0x63U == (0x7fU 
                                              & vlSelf->ysyx_2204175_TOP__DOT__instr)) 
                                   & ((0x4000U & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                       ? ((0x2000U 
                                           & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                           ? ((0x1000U 
                                               & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                               ? (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                  >= vlSelf->ysyx_2204175_TOP__DOT__data2)
                                               : (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                  < vlSelf->ysyx_2204175_TOP__DOT__data2))
                                           : ((0x1000U 
                                               & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                               ? ((
                                                   (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                    >> 0x1fU) 
                                                   <= 
                                                   (vlSelf->ysyx_2204175_TOP__DOT__data2 
                                                    >> 0x1fU)) 
                                                  & (((vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                       >> 0x1fU) 
                                                      != 
                                                      (vlSelf->ysyx_2204175_TOP__DOT__data2 
                                                       >> 0x1fU)) 
                                                     | (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                        >= vlSelf->ysyx_2204175_TOP__DOT__data2)))
                                               : ((
                                                   (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                    >> 0x1fU) 
                                                   > 
                                                   (vlSelf->ysyx_2204175_TOP__DOT__data2 
                                                    >> 0x1fU)) 
                                                  | (((vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                       >> 0x1fU) 
                                                      == 
                                                      (vlSelf->ysyx_2204175_TOP__DOT__data2 
                                                       >> 0x1fU)) 
                                                     & (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                        < vlSelf->ysyx_2204175_TOP__DOT__data2)))))
                                       : ((~ (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                              >> 0xdU)) 
                                          & ((0x1000U 
                                              & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                              ? (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                 != vlSelf->ysyx_2204175_TOP__DOT__data2)
                                              : (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                 == vlSelf->ysyx_2204175_TOP__DOT__data2)))))));
        tracep->fullIData(oldp+128,(((0x10U & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                      ? vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__data_out
                                      : ((0x40U & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                          ? ((IData)(4U) 
                                             + vlSelf->ysyx_2204175_TOP__DOT__addr)
                                          : vlSelf->ysyx_2204175_TOP__DOT__data_mem))),32);
        tracep->fullBit(oldp+129,(((0x4000U & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                    ? ((0x2000U & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                        ? ((0x1000U 
                                            & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                            ? (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                               >= vlSelf->ysyx_2204175_TOP__DOT__data2)
                                            : (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                               < vlSelf->ysyx_2204175_TOP__DOT__data2))
                                        : ((0x1000U 
                                            & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                            ? (((vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                 >> 0x1fU) 
                                                <= 
                                                (vlSelf->ysyx_2204175_TOP__DOT__data2 
                                                 >> 0x1fU)) 
                                               & (((vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                    >> 0x1fU) 
                                                   != 
                                                   (vlSelf->ysyx_2204175_TOP__DOT__data2 
                                                    >> 0x1fU)) 
                                                  | (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                     >= vlSelf->ysyx_2204175_TOP__DOT__data2)))
                                            : (((vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                 >> 0x1fU) 
                                                > (vlSelf->ysyx_2204175_TOP__DOT__data2 
                                                   >> 0x1fU)) 
                                               | (((vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                    >> 0x1fU) 
                                                   == 
                                                   (vlSelf->ysyx_2204175_TOP__DOT__data2 
                                                    >> 0x1fU)) 
                                                  & (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                                     < vlSelf->ysyx_2204175_TOP__DOT__data2)))))
                                    : ((~ (vlSelf->ysyx_2204175_TOP__DOT__instr 
                                           >> 0xdU)) 
                                       & ((0x1000U 
                                           & vlSelf->ysyx_2204175_TOP__DOT__instr)
                                           ? (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                              != vlSelf->ysyx_2204175_TOP__DOT__data2)
                                           : (vlSelf->ysyx_2204175_TOP__DOT__data1 
                                              == vlSelf->ysyx_2204175_TOP__DOT__data2))))));
        tracep->fullIData(oldp+130,(vlSelf->ysyx_2204175_TOP__DOT__cpu_cpu__DOT__pc_cpu__DOT__next_addr),32);
    }
}
