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
    tracep->declBus(c+34,"pc_wire", false,-1, 31,0);
    tracep->declBus(c+35,"snpc_wire", false,-1, 31,0);
    tracep->declBus(c+6,"rs1data_wire", false,-1, 31,0);
    tracep->declBus(c+7,"rs2data_wire", false,-1, 31,0);
    tracep->declBus(c+8,"immext_wire", false,-1, 31,0);
    tracep->declBus(c+9,"srcb_wire", false,-1, 31,0);
    tracep->declBus(c+10,"aluresult_wire", false,-1, 31,0);
    tracep->declBus(c+11,"dnpc_wire", false,-1, 31,0);
    tracep->declBus(c+12,"result_wire", false,-1, 31,0);
    tracep->declBus(c+13,"srca_wire", false,-1, 31,0);
    tracep->declBit(c+14,"pcsrc", false,-1);
    tracep->declBit(c+15,"memwrite", false,-1);
    tracep->declBit(c+16,"alusrc", false,-1);
    tracep->declBit(c+17,"regwrite", false,-1);
    tracep->declBit(c+18,"zero", false,-1);
    tracep->declBit(c+19,"jalr", false,-1);
    tracep->declBit(c+20,"auipc", false,-1);
    tracep->declBus(c+21,"resultsrc", false,-1, 1,0);
    tracep->declBus(c+22,"immsrc", false,-1, 1,0);
    tracep->declBus(c+23,"alucontrol", false,-1, 2,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+13,"srca", false,-1, 31,0);
    tracep->declBus(c+9,"srcb", false,-1, 31,0);
    tracep->declBus(c+23,"alucontrol", false,-1, 2,0);
    tracep->declBit(c+18,"zero", false,-1);
    tracep->declBus(c+10,"aluresult", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ALUMUX ");
    tracep->declBus(c+7,"rs2data", false,-1, 31,0);
    tracep->declBus(c+8,"immext", false,-1, 31,0);
    tracep->declBit(c+16,"alusrc", false,-1);
    tracep->declBus(c+9,"srcb", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("DNPC ");
    tracep->declBus(c+34,"pc", false,-1, 31,0);
    tracep->declBus(c+8,"immext", false,-1, 31,0);
    tracep->declBus(c+6,"rs1data", false,-1, 31,0);
    tracep->declBit(c+19,"jalr", false,-1);
    tracep->declBus(c+11,"dnpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GRP ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBus(c+12,"rddata", false,-1, 31,0);
    tracep->declBus(c+24,"waddr", false,-1, 4,0);
    tracep->declBus(c+25,"r1addr", false,-1, 4,0);
    tracep->declBus(c+26,"r2addr", false,-1, 4,0);
    tracep->declBit(c+17,"wen", false,-1);
    tracep->declBus(c+6,"rs1data", false,-1, 31,0);
    tracep->declBus(c+7,"rs2data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+36+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+27,"op", false,-1, 6,0);
    tracep->declBus(c+28,"f3", false,-1, 2,0);
    tracep->declBit(c+29,"f7", false,-1);
    tracep->declBit(c+18,"zero", false,-1);
    tracep->declBit(c+19,"jalr", false,-1);
    tracep->declBit(c+14,"pcsrc", false,-1);
    tracep->declBus(c+21,"resultsrc", false,-1, 1,0);
    tracep->declBit(c+15,"memwrite", false,-1);
    tracep->declBus(c+23,"alucontrol", false,-1, 2,0);
    tracep->declBit(c+16,"alusrc", false,-1);
    tracep->declBus(c+22,"immsrc", false,-1, 1,0);
    tracep->declBit(c+17,"regwrite", false,-1);
    tracep->declBit(c+20,"auipc", false,-1);
    tracep->declBit(c+30,"branch", false,-1);
    tracep->declBus(c+31,"aluop", false,-1, 1,0);
    tracep->declBit(c+32,"jump", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Imm ");
    tracep->declBus(c+33,"imm", false,-1, 31,7);
    tracep->declBit(c+20,"auipc", false,-1);
    tracep->declBus(c+22,"immsrc", false,-1, 1,0);
    tracep->declBus(c+8,"immext", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBus(c+5,"next_pc", false,-1, 31,0);
    tracep->declBus(c+34,"pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PCMUX ");
    tracep->declBus(c+35,"snpc", false,-1, 31,0);
    tracep->declBus(c+11,"dnpc", false,-1, 31,0);
    tracep->declBit(c+14,"pcsrc", false,-1);
    tracep->declBus(c+5,"next_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("RESMUX ");
    tracep->declBus(c+10,"aluresult", false,-1, 31,0);
    tracep->declBus(c+4,"readdata", false,-1, 31,0);
    tracep->declBus(c+35,"snpc", false,-1, 31,0);
    tracep->declBus(c+21,"resultsrc", false,-1, 1,0);
    tracep->declBus(c+12,"result", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SNPC ");
    tracep->declBus(c+34,"pc", false,-1, 31,0);
    tracep->declBus(c+35,"snpc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRCA ");
    tracep->declBus(c+6,"rs1data", false,-1, 31,0);
    tracep->declBus(c+34,"pc", false,-1, 31,0);
    tracep->declBit(c+20,"auipc", false,-1);
    tracep->declBus(c+13,"srca", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->__Vcellinp__ysyx_23060286_top__clk));
    bufp->fullBit(oldp+2,(vlSelf->__Vcellinp__ysyx_23060286_top__rst));
    bufp->fullIData(oldp+3,(vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire),32);
    bufp->fullIData(oldp+4,(vlSelf->__Vcellinp__ysyx_23060286_top__readdata_wire),32);
    bufp->fullIData(oldp+5,(vlSelf->__Vcellout__ysyx_23060286_top__npc_wire),32);
    bufp->fullIData(oldp+6,(vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire),32);
    bufp->fullIData(oldp+7,(vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire),32);
    bufp->fullIData(oldp+8,(vlSelf->__Vcellout__ysyx_23060286_top__immext_wire),32);
    bufp->fullIData(oldp+9,(vlSelf->__Vcellout__ysyx_23060286_top__srcb_wire),32);
    bufp->fullIData(oldp+10,(vlSelf->__Vcellout__ysyx_23060286_top__aluresult_wire),32);
    bufp->fullIData(oldp+11,(vlSelf->__Vcellout__ysyx_23060286_top__dnpc_wire),32);
    bufp->fullIData(oldp+12,(vlSelf->__Vcellout__ysyx_23060286_top__result_wire),32);
    bufp->fullIData(oldp+13,(vlSelf->__Vcellout__ysyx_23060286_top__srca_wire),32);
    bufp->fullBit(oldp+14,(vlSelf->__Vcellout__ysyx_23060286_top__pcsrc));
    bufp->fullBit(oldp+15,(vlSelf->__Vcellout__ysyx_23060286_top__memwrite));
    bufp->fullBit(oldp+16,(vlSelf->__Vcellout__ysyx_23060286_top__alusrc));
    bufp->fullBit(oldp+17,(vlSelf->__Vcellout__ysyx_23060286_top__regwrite));
    bufp->fullBit(oldp+18,((0U == vlSelf->__Vcellout__ysyx_23060286_top__aluresult_wire)));
    bufp->fullBit(oldp+19,(vlSelf->__Vcellout__ysyx_23060286_top__jalr));
    bufp->fullBit(oldp+20,(vlSelf->__Vcellout__ysyx_23060286_top__auipc));
    bufp->fullCData(oldp+21,(vlSelf->__Vcellout__ysyx_23060286_top__resultsrc),2);
    bufp->fullCData(oldp+22,(vlSelf->__Vcellout__ysyx_23060286_top__immsrc),2);
    bufp->fullCData(oldp+23,(vlSelf->__Vcellout__ysyx_23060286_top__alucontrol),3);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                       >> 7U))),5);
    bufp->fullCData(oldp+25,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+26,((0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+27,((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)),7);
    bufp->fullCData(oldp+28,((7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                    >> 0xcU))),3);
    bufp->fullBit(oldp+29,((1U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+30,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch));
    bufp->fullCData(oldp+31,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop),2);
    bufp->fullBit(oldp+32,(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump));
    bufp->fullIData(oldp+33,((vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                              >> 7U)),25);
    bufp->fullIData(oldp+34,(vlSelf->__Vcellout__ysyx_23060286_top__pc_wire),32);
    bufp->fullIData(oldp+35,(((IData)(4U) + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire)),32);
    bufp->fullIData(oldp+36,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[0]),32);
    bufp->fullIData(oldp+37,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[1]),32);
    bufp->fullIData(oldp+38,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[2]),32);
    bufp->fullIData(oldp+39,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[3]),32);
    bufp->fullIData(oldp+40,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[4]),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[5]),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[6]),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[7]),32);
    bufp->fullIData(oldp+44,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[8]),32);
    bufp->fullIData(oldp+45,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[9]),32);
    bufp->fullIData(oldp+46,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[10]),32);
    bufp->fullIData(oldp+47,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[11]),32);
    bufp->fullIData(oldp+48,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[12]),32);
    bufp->fullIData(oldp+49,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[13]),32);
    bufp->fullIData(oldp+50,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[14]),32);
    bufp->fullIData(oldp+51,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[15]),32);
    bufp->fullIData(oldp+52,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[16]),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[17]),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[18]),32);
    bufp->fullIData(oldp+55,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[19]),32);
    bufp->fullIData(oldp+56,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[20]),32);
    bufp->fullIData(oldp+57,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[21]),32);
    bufp->fullIData(oldp+58,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[22]),32);
    bufp->fullIData(oldp+59,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[23]),32);
    bufp->fullIData(oldp+60,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[24]),32);
    bufp->fullIData(oldp+61,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[25]),32);
    bufp->fullIData(oldp+62,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[26]),32);
    bufp->fullIData(oldp+63,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[27]),32);
    bufp->fullIData(oldp+64,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[28]),32);
    bufp->fullIData(oldp+65,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[29]),32);
    bufp->fullIData(oldp+66,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[30]),32);
    bufp->fullIData(oldp+67,(vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[31]),32);
}
