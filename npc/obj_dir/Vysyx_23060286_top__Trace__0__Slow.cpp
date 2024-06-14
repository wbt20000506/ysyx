// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_sc.h"
#include "Vysyx_23060286_top__Syms.h"


VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_init_sub__TOP__0(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("ysyx_23060286_top ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+3,"inst_wire", false,-1, 31,0);
    tracep->declBus(c+4,"readdata_wire", false,-1, 31,0);
    tracep->declBus(c+5,"npc_wire", false,-1, 31,0);
    tracep->declBus(c+6,"pc_wire", false,-1, 31,0);
    tracep->declBus(c+7,"snpc_wire", false,-1, 31,0);
    tracep->declBus(c+8,"rs1data_wire", false,-1, 31,0);
    tracep->declBus(c+9,"rs2data_wire", false,-1, 31,0);
    tracep->declBus(c+10,"immext_wire", false,-1, 31,0);
    tracep->declBus(c+11,"srcb_wire", false,-1, 31,0);
    tracep->declBus(c+12,"aluresult_wire", false,-1, 31,0);
    tracep->declBus(c+13,"dnpc_wire", false,-1, 31,0);
    tracep->declBus(c+14,"result_wire", false,-1, 31,0);
    tracep->declBus(c+15,"srca_wire", false,-1, 31,0);
    tracep->declBit(c+16,"pcsrc", false,-1);
    tracep->declBit(c+17,"alusrc", false,-1);
    tracep->declBit(c+18,"regwrite", false,-1);
    tracep->declBit(c+19,"zero", false,-1);
    tracep->declBit(c+20,"jalr", false,-1);
    tracep->declBit(c+21,"auipc", false,-1);
    tracep->declBus(c+22,"resultsrc", false,-1, 1,0);
    tracep->declBus(c+23,"immsrc", false,-1, 1,0);
    tracep->declBus(c+24,"memwrite", false,-1, 3,0);
    tracep->declBus(c+25,"alucontrol", false,-1, 3,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+26,"srca", false,-1, 31,0);
    tracep->declBus(c+27,"srcb", false,-1, 31,0);
    tracep->declBus(c+28,"alucontrol", false,-1, 3,0);
    tracep->declBus(c+29,"f3", false,-1, 2,0);
    tracep->declBit(c+30,"zero", false,-1);
    tracep->declBus(c+31,"aluresult", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMUX ");
    tracep->declBus(c+32,"rs2data", false,-1, 31,0);
    tracep->declBus(c+33,"immext", false,-1, 31,0);
    tracep->declBit(c+34,"alusrc", false,-1);
    tracep->declBus(c+35,"srcb", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DNPC ");
    tracep->declBus(c+36,"pc", false,-1, 31,0);
    tracep->declBus(c+37,"immext", false,-1, 31,0);
    tracep->declBus(c+38,"rs1data", false,-1, 31,0);
    tracep->declBit(c+39,"jalr", false,-1);
    tracep->declBus(c+40,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GRP ");
    tracep->declBit(c+41,"clk", false,-1);
    tracep->declBus(c+42,"rddata", false,-1, 31,0);
    tracep->declBus(c+43,"waddr", false,-1, 4,0);
    tracep->declBus(c+44,"r1addr", false,-1, 4,0);
    tracep->declBus(c+45,"r2addr", false,-1, 4,0);
    tracep->declBit(c+46,"wen", false,-1);
    tracep->declBus(c+47,"rs1data", false,-1, 31,0);
    tracep->declBus(c+48,"rs2data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+49+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+81,"op", false,-1, 6,0);
    tracep->declBus(c+82,"f3", false,-1, 2,0);
    tracep->declBit(c+83,"f7", false,-1);
    tracep->declBit(c+84,"zero", false,-1);
    tracep->declBit(c+85,"jalr", false,-1);
    tracep->declBit(c+86,"pcsrc", false,-1);
    tracep->declBus(c+87,"resultsrc", false,-1, 1,0);
    tracep->declBus(c+88,"memwrite", false,-1, 3,0);
    tracep->declBus(c+89,"alucontrol", false,-1, 3,0);
    tracep->declBit(c+90,"alusrc", false,-1);
    tracep->declBus(c+91,"immsrc", false,-1, 1,0);
    tracep->declBit(c+92,"regwrite", false,-1);
    tracep->declBit(c+93,"auipc", false,-1);
    tracep->declBit(c+94,"branch", false,-1);
    tracep->declBus(c+95,"aluop", false,-1, 1,0);
    tracep->declBit(c+96,"jump", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Imm ");
    tracep->declBus(c+97,"imm", false,-1, 31,7);
    tracep->declBit(c+98,"auipc", false,-1);
    tracep->declBus(c+99,"immsrc", false,-1, 1,0);
    tracep->declBus(c+100,"immext", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+101,"clk", false,-1);
    tracep->declBit(c+102,"rst", false,-1);
    tracep->declBus(c+103,"next_pc", false,-1, 31,0);
    tracep->declBus(c+104,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCMUX ");
    tracep->declBus(c+105,"snpc", false,-1, 31,0);
    tracep->declBus(c+106,"dnpc", false,-1, 31,0);
    tracep->declBit(c+107,"pcsrc", false,-1);
    tracep->declBus(c+108,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RESMUX ");
    tracep->declBus(c+109,"aluresult", false,-1, 31,0);
    tracep->declBus(c+110,"readdata", false,-1, 31,0);
    tracep->declBus(c+111,"snpc", false,-1, 31,0);
    tracep->declBus(c+112,"resultsrc", false,-1, 1,0);
    tracep->declBus(c+113,"result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SNPC ");
    tracep->declBus(c+114,"pc", false,-1, 31,0);
    tracep->declBus(c+115,"snpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRCA ");
    tracep->declBus(c+116,"rs1data", false,-1, 31,0);
    tracep->declBus(c+117,"pc", false,-1, 31,0);
    tracep->declBit(c+118,"auipc", false,-1);
    tracep->declBus(c+119,"srca", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_init_top(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060286_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060286_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060286_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_register(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060286_top___024root__trace_full_top_0, vlSelf, nullptr);
    tracep->addChgCb(&Vysyx_23060286_top___024root__trace_chg_top_0, vlSelf, nullptr);
    tracep->addCleanupCb(&Vysyx_23060286_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_full_sub_0(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060286_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060286_top___024root*>(voidSelf);
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060286_top___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_full_sub_0(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ysyx_23060286_top__DOT__clk));
    bufp->fullBit(oldp+2,(vlSelf->ysyx_23060286_top__DOT__rst));
    bufp->fullIData(oldp+3,(vlSelf->ysyx_23060286_top__DOT__inst_wire),32);
    bufp->fullIData(oldp+4,(vlSelf->ysyx_23060286_top__DOT__readdata_wire),32);
    bufp->fullIData(oldp+5,(vlSelf->ysyx_23060286_top__DOT__npc_wire),32);
    bufp->fullIData(oldp+6,(vlSelf->ysyx_23060286_top__DOT__pc_wire),32);
    bufp->fullIData(oldp+7,(vlSelf->ysyx_23060286_top__DOT__snpc_wire),32);
    bufp->fullIData(oldp+8,(vlSelf->ysyx_23060286_top__DOT__rs1data_wire),32);
    bufp->fullIData(oldp+9,(vlSelf->ysyx_23060286_top__DOT__rs2data_wire),32);
    bufp->fullIData(oldp+10,(vlSelf->ysyx_23060286_top__DOT__immext_wire),32);
    bufp->fullIData(oldp+11,(vlSelf->ysyx_23060286_top__DOT__srcb_wire),32);
    bufp->fullIData(oldp+12,(vlSelf->ysyx_23060286_top__DOT__aluresult_wire),32);
    bufp->fullIData(oldp+13,(vlSelf->ysyx_23060286_top__DOT__dnpc_wire),32);
    bufp->fullIData(oldp+14,(vlSelf->ysyx_23060286_top__DOT__result_wire),32);
    bufp->fullIData(oldp+15,(vlSelf->ysyx_23060286_top__DOT__srca_wire),32);
    bufp->fullBit(oldp+16,(vlSelf->ysyx_23060286_top__DOT__pcsrc));
    bufp->fullBit(oldp+17,(vlSelf->ysyx_23060286_top__DOT__alusrc));
    bufp->fullBit(oldp+18,(vlSelf->ysyx_23060286_top__DOT__regwrite));
    bufp->fullBit(oldp+19,(vlSelf->ysyx_23060286_top__DOT__zero));
    bufp->fullBit(oldp+20,(vlSelf->ysyx_23060286_top__DOT__jalr));
    bufp->fullBit(oldp+21,(vlSelf->ysyx_23060286_top__DOT__auipc));
    bufp->fullCData(oldp+22,(vlSelf->ysyx_23060286_top__DOT__resultsrc),2);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_23060286_top__DOT__immsrc),2);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_23060286_top__DOT__memwrite),4);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_23060286_top__DOT__alucontrol),4);
    bufp->fullIData(oldp+26,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__srca),32);
    bufp->fullIData(oldp+27,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__srcb),32);
    bufp->fullCData(oldp+28,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alucontrol),4);
    bufp->fullCData(oldp+29,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__f3),3);
    bufp->fullBit(oldp+30,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__zero));
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__aluresult),32);
    bufp->fullIData(oldp+32,(vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__rs2data),32);
    bufp->fullIData(oldp+33,(vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__immext),32);
    bufp->fullBit(oldp+34,(vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__alusrc));
    bufp->fullIData(oldp+35,(vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__srcb),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__pc),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__immext),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__rs1data),32);
    bufp->fullBit(oldp+39,(vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__jalr));
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__dnpc),32);
    bufp->fullBit(oldp+41,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__clk));
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rddata),32);
    bufp->fullCData(oldp+43,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__waddr),5);
    bufp->fullCData(oldp+44,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__r1addr),5);
    bufp->fullCData(oldp+45,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__r2addr),5);
    bufp->fullBit(oldp+46,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__wen));
    bufp->fullIData(oldp+47,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rs1data),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rs2data),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[0]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[1]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[2]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[3]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[4]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[5]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[6]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[7]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[8]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[9]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[10]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[11]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[12]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[13]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[14]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[15]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[16]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[17]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[18]),32);
    bufp->fullIData(oldp+68,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[19]),32);
    bufp->fullIData(oldp+69,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[20]),32);
    bufp->fullIData(oldp+70,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[21]),32);
    bufp->fullIData(oldp+71,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[22]),32);
    bufp->fullIData(oldp+72,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[23]),32);
    bufp->fullIData(oldp+73,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[24]),32);
    bufp->fullIData(oldp+74,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[25]),32);
    bufp->fullIData(oldp+75,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[26]),32);
    bufp->fullIData(oldp+76,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[27]),32);
    bufp->fullIData(oldp+77,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[28]),32);
    bufp->fullIData(oldp+78,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[29]),32);
    bufp->fullIData(oldp+79,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[30]),32);
    bufp->fullIData(oldp+80,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[31]),32);
    bufp->fullCData(oldp+81,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__op),7);
    bufp->fullCData(oldp+82,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__f3),3);
    bufp->fullBit(oldp+83,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__f7));
    bufp->fullBit(oldp+84,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__zero));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jalr));
    bufp->fullBit(oldp+86,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__pcsrc));
    bufp->fullCData(oldp+87,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc),2);
    bufp->fullCData(oldp+88,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite),4);
    bufp->fullCData(oldp+89,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alucontrol),4);
    bufp->fullBit(oldp+90,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc));
    bufp->fullCData(oldp+91,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc),2);
    bufp->fullBit(oldp+92,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc));
    bufp->fullBit(oldp+94,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch));
    bufp->fullCData(oldp+95,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop),2);
    bufp->fullBit(oldp+96,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump));
    bufp->fullIData(oldp+97,(vlSelf->ysyx_23060286_top__DOT__Imm__DOT__imm),25);
    bufp->fullBit(oldp+98,(vlSelf->ysyx_23060286_top__DOT__Imm__DOT__auipc));
    bufp->fullCData(oldp+99,(vlSelf->ysyx_23060286_top__DOT__Imm__DOT__immsrc),2);
    bufp->fullIData(oldp+100,(vlSelf->ysyx_23060286_top__DOT__Imm__DOT__immext),32);
    bufp->fullBit(oldp+101,(vlSelf->ysyx_23060286_top__DOT__PC__DOT__clk));
    bufp->fullBit(oldp+102,(vlSelf->ysyx_23060286_top__DOT__PC__DOT__rst));
    bufp->fullIData(oldp+103,(vlSelf->ysyx_23060286_top__DOT__PC__DOT__next_pc),32);
    bufp->fullIData(oldp+104,(vlSelf->ysyx_23060286_top__DOT__PC__DOT__pc),32);
    bufp->fullIData(oldp+105,(vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__snpc),32);
    bufp->fullIData(oldp+106,(vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__dnpc),32);
    bufp->fullBit(oldp+107,(vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__pcsrc));
    bufp->fullIData(oldp+108,(vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__next_pc),32);
    bufp->fullIData(oldp+109,(vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__aluresult),32);
    bufp->fullIData(oldp+110,(vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__readdata),32);
    bufp->fullIData(oldp+111,(vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__snpc),32);
    bufp->fullCData(oldp+112,(vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__resultsrc),2);
    bufp->fullIData(oldp+113,(vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__result),32);
    bufp->fullIData(oldp+114,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__pc),32);
    bufp->fullIData(oldp+115,(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc),32);
    bufp->fullIData(oldp+116,(vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__rs1data),32);
    bufp->fullIData(oldp+117,(vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__pc),32);
    bufp->fullBit(oldp+118,(vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__auipc));
    bufp->fullIData(oldp+119,(vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__srca),32);
}
