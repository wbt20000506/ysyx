// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+45,"pc_wire", false,-1, 31,0);
    tracep->declBus(c+3,"rddata_wire", false,-1, 31,0);
    tracep->declBit(c+80,"wen_wire", false,-1);
    tracep->declBus(c+4,"alucotrol_wire", false,-1, 2,0);
    tracep->declBus(c+81,"immtype_wire", false,-1, 2,0);
    tracep->declBus(c+5,"immext_wire", false,-1, 31,0);
    tracep->declBit(c+6,"of_wire", false,-1);
    tracep->declBit(c+7,"zf_wire", false,-1);
    tracep->declBit(c+8,"nf_wire", false,-1);
    tracep->declBit(c+9,"cf_wire", false,-1);
    tracep->declBus(c+10,"rs1data_wire", false,-1, 31,0);
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->declBus(c+79,"rs2data_wire", false,-1, 31,0);
    tracep->declBus(c+46,"snpc_wire", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+10,"a", false,-1, 31,0);
    tracep->declBus(c+5,"b", false,-1, 31,0);
    tracep->declBus(c+4,"alucontrol", false,-1, 2,0);
    tracep->declBus(c+3,"result", false,-1, 31,0);
    tracep->declBit(c+6,"of", false,-1);
    tracep->declBit(c+7,"zf", false,-1);
    tracep->declBit(c+8,"nf", false,-1);
    tracep->declBit(c+9,"cf", false,-1);
    tracep->declBus(c+12,"raddsub", false,-1, 31,0);
    tracep->declBus(c+13,"r_and", false,-1, 31,0);
    tracep->declBus(c+14,"ror", false,-1, 31,0);
    tracep->declBus(c+15,"b2", false,-1, 31,0);
    tracep->pushNamePrefix("aluxmux ");
    tracep->declBus(c+82,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+83,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+84,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+85,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+3,"out", false,-1, 31,0);
    tracep->declBus(c+4,"key", false,-1, 2,0);
    tracep->declBus(c+86,"default_out", false,-1, 31,0);
    tracep->declArray(c+16,"lut", false,-1, 139,0);
    tracep->declBus(c+87,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+21+i*2,"pair_list", true,(i+0), 34,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+29+i*1,"key_list", true,(i+0), 2,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+33+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+37,"lut_out", false,-1, 31,0);
    tracep->declBit(c+38,"hit", false,-1);
    tracep->declBus(c+88,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("GPR ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+3,"rddata", false,-1, 31,0);
    tracep->declBus(c+39,"waddr", false,-1, 4,0);
    tracep->declBus(c+40,"r1addr", false,-1, 4,0);
    tracep->declBus(c+41,"r2addr", false,-1, 4,0);
    tracep->declBit(c+80,"wen", false,-1);
    tracep->declBus(c+10,"rs1data", false,-1, 31,0);
    tracep->declBus(c+79,"rs2data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+47+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+42,"op", false,-1, 6,0);
    tracep->declBus(c+4,"f3", false,-1, 2,0);
    tracep->declBus(c+43,"f7", false,-1, 6,0);
    tracep->declBus(c+44,"f12", false,-1, 11,0);
    tracep->declBus(c+4,"alucotrol", false,-1, 2,0);
    tracep->declBus(c+81,"immtype", false,-1, 2,0);
    tracep->declBit(c+80,"regwrite", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+11,"inst", false,-1, 31,0);
    tracep->declBus(c+81,"immtype", false,-1, 2,0);
    tracep->declBus(c+5,"immext", false,-1, 31,0);
    tracep->declBus(c+5,"immI", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+46,"next_pc", false,-1, 31,0);
    tracep->declBus(c+45,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("PC_reg ");
    tracep->declBus(c+84,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+89,"RESET_VAL", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+46,"din", false,-1, 31,0);
    tracep->declBus(c+45,"dout", false,-1, 31,0);
    tracep->declBit(c+80,"wen", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SNPC ");
    tracep->declBus(c+45,"pc", false,-1, 31,0);
    tracep->declBus(c+46,"snpc", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->__Vcellinp__top__clk));
    bufp->fullBit(oldp+2,(vlSelf->__Vcellinp__top__rst));
    bufp->fullIData(oldp+3,(vlSelf->__Vcellout__top__rddata_wire),32);
    bufp->fullCData(oldp+4,((7U & (vlSelf->__Vcellinp__top__inst 
                                   >> 0xcU))),3);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__IMM__DOT__immI),32);
    bufp->fullBit(oldp+6,((1U & ((~ ((vlSelf->__Vcellout__top__rs1data_wire 
                                      ^ vlSelf->top__DOT__ALU__DOT__b2) 
                                     >> 0x1fU)) & (
                                                   (vlSelf->__Vcellout__top__rs1data_wire 
                                                    ^ vlSelf->top__DOT__ALU__DOT__raddsub) 
                                                   >> 0x1fU)))));
    bufp->fullBit(oldp+7,((1U & (~ (IData)((0U != vlSelf->__Vcellout__top__rddata_wire))))));
    bufp->fullBit(oldp+8,((vlSelf->__Vcellout__top__rddata_wire 
                           >> 0x1fU)));
    bufp->fullBit(oldp+9,((1U & (IData)((1ULL & ((((QData)((IData)(vlSelf->__Vcellout__top__rs1data_wire)) 
                                                   + (QData)((IData)(vlSelf->top__DOT__ALU__DOT__b2))) 
                                                  + (QData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->__Vcellinp__top__inst 
                                                                        >> 0xcU))))) 
                                                 >> 0x20U))))));
    bufp->fullIData(oldp+10,(vlSelf->__Vcellout__top__rs1data_wire),32);
    bufp->fullIData(oldp+11,(vlSelf->__Vcellinp__top__inst),32);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__ALU__DOT__raddsub),32);
    bufp->fullIData(oldp+13,((vlSelf->__Vcellout__top__rs1data_wire 
                              & vlSelf->top__DOT__IMM__DOT__immI)),32);
    bufp->fullIData(oldp+14,((vlSelf->__Vcellout__top__rs1data_wire 
                              | vlSelf->top__DOT__IMM__DOT__immI)),32);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__ALU__DOT__b2),32);
    bufp->fullWData(oldp+16,(vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4),140);
    bufp->fullQData(oldp+21,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[0]),35);
    bufp->fullQData(oldp+23,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[1]),35);
    bufp->fullQData(oldp+25,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[2]),35);
    bufp->fullQData(oldp+27,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[3]),35);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[0]),3);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[1]),3);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[2]),3);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[3]),3);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__lut_out),32);
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__hit));
    bufp->fullCData(oldp+39,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                       >> 7U))),5);
    bufp->fullCData(oldp+40,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+41,((0x1fU & (vlSelf->__Vcellinp__top__inst 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+42,((0x7fU & vlSelf->__Vcellinp__top__inst)),7);
    bufp->fullCData(oldp+43,((vlSelf->__Vcellinp__top__inst 
                              >> 0x19U)),7);
    bufp->fullSData(oldp+44,((vlSelf->__Vcellinp__top__inst 
                              >> 0x14U)),12);
    bufp->fullIData(oldp+45,(vlSelf->__Vcellout__top__pc_wire),32);
    bufp->fullIData(oldp+46,(((IData)(4U) + vlSelf->__Vcellout__top__pc_wire)),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__GPR__DOT__rf[0]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__GPR__DOT__rf[1]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__GPR__DOT__rf[2]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__GPR__DOT__rf[3]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__GPR__DOT__rf[4]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__GPR__DOT__rf[5]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__GPR__DOT__rf[6]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__GPR__DOT__rf[7]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__GPR__DOT__rf[8]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__GPR__DOT__rf[9]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__GPR__DOT__rf[10]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__GPR__DOT__rf[11]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__GPR__DOT__rf[12]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__GPR__DOT__rf[13]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__GPR__DOT__rf[14]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__GPR__DOT__rf[15]),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__GPR__DOT__rf[16]),32);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__GPR__DOT__rf[17]),32);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__GPR__DOT__rf[18]),32);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__GPR__DOT__rf[19]),32);
    bufp->fullIData(oldp+67,(vlSelf->top__DOT__GPR__DOT__rf[20]),32);
    bufp->fullIData(oldp+68,(vlSelf->top__DOT__GPR__DOT__rf[21]),32);
    bufp->fullIData(oldp+69,(vlSelf->top__DOT__GPR__DOT__rf[22]),32);
    bufp->fullIData(oldp+70,(vlSelf->top__DOT__GPR__DOT__rf[23]),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__GPR__DOT__rf[24]),32);
    bufp->fullIData(oldp+72,(vlSelf->top__DOT__GPR__DOT__rf[25]),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__GPR__DOT__rf[26]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__GPR__DOT__rf[27]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__GPR__DOT__rf[28]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__GPR__DOT__rf[29]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__GPR__DOT__rf[30]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__GPR__DOT__rf[31]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__GPR__DOT__rf
                             [(0x1fU & (vlSelf->__Vcellinp__top__inst 
                                        >> 0x14U))]),32);
    bufp->fullBit(oldp+80,(1U));
    bufp->fullCData(oldp+81,(0U),3);
    bufp->fullIData(oldp+82,(4U),32);
    bufp->fullIData(oldp+83,(3U),32);
    bufp->fullIData(oldp+84,(0x20U),32);
    bufp->fullIData(oldp+85,(0U),32);
    bufp->fullIData(oldp+86,(0U),32);
    bufp->fullIData(oldp+87,(0x23U),32);
    bufp->fullIData(oldp+88,(4U),32);
    bufp->fullIData(oldp+89,(0x80000000U),32);
}
