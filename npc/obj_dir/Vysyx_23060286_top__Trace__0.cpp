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
    bufp->chgBit(oldp+0,(vlSelf->ysyx_23060286_top__DOT__clk));
    bufp->chgBit(oldp+1,(vlSelf->ysyx_23060286_top__DOT__rst));
    bufp->chgIData(oldp+2,(vlSelf->ysyx_23060286_top__DOT__inst_wire),32);
    bufp->chgIData(oldp+3,(vlSelf->ysyx_23060286_top__DOT__readdata_wire),32);
    bufp->chgIData(oldp+4,(vlSelf->ysyx_23060286_top__DOT__npc_wire),32);
    bufp->chgIData(oldp+5,(vlSelf->ysyx_23060286_top__DOT__pc_wire),32);
    bufp->chgIData(oldp+6,(vlSelf->ysyx_23060286_top__DOT__snpc_wire),32);
    bufp->chgIData(oldp+7,(vlSelf->ysyx_23060286_top__DOT__rs1data_wire),32);
    bufp->chgIData(oldp+8,(vlSelf->ysyx_23060286_top__DOT__rs2data_wire),32);
    bufp->chgIData(oldp+9,(vlSelf->ysyx_23060286_top__DOT__immext_wire),32);
    bufp->chgIData(oldp+10,(vlSelf->ysyx_23060286_top__DOT__srcb_wire),32);
    bufp->chgIData(oldp+11,(vlSelf->ysyx_23060286_top__DOT__aluresult_wire),32);
    bufp->chgIData(oldp+12,(vlSelf->ysyx_23060286_top__DOT__dnpc_wire),32);
    bufp->chgIData(oldp+13,(vlSelf->ysyx_23060286_top__DOT__result_wire),32);
    bufp->chgIData(oldp+14,(vlSelf->ysyx_23060286_top__DOT__srca_wire),32);
    bufp->chgBit(oldp+15,(vlSelf->ysyx_23060286_top__DOT__pcsrc));
    bufp->chgBit(oldp+16,(vlSelf->ysyx_23060286_top__DOT__alusrc));
    bufp->chgBit(oldp+17,(vlSelf->ysyx_23060286_top__DOT__regwrite));
    bufp->chgBit(oldp+18,(vlSelf->ysyx_23060286_top__DOT__zero));
    bufp->chgBit(oldp+19,(vlSelf->ysyx_23060286_top__DOT__jalr));
    bufp->chgBit(oldp+20,(vlSelf->ysyx_23060286_top__DOT__auipc));
    bufp->chgCData(oldp+21,(vlSelf->ysyx_23060286_top__DOT__resultsrc),2);
    bufp->chgCData(oldp+22,(vlSelf->ysyx_23060286_top__DOT__immsrc),2);
    bufp->chgCData(oldp+23,(vlSelf->ysyx_23060286_top__DOT__memwrite),4);
    bufp->chgCData(oldp+24,(vlSelf->ysyx_23060286_top__DOT__alucontrol),4);
    bufp->chgIData(oldp+25,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__srca),32);
    bufp->chgIData(oldp+26,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__srcb),32);
    bufp->chgCData(oldp+27,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alucontrol),4);
    bufp->chgCData(oldp+28,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__f3),3);
    bufp->chgBit(oldp+29,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__zero));
    bufp->chgIData(oldp+30,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__aluresult),32);
    bufp->chgIData(oldp+31,(vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__rs2data),32);
    bufp->chgIData(oldp+32,(vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__immext),32);
    bufp->chgBit(oldp+33,(vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__alusrc));
    bufp->chgIData(oldp+34,(vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__srcb),32);
    bufp->chgIData(oldp+35,(vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__pc),32);
    bufp->chgIData(oldp+36,(vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__immext),32);
    bufp->chgIData(oldp+37,(vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__rs1data),32);
    bufp->chgBit(oldp+38,(vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__jalr));
    bufp->chgIData(oldp+39,(vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__dnpc),32);
    bufp->chgBit(oldp+40,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__clk));
    bufp->chgIData(oldp+41,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rddata),32);
    bufp->chgCData(oldp+42,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__waddr),5);
    bufp->chgCData(oldp+43,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__r1addr),5);
    bufp->chgCData(oldp+44,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__r2addr),5);
    bufp->chgBit(oldp+45,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__wen));
    bufp->chgIData(oldp+46,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rs1data),32);
    bufp->chgIData(oldp+47,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rs2data),32);
    bufp->chgIData(oldp+48,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[0]),32);
    bufp->chgIData(oldp+49,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[1]),32);
    bufp->chgIData(oldp+50,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[2]),32);
    bufp->chgIData(oldp+51,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[3]),32);
    bufp->chgIData(oldp+52,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[4]),32);
    bufp->chgIData(oldp+53,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[5]),32);
    bufp->chgIData(oldp+54,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[6]),32);
    bufp->chgIData(oldp+55,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[7]),32);
    bufp->chgIData(oldp+56,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[8]),32);
    bufp->chgIData(oldp+57,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[9]),32);
    bufp->chgIData(oldp+58,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[10]),32);
    bufp->chgIData(oldp+59,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[11]),32);
    bufp->chgIData(oldp+60,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[12]),32);
    bufp->chgIData(oldp+61,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[13]),32);
    bufp->chgIData(oldp+62,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[14]),32);
    bufp->chgIData(oldp+63,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[15]),32);
    bufp->chgIData(oldp+64,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[16]),32);
    bufp->chgIData(oldp+65,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[17]),32);
    bufp->chgIData(oldp+66,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[18]),32);
    bufp->chgIData(oldp+67,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[19]),32);
    bufp->chgIData(oldp+68,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[20]),32);
    bufp->chgIData(oldp+69,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[21]),32);
    bufp->chgIData(oldp+70,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[22]),32);
    bufp->chgIData(oldp+71,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[23]),32);
    bufp->chgIData(oldp+72,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[24]),32);
    bufp->chgIData(oldp+73,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[25]),32);
    bufp->chgIData(oldp+74,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[26]),32);
    bufp->chgIData(oldp+75,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[27]),32);
    bufp->chgIData(oldp+76,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[28]),32);
    bufp->chgIData(oldp+77,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[29]),32);
    bufp->chgIData(oldp+78,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[30]),32);
    bufp->chgIData(oldp+79,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[31]),32);
    bufp->chgCData(oldp+80,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__op),7);
    bufp->chgCData(oldp+81,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__f3),3);
    bufp->chgBit(oldp+82,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__f7));
    bufp->chgBit(oldp+83,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__zero));
    bufp->chgBit(oldp+84,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jalr));
    bufp->chgBit(oldp+85,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__pcsrc));
    bufp->chgCData(oldp+86,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc),2);
    bufp->chgCData(oldp+87,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite),4);
    bufp->chgCData(oldp+88,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alucontrol),4);
    bufp->chgBit(oldp+89,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc));
    bufp->chgCData(oldp+90,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc),2);
    bufp->chgBit(oldp+91,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite));
    bufp->chgBit(oldp+92,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc));
    bufp->chgBit(oldp+93,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch));
    bufp->chgCData(oldp+94,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop),2);
    bufp->chgBit(oldp+95,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump));
    bufp->chgIData(oldp+96,(vlSelf->ysyx_23060286_top__DOT__Imm__DOT__imm),25);
    bufp->chgBit(oldp+97,(vlSelf->ysyx_23060286_top__DOT__Imm__DOT__auipc));
    bufp->chgCData(oldp+98,(vlSelf->ysyx_23060286_top__DOT__Imm__DOT__immsrc),2);
    bufp->chgIData(oldp+99,(vlSelf->ysyx_23060286_top__DOT__Imm__DOT__immext),32);
    bufp->chgBit(oldp+100,(vlSelf->ysyx_23060286_top__DOT__PC__DOT__clk));
    bufp->chgBit(oldp+101,(vlSelf->ysyx_23060286_top__DOT__PC__DOT__rst));
    bufp->chgIData(oldp+102,(vlSelf->ysyx_23060286_top__DOT__PC__DOT__next_pc),32);
    bufp->chgIData(oldp+103,(vlSelf->ysyx_23060286_top__DOT__PC__DOT__pc),32);
    bufp->chgIData(oldp+104,(vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__snpc),32);
    bufp->chgIData(oldp+105,(vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__dnpc),32);
    bufp->chgBit(oldp+106,(vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__pcsrc));
    bufp->chgIData(oldp+107,(vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__next_pc),32);
    bufp->chgIData(oldp+108,(vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__aluresult),32);
    bufp->chgIData(oldp+109,(vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__readdata),32);
    bufp->chgIData(oldp+110,(vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__snpc),32);
    bufp->chgCData(oldp+111,(vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__resultsrc),2);
    bufp->chgIData(oldp+112,(vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__result),32);
    bufp->chgIData(oldp+113,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__pc),32);
    bufp->chgIData(oldp+114,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc),32);
    bufp->chgIData(oldp+115,(vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__rs1data),32);
    bufp->chgIData(oldp+116,(vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__pc),32);
    bufp->chgBit(oldp+117,(vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__auipc));
    bufp->chgIData(oldp+118,(vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__srca),32);
}

void Vysyx_23060286_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060286_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060286_top___024root*>(voidSelf);
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
