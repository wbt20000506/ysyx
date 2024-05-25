// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vysyx_23060286_top__Syms.h"


void Vysyx_23060286_top___024root__trace_chg_sub_0(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060286_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060286_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060286_top___024root*>(voidSelf);
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060286_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060286_top___024root__trace_chg_sub_0(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgSData(oldp+0,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[0]),10);
        bufp->chgSData(oldp+1,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[1]),10);
        bufp->chgSData(oldp+2,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[2]),10);
        bufp->chgSData(oldp+3,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[3]),10);
        bufp->chgSData(oldp+4,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[4]),10);
        bufp->chgSData(oldp+5,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[5]),10);
        bufp->chgSData(oldp+6,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[6]),10);
        bufp->chgSData(oldp+7,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[7]),10);
        bufp->chgSData(oldp+8,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[8]),10);
        bufp->chgSData(oldp+9,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[9]),10);
        bufp->chgSData(oldp+10,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list[10]),10);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[0]),7);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[1]),7);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[2]),7);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[3]),7);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[4]),7);
        bufp->chgCData(oldp+16,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[5]),7);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[6]),7);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[7]),7);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[8]),7);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[9]),7);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list[10]),7);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[0]),3);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[1]),3);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[2]),3);
        bufp->chgCData(oldp+25,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[3]),3);
        bufp->chgCData(oldp+26,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[4]),3);
        bufp->chgCData(oldp+27,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[5]),3);
        bufp->chgCData(oldp+28,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[6]),3);
        bufp->chgCData(oldp+29,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[7]),3);
        bufp->chgCData(oldp+30,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[8]),3);
        bufp->chgCData(oldp+31,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[9]),3);
        bufp->chgCData(oldp+32,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list[10]),3);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[0]),8);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[1]),8);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[2]),8);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[3]),8);
        bufp->chgCData(oldp+37,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[4]),8);
        bufp->chgCData(oldp+38,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[5]),8);
        bufp->chgCData(oldp+39,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[6]),8);
        bufp->chgCData(oldp+40,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list[7]),8);
        bufp->chgCData(oldp+41,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[0]),7);
        bufp->chgCData(oldp+42,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[1]),7);
        bufp->chgCData(oldp+43,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[2]),7);
        bufp->chgCData(oldp+44,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[3]),7);
        bufp->chgCData(oldp+45,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[4]),7);
        bufp->chgCData(oldp+46,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[5]),7);
        bufp->chgCData(oldp+47,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[6]),7);
        bufp->chgCData(oldp+48,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list[7]),7);
        bufp->chgBit(oldp+49,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[0]));
        bufp->chgBit(oldp+50,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[1]));
        bufp->chgBit(oldp+51,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[2]));
        bufp->chgBit(oldp+52,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[3]));
        bufp->chgBit(oldp+53,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[4]));
        bufp->chgBit(oldp+54,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[5]));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[6]));
        bufp->chgBit(oldp+56,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list[7]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+57,(vlSelf->__Vcellinp__ysyx_23060286_top__clk));
        bufp->chgBit(oldp+58,(vlSelf->__Vcellinp__ysyx_23060286_top__rst));
        bufp->chgIData(oldp+59,(vlSelf->__Vcellout__ysyx_23060286_top__rddata_wire),32);
        bufp->chgBit(oldp+60,(vlSelf->__Vcellout__ysyx_23060286_top__wen_wire));
        bufp->chgCData(oldp+61,(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire),6);
        bufp->chgCData(oldp+62,(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire),3);
        bufp->chgIData(oldp+63,(vlSelf->__Vcellout__ysyx_23060286_top__immext_wire),32);
        bufp->chgBit(oldp+64,(vlSelf->__Vcellout__ysyx_23060286_top__branch_wire));
        bufp->chgBit(oldp+65,(vlSelf->__Vcellout__ysyx_23060286_top__zero_wire));
        bufp->chgBit(oldp+66,(vlSelf->__Vcellout__ysyx_23060286_top__jump_wire));
        bufp->chgIData(oldp+67,(vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire),32);
        bufp->chgIData(oldp+68,(vlSelf->__Vcellinp__ysyx_23060286_top__inst),32);
        bufp->chgIData(oldp+69,(vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire),32);
        bufp->chgIData(oldp+70,(vlSelf->__Vcellout__ysyx_23060286_top__npc_wire),32);
        bufp->chgIData(oldp+71,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 + vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)),32);
        bufp->chgIData(oldp+72,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 - vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)),32);
        bufp->chgIData(oldp+73,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 << (0x1fU & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))),32);
        bufp->chgIData(oldp+74,((VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                  ? 1U : 0U)),32);
        bufp->chgIData(oldp+75,(((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                  < vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                  ? 1U : 0U)),32);
        bufp->chgIData(oldp+76,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 ^ vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)),32);
        bufp->chgIData(oldp+77,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 >> (0x1fU & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))),32);
        bufp->chgIData(oldp+78,(VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                               (0x1fU 
                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))),32);
        bufp->chgIData(oldp+79,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 | vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)),32);
        bufp->chgIData(oldp+80,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)),32);
        bufp->chgIData(oldp+81,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)),32);
        bufp->chgIData(oldp+82,((VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                  ? 1U : 0U)),32);
        bufp->chgIData(oldp+83,(((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                  < vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                  ? 1U : 0U)),32);
        bufp->chgIData(oldp+84,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 ^ vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)),32);
        bufp->chgIData(oldp+85,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 | vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)),32);
        bufp->chgIData(oldp+86,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)),32);
        bufp->chgIData(oldp+87,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 << (0x1fU & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))),32);
        bufp->chgIData(oldp+88,((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                 >> (0x1fU & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))),32);
        bufp->chgIData(oldp+89,(VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                               (0x1fU 
                                                & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))),32);
        bufp->chgIData(oldp+90,((vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                 << 0xcU)),32);
        bufp->chgIData(oldp+91,((0xfffffffeU & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))),32);
        bufp->chgWData(oldp+92,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut),874);
        bufp->chgQData(oldp+120,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0]),38);
        bufp->chgQData(oldp+122,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[1]),38);
        bufp->chgQData(oldp+124,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[2]),38);
        bufp->chgQData(oldp+126,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[3]),38);
        bufp->chgQData(oldp+128,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[4]),38);
        bufp->chgQData(oldp+130,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[5]),38);
        bufp->chgQData(oldp+132,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[6]),38);
        bufp->chgQData(oldp+134,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[7]),38);
        bufp->chgQData(oldp+136,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[8]),38);
        bufp->chgQData(oldp+138,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[9]),38);
        bufp->chgQData(oldp+140,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[10]),38);
        bufp->chgQData(oldp+142,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[11]),38);
        bufp->chgQData(oldp+144,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[12]),38);
        bufp->chgQData(oldp+146,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[13]),38);
        bufp->chgQData(oldp+148,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[14]),38);
        bufp->chgQData(oldp+150,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[15]),38);
        bufp->chgQData(oldp+152,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[16]),38);
        bufp->chgQData(oldp+154,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[17]),38);
        bufp->chgQData(oldp+156,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[18]),38);
        bufp->chgQData(oldp+158,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[19]),38);
        bufp->chgQData(oldp+160,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[20]),38);
        bufp->chgQData(oldp+162,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[21]),38);
        bufp->chgQData(oldp+164,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[22]),38);
        bufp->chgCData(oldp+166,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0]),6);
        bufp->chgCData(oldp+167,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[1]),6);
        bufp->chgCData(oldp+168,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[2]),6);
        bufp->chgCData(oldp+169,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[3]),6);
        bufp->chgCData(oldp+170,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[4]),6);
        bufp->chgCData(oldp+171,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[5]),6);
        bufp->chgCData(oldp+172,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[6]),6);
        bufp->chgCData(oldp+173,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[7]),6);
        bufp->chgCData(oldp+174,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[8]),6);
        bufp->chgCData(oldp+175,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[9]),6);
        bufp->chgCData(oldp+176,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[10]),6);
        bufp->chgCData(oldp+177,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[11]),6);
        bufp->chgCData(oldp+178,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[12]),6);
        bufp->chgCData(oldp+179,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[13]),6);
        bufp->chgCData(oldp+180,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[14]),6);
        bufp->chgCData(oldp+181,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[15]),6);
        bufp->chgCData(oldp+182,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[16]),6);
        bufp->chgCData(oldp+183,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[17]),6);
        bufp->chgCData(oldp+184,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[18]),6);
        bufp->chgCData(oldp+185,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[19]),6);
        bufp->chgCData(oldp+186,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[20]),6);
        bufp->chgCData(oldp+187,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[21]),6);
        bufp->chgCData(oldp+188,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[22]),6);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0]),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[1]),32);
        bufp->chgIData(oldp+191,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[2]),32);
        bufp->chgIData(oldp+192,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[3]),32);
        bufp->chgIData(oldp+193,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[4]),32);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[5]),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[6]),32);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[7]),32);
        bufp->chgIData(oldp+197,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[8]),32);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[9]),32);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[10]),32);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[11]),32);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[12]),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[13]),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[14]),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[15]),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[16]),32);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[17]),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[18]),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[19]),32);
        bufp->chgIData(oldp+209,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[20]),32);
        bufp->chgIData(oldp+210,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[21]),32);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[22]),32);
        bufp->chgIData(oldp+212,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out),32);
        bufp->chgBit(oldp+213,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit));
        bufp->chgCData(oldp+214,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                           >> 7U))),5);
        bufp->chgCData(oldp+215,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+216,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+217,((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst)),7);
        bufp->chgCData(oldp+218,((7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+219,((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+220,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key),17);
        bufp->chgCData(oldp+221,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out),6);
        bufp->chgBit(oldp+222,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit));
        bufp->chgCData(oldp+223,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out),3);
        bufp->chgBit(oldp+224,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit));
        bufp->chgBit(oldp+225,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out));
        bufp->chgBit(oldp+226,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit));
        bufp->chgIData(oldp+227,((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                  >> 7U)),25);
        bufp->chgIData(oldp+228,((((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+229,((((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+230,((((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                               >> 0x1fU))) 
                                   << 0xdU) | ((0x1000U 
                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                           >> 7U))))))),32);
        bufp->chgIData(oldp+231,((0xfffff000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst)),32);
        bufp->chgIData(oldp+232,((((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                               >> 0x1fU))) 
                                   << 0x15U) | ((0x100000U 
                                                 & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                                                   | ((0x800U 
                                                       & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                            >> 0x14U))))))),32);
        bufp->chgWData(oldp+233,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut),175);
        bufp->chgQData(oldp+239,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+241,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+243,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+245,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[3]),35);
        bufp->chgQData(oldp+247,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[4]),35);
        bufp->chgCData(oldp+249,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[0]),3);
        bufp->chgCData(oldp+250,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[1]),3);
        bufp->chgCData(oldp+251,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[2]),3);
        bufp->chgCData(oldp+252,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[3]),3);
        bufp->chgCData(oldp+253,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[4]),3);
        bufp->chgIData(oldp+254,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[0]),32);
        bufp->chgIData(oldp+255,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[1]),32);
        bufp->chgIData(oldp+256,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[2]),32);
        bufp->chgIData(oldp+257,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[3]),32);
        bufp->chgIData(oldp+258,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[4]),32);
        bufp->chgIData(oldp+259,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out),32);
        bufp->chgBit(oldp+260,(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit));
        bufp->chgIData(oldp+261,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__dnpcjal),32);
        bufp->chgCData(oldp+262,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber2),3);
        bufp->chgWData(oldp+263,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4),105);
        bufp->chgQData(oldp+267,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+269,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+271,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list[2]),35);
        bufp->chgCData(oldp+273,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list[0]),3);
        bufp->chgCData(oldp+274,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list[1]),3);
        bufp->chgCData(oldp+275,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list[2]),3);
        bufp->chgIData(oldp+276,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list[0]),32);
        bufp->chgIData(oldp+277,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list[1]),32);
        bufp->chgIData(oldp+278,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list[2]),32);
        bufp->chgIData(oldp+279,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__lut_out),32);
        bufp->chgBit(oldp+280,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__hit));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+281,(vlSelf->__Vcellout__ysyx_23060286_top__pc_wire),32);
        bufp->chgIData(oldp+282,(((IData)(4U) + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire)),32);
        bufp->chgIData(oldp+283,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[0]),32);
        bufp->chgIData(oldp+284,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[1]),32);
        bufp->chgIData(oldp+285,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[2]),32);
        bufp->chgIData(oldp+286,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[3]),32);
        bufp->chgIData(oldp+287,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[4]),32);
        bufp->chgIData(oldp+288,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[5]),32);
        bufp->chgIData(oldp+289,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[6]),32);
        bufp->chgIData(oldp+290,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[7]),32);
        bufp->chgIData(oldp+291,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[8]),32);
        bufp->chgIData(oldp+292,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[9]),32);
        bufp->chgIData(oldp+293,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[10]),32);
        bufp->chgIData(oldp+294,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[11]),32);
        bufp->chgIData(oldp+295,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[12]),32);
        bufp->chgIData(oldp+296,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[13]),32);
        bufp->chgIData(oldp+297,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[14]),32);
        bufp->chgIData(oldp+298,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[15]),32);
        bufp->chgIData(oldp+299,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[16]),32);
        bufp->chgIData(oldp+300,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[17]),32);
        bufp->chgIData(oldp+301,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[18]),32);
        bufp->chgIData(oldp+302,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[19]),32);
        bufp->chgIData(oldp+303,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[20]),32);
        bufp->chgIData(oldp+304,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[21]),32);
        bufp->chgIData(oldp+305,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[22]),32);
        bufp->chgIData(oldp+306,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[23]),32);
        bufp->chgIData(oldp+307,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[24]),32);
        bufp->chgIData(oldp+308,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[25]),32);
        bufp->chgIData(oldp+309,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[26]),32);
        bufp->chgIData(oldp+310,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[27]),32);
        bufp->chgIData(oldp+311,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[28]),32);
        bufp->chgIData(oldp+312,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[29]),32);
        bufp->chgIData(oldp+313,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[30]),32);
        bufp->chgIData(oldp+314,(vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[31]),32);
        bufp->chgIData(oldp+315,(((IData)(4U) + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire)),32);
    }
    bufp->chgIData(oldp+316,((vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
                              + (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                 << 0xcU))),32);
}

void Vysyx_23060286_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060286_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060286_top___024root*>(voidSelf);
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
