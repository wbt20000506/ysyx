// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->__Vcellinp__top__clk));
        bufp->chgBit(oldp+1,(vlSelf->__Vcellinp__top__rst));
        bufp->chgIData(oldp+2,(vlSelf->__Vcellout__top__rddata_wire),32);
        bufp->chgCData(oldp+3,((7U & (vlSelf->__Vcellinp__top__inst 
                                      >> 0xcU))),3);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__IMM__DOT__immI),32);
        bufp->chgBit(oldp+5,((1U & ((~ ((vlSelf->__Vcellout__top__rs1data_wire 
                                         ^ vlSelf->top__DOT__ALU__DOT__b2) 
                                        >> 0x1fU)) 
                                    & ((vlSelf->__Vcellout__top__rs1data_wire 
                                        ^ vlSelf->top__DOT__ALU__DOT__raddsub) 
                                       >> 0x1fU)))));
        bufp->chgBit(oldp+6,((1U & (~ (IData)((0U != vlSelf->__Vcellout__top__rddata_wire))))));
        bufp->chgBit(oldp+7,((vlSelf->__Vcellout__top__rddata_wire 
                              >> 0x1fU)));
        bufp->chgBit(oldp+8,((1U & (IData)((1ULL & 
                                            ((((QData)((IData)(vlSelf->__Vcellout__top__rs1data_wire)) 
                                               + (QData)((IData)(vlSelf->top__DOT__ALU__DOT__b2))) 
                                              + (QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->__Vcellinp__top__inst 
                                                                    >> 0xcU))))) 
                                             >> 0x20U))))));
        bufp->chgIData(oldp+9,(vlSelf->__Vcellout__top__rs1data_wire),32);
        bufp->chgIData(oldp+10,(vlSelf->__Vcellinp__top__inst),32);
        bufp->chgIData(oldp+11,(vlSelf->top__DOT__ALU__DOT__raddsub),32);
        bufp->chgIData(oldp+12,((vlSelf->__Vcellout__top__rs1data_wire 
                                 & vlSelf->top__DOT__IMM__DOT__immI)),32);
        bufp->chgIData(oldp+13,((vlSelf->__Vcellout__top__rs1data_wire 
                                 | vlSelf->top__DOT__IMM__DOT__immI)),32);
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__ALU__DOT__b2),32);
        bufp->chgWData(oldp+15,(vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4),140);
        bufp->chgQData(oldp+20,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[0]),35);
        bufp->chgQData(oldp+22,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[1]),35);
        bufp->chgQData(oldp+24,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[2]),35);
        bufp->chgQData(oldp+26,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[3]),35);
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[0]),3);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[1]),3);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[2]),3);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[3]),3);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[0]),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[1]),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[2]),32);
        bufp->chgIData(oldp+35,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[3]),32);
        bufp->chgIData(oldp+36,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__lut_out),32);
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__hit));
        bufp->chgCData(oldp+38,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                          >> 7U))),5);
        bufp->chgCData(oldp+39,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+40,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+41,((0x7fU & vlSelf->__Vcellinp__top__inst)),7);
        bufp->chgCData(oldp+42,((vlSelf->__Vcellinp__top__inst 
                                 >> 0x19U)),7);
        bufp->chgSData(oldp+43,((vlSelf->__Vcellinp__top__inst 
                                 >> 0x14U)),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+44,(vlSelf->__Vcellout__top__pc_wire),32);
        bufp->chgIData(oldp+45,(((IData)(4U) + vlSelf->__Vcellout__top__pc_wire)),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__GPR__DOT__rf[0]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__GPR__DOT__rf[1]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__GPR__DOT__rf[2]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__GPR__DOT__rf[3]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__GPR__DOT__rf[4]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__GPR__DOT__rf[5]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__GPR__DOT__rf[6]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__GPR__DOT__rf[7]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT__GPR__DOT__rf[8]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__GPR__DOT__rf[9]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__GPR__DOT__rf[10]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT__GPR__DOT__rf[11]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT__GPR__DOT__rf[12]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT__GPR__DOT__rf[13]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__GPR__DOT__rf[14]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT__GPR__DOT__rf[15]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT__GPR__DOT__rf[16]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT__GPR__DOT__rf[17]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT__GPR__DOT__rf[18]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__GPR__DOT__rf[19]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT__GPR__DOT__rf[20]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT__GPR__DOT__rf[21]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT__GPR__DOT__rf[22]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT__GPR__DOT__rf[23]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT__GPR__DOT__rf[24]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT__GPR__DOT__rf[25]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__GPR__DOT__rf[26]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT__GPR__DOT__rf[27]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT__GPR__DOT__rf[28]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT__GPR__DOT__rf[29]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT__GPR__DOT__rf[30]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__GPR__DOT__rf[31]),32);
    }
    bufp->chgIData(oldp+78,(vlSelf->top__DOT__GPR__DOT__rf
                            [(0x1fU & (vlSelf->__Vcellinp__top__inst 
                                       >> 0x14U))]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
