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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->__Vcellinp__ysyx_23060286_top__clk));
        bufp->chgBit(oldp+1,(vlSelf->__Vcellinp__ysyx_23060286_top__rst));
        bufp->chgIData(oldp+2,(vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire),32);
        bufp->chgIData(oldp+3,(vlSelf->__Vcellinp__ysyx_23060286_top__readdata_wire),32);
        bufp->chgIData(oldp+4,(vlSelf->__Vcellout__ysyx_23060286_top__npc_wire),32);
        bufp->chgIData(oldp+5,(vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire),32);
        bufp->chgIData(oldp+6,(vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire),32);
        bufp->chgIData(oldp+7,(vlSelf->__Vcellout__ysyx_23060286_top__immext_wire),32);
        bufp->chgIData(oldp+8,(vlSelf->__Vcellout__ysyx_23060286_top__srcb_wire),32);
        bufp->chgIData(oldp+9,(vlSelf->__Vcellout__ysyx_23060286_top__aluresult_wire),32);
        bufp->chgIData(oldp+10,(vlSelf->__Vcellout__ysyx_23060286_top__dnpc_wire),32);
        bufp->chgIData(oldp+11,(vlSelf->__Vcellout__ysyx_23060286_top__result_wire),32);
        bufp->chgIData(oldp+12,(vlSelf->__Vcellout__ysyx_23060286_top__srca_wire),32);
        bufp->chgBit(oldp+13,(vlSelf->__Vcellout__ysyx_23060286_top__pcsrc));
        bufp->chgBit(oldp+14,(vlSelf->__Vcellout__ysyx_23060286_top__memwrite));
        bufp->chgBit(oldp+15,(vlSelf->__Vcellout__ysyx_23060286_top__alusrc));
        bufp->chgBit(oldp+16,(vlSelf->__Vcellout__ysyx_23060286_top__regwrite));
        bufp->chgBit(oldp+17,((0U == vlSelf->__Vcellout__ysyx_23060286_top__aluresult_wire)));
        bufp->chgBit(oldp+18,(vlSelf->__Vcellout__ysyx_23060286_top__jalr));
        bufp->chgBit(oldp+19,(vlSelf->__Vcellout__ysyx_23060286_top__auipc));
        bufp->chgCData(oldp+20,(vlSelf->__Vcellout__ysyx_23060286_top__resultsrc),2);
        bufp->chgCData(oldp+21,(vlSelf->__Vcellout__ysyx_23060286_top__immsrc),2);
        bufp->chgCData(oldp+22,(vlSelf->__Vcellout__ysyx_23060286_top__alucontrol),3);
        bufp->chgCData(oldp+23,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                          >> 7U))),5);
        bufp->chgCData(oldp+24,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+25,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+26,((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)),7);
        bufp->chgCData(oldp+27,((7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+28,((1U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                     >> 0x1eU))));
        bufp->chgBit(oldp+29,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch));
        bufp->chgCData(oldp+30,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop),2);
        bufp->chgBit(oldp+31,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump));
        bufp->chgIData(oldp+32,((vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                 >> 7U)),25);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+33,(vlSelf->__Vcellout__ysyx_23060286_top__pc_wire),32);
        bufp->chgIData(oldp+34,(((IData)(4U) + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire)),32);
        bufp->chgIData(oldp+35,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[0]),32);
        bufp->chgIData(oldp+36,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[1]),32);
        bufp->chgIData(oldp+37,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[2]),32);
        bufp->chgIData(oldp+38,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[3]),32);
        bufp->chgIData(oldp+39,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[4]),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[5]),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[6]),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[7]),32);
        bufp->chgIData(oldp+43,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[8]),32);
        bufp->chgIData(oldp+44,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[9]),32);
        bufp->chgIData(oldp+45,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[10]),32);
        bufp->chgIData(oldp+46,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[11]),32);
        bufp->chgIData(oldp+47,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[12]),32);
        bufp->chgIData(oldp+48,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[13]),32);
        bufp->chgIData(oldp+49,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[14]),32);
        bufp->chgIData(oldp+50,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[15]),32);
        bufp->chgIData(oldp+51,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[16]),32);
        bufp->chgIData(oldp+52,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[17]),32);
        bufp->chgIData(oldp+53,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[18]),32);
        bufp->chgIData(oldp+54,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[19]),32);
        bufp->chgIData(oldp+55,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[20]),32);
        bufp->chgIData(oldp+56,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[21]),32);
        bufp->chgIData(oldp+57,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[22]),32);
        bufp->chgIData(oldp+58,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[23]),32);
        bufp->chgIData(oldp+59,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[24]),32);
        bufp->chgIData(oldp+60,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[25]),32);
        bufp->chgIData(oldp+61,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[26]),32);
        bufp->chgIData(oldp+62,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[27]),32);
        bufp->chgIData(oldp+63,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[28]),32);
        bufp->chgIData(oldp+64,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[29]),32);
        bufp->chgIData(oldp+65,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[30]),32);
        bufp->chgIData(oldp+66,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[31]),32);
    }
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
