// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060286_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060286_top___024root.h"

VL_INLINE_OPT void Vysyx_23060286_top___024root___combo__TOP__0(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___combo__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__ysyx_23060286_top__readdata_wire, vlSelf->readdata_wire);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__ysyx_23060286_top__clk, vlSelf->clk);
    vlSelf->ysyx_23060286_top__DOT__readdata_wire = vlSelf->__Vcellinp__ysyx_23060286_top__readdata_wire;
    vlSelf->ysyx_23060286_top__DOT__clk = vlSelf->__Vcellinp__ysyx_23060286_top__clk;
    vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__readdata 
        = vlSelf->ysyx_23060286_top__DOT__readdata_wire;
    vlSelf->ysyx_23060286_top__DOT__PC__DOT__clk = vlSelf->ysyx_23060286_top__DOT__clk;
    vlSelf->ysyx_23060286_top__DOT__GRP__DOT__clk = vlSelf->ysyx_23060286_top__DOT__clk;
}

VL_INLINE_OPT void Vysyx_23060286_top___024root___sequent__TOP__0(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060286_top__DOT__GRP__DOT__rf__v0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060286_top__DOT__GRP__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060286_top__DOT__GRP__DOT__rf__v0;
    // Body
    __Vdlyvset__ysyx_23060286_top__DOT__GRP__DOT__rf__v0 = 0U;
    vlSelf->ysyx_23060286_top__DOT__PC__DOT__pc = ((IData)(vlSelf->__Vcellinp__ysyx_23060286_top__rst)
                                                    ? 0x80000000U
                                                    : vlSelf->ysyx_23060286_top__DOT__npc_wire);
    if (vlSelf->ysyx_23060286_top__DOT__regwrite) {
        __Vdlyvval__ysyx_23060286_top__DOT__GRP__DOT__rf__v0 
            = vlSelf->ysyx_23060286_top__DOT__result_wire;
        __Vdlyvset__ysyx_23060286_top__DOT__GRP__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_23060286_top__DOT__GRP__DOT__rf__v0 
            = (0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                        >> 7U));
    }
    if (__Vdlyvset__ysyx_23060286_top__DOT__GRP__DOT__rf__v0) {
        vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[__Vdlyvdim0__ysyx_23060286_top__DOT__GRP__DOT__rf__v0] 
            = __Vdlyvval__ysyx_23060286_top__DOT__GRP__DOT__rf__v0;
    }
    vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[0U] = 0U;
    vlSelf->ysyx_23060286_top__DOT__pc_wire = vlSelf->ysyx_23060286_top__DOT__PC__DOT__pc;
    VL_ASSIGN_SII(32,vlSelf->pc_wire, vlSelf->ysyx_23060286_top__DOT__pc_wire);
    vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__pc = vlSelf->ysyx_23060286_top__DOT__pc_wire;
    vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__pc = vlSelf->ysyx_23060286_top__DOT__pc_wire;
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__pc = vlSelf->ysyx_23060286_top__DOT__pc_wire;
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc 
        = ((IData)(4U) + vlSelf->ysyx_23060286_top__DOT__pc_wire);
    vlSelf->ysyx_23060286_top__DOT__snpc_wire = vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc;
    VL_ASSIGN_SII(32,vlSelf->snpc_wire, vlSelf->ysyx_23060286_top__DOT__snpc_wire);
    vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__snpc 
        = vlSelf->ysyx_23060286_top__DOT__snpc_wire;
    vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__snpc 
        = vlSelf->ysyx_23060286_top__DOT__snpc_wire;
}

void Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
void Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_trap_TOP();

VL_INLINE_OPT void Vysyx_23060286_top___024root___combo__TOP__1(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___combo__TOP__1\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__ysyx_23060286_top__rst, vlSelf->rst);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire, vlSelf->inst_wire);
    vlSelf->ysyx_23060286_top__DOT__rst = vlSelf->__Vcellinp__ysyx_23060286_top__rst;
    vlSelf->ysyx_23060286_top__DOT__inst_wire = vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire;
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__f3 = 
        (7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
               >> 0xcU));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__op = 
        (0x7fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                  >> 0U));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__f3 = 
        (7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
               >> 0xcU));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__f7 = 
        (1U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
               >> 0x1eU));
    vlSelf->ysyx_23060286_top__DOT__Imm__DOT__imm = 
        (0x1ffffffU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                       >> 7U));
    vlSelf->ysyx_23060286_top__DOT__GRP__DOT__waddr 
        = (0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                    >> 7U));
    vlSelf->ysyx_23060286_top__DOT__GRP__DOT__r1addr 
        = (0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                    >> 0xfU));
    vlSelf->ysyx_23060286_top__DOT__GRP__DOT__r2addr 
        = (0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                    >> 0x14U));
    vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rs2data 
        = vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf
        [(0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                   >> 0x14U))];
    vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rs1data 
        = vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf
        [(0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                   >> 0xfU))];
    if ((0x40U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        if ((0x20U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            if ((0x10U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((8U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                } else if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                } else if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_trap_TOP();
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                            = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                    } else {
                        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                            = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                    }
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                }
            } else if ((8U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                        if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 3U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                                = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 0U;
                        } else {
                            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                                = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                        }
                    } else {
                        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                            = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                    }
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                }
            } else if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                            = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 0U;
                    } else {
                        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                            = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                    }
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                }
            } else if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 0U;
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                }
            } else {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
            }
        } else {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
        }
    } else if ((0x20U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        if ((0x10U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            if ((8U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
            } else if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                            = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 3U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                    } else {
                        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                            = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                    }
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                }
            } else if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 0U;
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                }
            } else {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
            }
        } else if ((8U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
        } else if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
        } else if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (1U | (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 0U;
            } else {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
            }
        } else {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
        }
    } else if ((0x10U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        if ((8U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
        } else if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 3U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                        = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
                }
            } else {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
            }
        } else if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 0U;
            } else {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
            }
        } else {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
        }
    } else if ((8U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
            = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
    } else if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
            = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
    } else if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 0U;
        } else {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
        }
    } else {
        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite = 1U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc = 1U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
            = (0xeU & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc = 2U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc = 1U;
    }
    vlSelf->ysyx_23060286_top__DOT__PC__DOT__rst = vlSelf->ysyx_23060286_top__DOT__rst;
    vlSelf->ysyx_23060286_top__DOT__rs2data_wire = vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rs2data;
    vlSelf->ysyx_23060286_top__DOT__rs1data_wire = vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rs1data;
    vlSelf->ysyx_23060286_top__DOT__regwrite = vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite;
    vlSelf->ysyx_23060286_top__DOT__resultsrc = vlSelf->ysyx_23060286_top__DOT__IDU__DOT__resultsrc;
    if ((1U & (~ ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop)))) {
            if ((2U == (7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                              >> 0xcU)))) {
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (1U & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite));
            } else if ((4U == (7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                     >> 0xcU)))) {
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (2U | (1U & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite)));
            } else if ((1U == (7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                     >> 0xcU)))) {
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (4U | (1U & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite)));
            } else if ((5U == (7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                     >> 0xcU)))) {
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (6U | (1U & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite)));
            } else if ((0U == (7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                     >> 0xcU)))) {
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite 
                    = (6U | (1U & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite)));
            }
        }
    }
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alucontrol 
        = ((2U & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop))
            ? ((1U & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop))
                ? ((0x20U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)
                    ? 9U : 0U) : ((0x4000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)
                                   ? ((0x2000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)
                                       ? ((0x1000U 
                                           & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)
                                           ? 2U : 3U)
                                       : ((0x1000U 
                                           & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)
                                           ? ((0x40000000U 
                                               & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)
                                               ? 4U
                                               : 6U)
                                           : 8U)) : 
                                  ((0x2000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)
                                    ? 5U : ((0x1000U 
                                             & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)
                                             ? 7U : 
                                            ((3U == 
                                              ((2U 
                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                   >> 4U)) 
                                               | (1U 
                                                  & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                     >> 0x1eU))))
                                              ? 1U : 0U)))))
            : ((1U & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop))
                ? 1U : 0U));
    vlSelf->ysyx_23060286_top__DOT__alusrc = vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alusrc;
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jalr 
        = ((0U == (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc)) 
           & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump));
    vlSelf->ysyx_23060286_top__DOT__immsrc = vlSelf->ysyx_23060286_top__DOT__IDU__DOT__immsrc;
    vlSelf->ysyx_23060286_top__DOT__auipc = vlSelf->ysyx_23060286_top__DOT__IDU__DOT__auipc;
    VL_ASSIGN_SII(32,vlSelf->rs2data_wire, vlSelf->ysyx_23060286_top__DOT__rs2data_wire);
    vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__rs2data 
        = vlSelf->ysyx_23060286_top__DOT__rs2data_wire;
    VL_ASSIGN_SII(32,vlSelf->rs1data_wire, vlSelf->ysyx_23060286_top__DOT__rs1data_wire);
    vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__rs1data 
        = vlSelf->ysyx_23060286_top__DOT__rs1data_wire;
    vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__rs1data 
        = vlSelf->ysyx_23060286_top__DOT__rs1data_wire;
    VL_ASSIGN_SII(1,vlSelf->regwrite, vlSelf->ysyx_23060286_top__DOT__regwrite);
    vlSelf->ysyx_23060286_top__DOT__GRP__DOT__wen = vlSelf->ysyx_23060286_top__DOT__regwrite;
    VL_ASSIGN_SII(2,vlSelf->resultsrc, vlSelf->ysyx_23060286_top__DOT__resultsrc);
    vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__resultsrc 
        = vlSelf->ysyx_23060286_top__DOT__resultsrc;
    vlSelf->ysyx_23060286_top__DOT__memwrite = vlSelf->ysyx_23060286_top__DOT__IDU__DOT__memwrite;
    vlSelf->ysyx_23060286_top__DOT__alucontrol = vlSelf->ysyx_23060286_top__DOT__IDU__DOT__alucontrol;
    VL_ASSIGN_SII(1,vlSelf->alusrc, vlSelf->ysyx_23060286_top__DOT__alusrc);
    vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__alusrc 
        = vlSelf->ysyx_23060286_top__DOT__alusrc;
    vlSelf->ysyx_23060286_top__DOT__jalr = vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jalr;
    VL_ASSIGN_SII(2,vlSelf->immsrc, vlSelf->ysyx_23060286_top__DOT__immsrc);
    vlSelf->ysyx_23060286_top__DOT__Imm__DOT__immsrc 
        = vlSelf->ysyx_23060286_top__DOT__immsrc;
    if (vlSelf->ysyx_23060286_top__DOT__auipc) {
        VL_ASSIGN_SII(1,vlSelf->auipc, 1U);
        vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__auipc = 1U;
        vlSelf->ysyx_23060286_top__DOT__Imm__DOT__auipc = 1U;
        vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__srca 
            = vlSelf->ysyx_23060286_top__DOT__pc_wire;
    } else {
        VL_ASSIGN_SII(1,vlSelf->auipc, 0U);
        vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__auipc = 0U;
        vlSelf->ysyx_23060286_top__DOT__Imm__DOT__auipc = 0U;
        vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__srca 
            = vlSelf->ysyx_23060286_top__DOT__rs1data_wire;
    }
    vlSelf->ysyx_23060286_top__DOT__Imm__DOT__immext 
        = ((2U & (IData)(vlSelf->ysyx_23060286_top__DOT__immsrc))
            ? ((1U & (IData)(vlSelf->ysyx_23060286_top__DOT__immsrc))
                ? ((IData)(vlSelf->ysyx_23060286_top__DOT__auipc)
                    ? 0xffffffffU : (((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                  >> 0x1fU))) 
                                      << 0x14U) | (
                                                   (0xff000U 
                                                    & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire) 
                                                   | ((0x800U 
                                                       & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                            >> 0x14U))))))
                : ((IData)(vlSelf->ysyx_23060286_top__DOT__auipc)
                    ? 0xffffffffU : (((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                  >> 0x1fU))) 
                                      << 0xdU) | ((0x1000U 
                                                   & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                      >> 0x13U)) 
                                                  | ((0x800U 
                                                      & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                         << 4U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                            >> 0x14U)) 
                                                        | (0x1eU 
                                                           & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                              >> 7U))))))))
            : ((1U & (IData)(vlSelf->ysyx_23060286_top__DOT__immsrc))
                ? ((IData)(vlSelf->ysyx_23060286_top__DOT__auipc)
                    ? 0xffffffffU : (((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                        >> 7U)))))
                : ((IData)(vlSelf->ysyx_23060286_top__DOT__auipc)
                    ? (0xfffff000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)
                    : (((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                          >> 0x14U)))));
    VL_ASSIGN_SII(4,vlSelf->memwrite, vlSelf->ysyx_23060286_top__DOT__memwrite);
    VL_ASSIGN_SII(4,vlSelf->alucontrol, vlSelf->ysyx_23060286_top__DOT__alucontrol);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alucontrol 
        = vlSelf->ysyx_23060286_top__DOT__alucontrol;
    if (vlSelf->ysyx_23060286_top__DOT__jalr) {
        VL_ASSIGN_SII(1,vlSelf->jalr, 1U);
        vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__jalr = 1U;
        vlSelf->ysyx_23060286_top__DOT__srca_wire = vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__srca;
        vlSelf->ysyx_23060286_top__DOT__immext_wire 
            = vlSelf->ysyx_23060286_top__DOT__Imm__DOT__immext;
        VL_ASSIGN_SII(32,vlSelf->srca_wire, vlSelf->ysyx_23060286_top__DOT__srca_wire);
        vlSelf->ysyx_23060286_top__DOT__ALU__DOT__srca 
            = vlSelf->ysyx_23060286_top__DOT__srca_wire;
        VL_ASSIGN_SII(32,vlSelf->immext_wire, vlSelf->ysyx_23060286_top__DOT__immext_wire);
        vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__immext 
            = vlSelf->ysyx_23060286_top__DOT__immext_wire;
        vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__immext 
            = vlSelf->ysyx_23060286_top__DOT__immext_wire;
        vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__dnpc 
            = (vlSelf->ysyx_23060286_top__DOT__rs1data_wire 
               + vlSelf->ysyx_23060286_top__DOT__immext_wire);
    } else {
        VL_ASSIGN_SII(1,vlSelf->jalr, 0U);
        vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__jalr = 0U;
        vlSelf->ysyx_23060286_top__DOT__srca_wire = vlSelf->ysyx_23060286_top__DOT__SRCA__DOT__srca;
        vlSelf->ysyx_23060286_top__DOT__immext_wire 
            = vlSelf->ysyx_23060286_top__DOT__Imm__DOT__immext;
        VL_ASSIGN_SII(32,vlSelf->srca_wire, vlSelf->ysyx_23060286_top__DOT__srca_wire);
        vlSelf->ysyx_23060286_top__DOT__ALU__DOT__srca 
            = vlSelf->ysyx_23060286_top__DOT__srca_wire;
        VL_ASSIGN_SII(32,vlSelf->immext_wire, vlSelf->ysyx_23060286_top__DOT__immext_wire);
        vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__immext 
            = vlSelf->ysyx_23060286_top__DOT__immext_wire;
        vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__immext 
            = vlSelf->ysyx_23060286_top__DOT__immext_wire;
        vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__dnpc 
            = (vlSelf->ysyx_23060286_top__DOT__pc_wire 
               + vlSelf->ysyx_23060286_top__DOT__immext_wire);
    }
    vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__srcb 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__alusrc)
            ? vlSelf->ysyx_23060286_top__DOT__immext_wire
            : vlSelf->ysyx_23060286_top__DOT__rs2data_wire);
    vlSelf->ysyx_23060286_top__DOT__dnpc_wire = vlSelf->ysyx_23060286_top__DOT__DNPC__DOT__dnpc;
    vlSelf->ysyx_23060286_top__DOT__srcb_wire = vlSelf->ysyx_23060286_top__DOT__ALUMUX__DOT__srcb;
    VL_ASSIGN_SII(32,vlSelf->dnpc_wire, vlSelf->ysyx_23060286_top__DOT__dnpc_wire);
    vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__dnpc 
        = vlSelf->ysyx_23060286_top__DOT__dnpc_wire;
    VL_ASSIGN_SII(32,vlSelf->srcb_wire, vlSelf->ysyx_23060286_top__DOT__srcb_wire);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__srcb 
        = vlSelf->ysyx_23060286_top__DOT__srcb_wire;
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__aluresult 
        = ((8U & (IData)(vlSelf->ysyx_23060286_top__DOT__alucontrol))
            ? ((4U & (IData)(vlSelf->ysyx_23060286_top__DOT__alucontrol))
                ? 0xffffffffU : ((2U & (IData)(vlSelf->ysyx_23060286_top__DOT__alucontrol))
                                  ? 0xffffffffU : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_23060286_top__DOT__alucontrol))
                                                    ? vlSelf->ysyx_23060286_top__DOT__srcb_wire
                                                    : 
                                                   (vlSelf->ysyx_23060286_top__DOT__srca_wire 
                                                    ^ vlSelf->ysyx_23060286_top__DOT__srcb_wire))))
            : ((4U & (IData)(vlSelf->ysyx_23060286_top__DOT__alucontrol))
                ? ((2U & (IData)(vlSelf->ysyx_23060286_top__DOT__alucontrol))
                    ? ((1U & (IData)(vlSelf->ysyx_23060286_top__DOT__alucontrol))
                        ? (vlSelf->ysyx_23060286_top__DOT__srca_wire 
                           << (0x1fU & vlSelf->ysyx_23060286_top__DOT__srcb_wire))
                        : (vlSelf->ysyx_23060286_top__DOT__srca_wire 
                           >> (0x1fU & vlSelf->ysyx_23060286_top__DOT__srcb_wire)))
                    : ((1U & (IData)(vlSelf->ysyx_23060286_top__DOT__alucontrol))
                        ? (VL_LTS_III(32, vlSelf->ysyx_23060286_top__DOT__srca_wire, vlSelf->ysyx_23060286_top__DOT__srcb_wire)
                            ? 1U : 0U) : VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_23060286_top__DOT__srca_wire, 
                                                        (0x1fU 
                                                         & vlSelf->ysyx_23060286_top__DOT__srcb_wire))))
                : ((2U & (IData)(vlSelf->ysyx_23060286_top__DOT__alucontrol))
                    ? ((1U & (IData)(vlSelf->ysyx_23060286_top__DOT__alucontrol))
                        ? (vlSelf->ysyx_23060286_top__DOT__srca_wire 
                           | vlSelf->ysyx_23060286_top__DOT__srcb_wire)
                        : (vlSelf->ysyx_23060286_top__DOT__srca_wire 
                           & vlSelf->ysyx_23060286_top__DOT__srcb_wire))
                    : ((1U & (IData)(vlSelf->ysyx_23060286_top__DOT__alucontrol))
                        ? (vlSelf->ysyx_23060286_top__DOT__srca_wire 
                           - vlSelf->ysyx_23060286_top__DOT__srcb_wire)
                        : (vlSelf->ysyx_23060286_top__DOT__srca_wire 
                           + vlSelf->ysyx_23060286_top__DOT__srcb_wire)))));
    vlSelf->ysyx_23060286_top__DOT__aluresult_wire 
        = vlSelf->ysyx_23060286_top__DOT__ALU__DOT__aluresult;
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__zero 
        = ((((((IData)(((0U == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__aluresult) 
                        & (0U == (0x7000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)))) 
               | (IData)(((0x1000U == (0x7000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) 
                          & (0U != vlSelf->ysyx_23060286_top__DOT__ALU__DOT__aluresult)))) 
              | (IData)(((0x5000U == (0x7000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) 
                         & VL_GTES_III(32, vlSelf->ysyx_23060286_top__DOT__srca_wire, vlSelf->ysyx_23060286_top__DOT__srcb_wire)))) 
             | (IData)(((0x6000U == (0x7000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) 
                        & (vlSelf->ysyx_23060286_top__DOT__srca_wire 
                           < vlSelf->ysyx_23060286_top__DOT__srcb_wire)))) 
            | (IData)(((0x4000U == (0x7000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) 
                       & VL_LTS_III(32, vlSelf->ysyx_23060286_top__DOT__srca_wire, vlSelf->ysyx_23060286_top__DOT__srcb_wire)))) 
           | (IData)(((0x7000U == (0x7000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) 
                      & (vlSelf->ysyx_23060286_top__DOT__srca_wire 
                         >= vlSelf->ysyx_23060286_top__DOT__srcb_wire))));
    VL_ASSIGN_SII(32,vlSelf->aluresult_wire, vlSelf->ysyx_23060286_top__DOT__aluresult_wire);
    vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__aluresult 
        = vlSelf->ysyx_23060286_top__DOT__aluresult_wire;
    vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__result 
        = ((2U & (IData)(vlSelf->ysyx_23060286_top__DOT__resultsrc))
            ? vlSelf->ysyx_23060286_top__DOT__snpc_wire
            : ((1U & (IData)(vlSelf->ysyx_23060286_top__DOT__resultsrc))
                ? vlSelf->__Vcellinp__ysyx_23060286_top__readdata_wire
                : vlSelf->ysyx_23060286_top__DOT__aluresult_wire));
    vlSelf->ysyx_23060286_top__DOT__zero = vlSelf->ysyx_23060286_top__DOT__ALU__DOT__zero;
    vlSelf->ysyx_23060286_top__DOT__result_wire = vlSelf->ysyx_23060286_top__DOT__RESMUX__DOT__result;
    VL_ASSIGN_SII(1,vlSelf->zero, vlSelf->ysyx_23060286_top__DOT__zero);
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__zero 
        = vlSelf->ysyx_23060286_top__DOT__zero;
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__pcsrc 
        = (((IData)(vlSelf->ysyx_23060286_top__DOT__zero) 
            & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch)) 
           | (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump));
    VL_ASSIGN_SII(32,vlSelf->result_wire, vlSelf->ysyx_23060286_top__DOT__result_wire);
    vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rddata 
        = vlSelf->ysyx_23060286_top__DOT__result_wire;
    vlSelf->ysyx_23060286_top__DOT__pcsrc = vlSelf->ysyx_23060286_top__DOT__IDU__DOT__pcsrc;
    if (vlSelf->ysyx_23060286_top__DOT__pcsrc) {
        VL_ASSIGN_SII(1,vlSelf->pcsrc, 1U);
        vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__pcsrc = 1U;
        vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__next_pc 
            = vlSelf->ysyx_23060286_top__DOT__dnpc_wire;
    } else {
        VL_ASSIGN_SII(1,vlSelf->pcsrc, 0U);
        vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__pcsrc = 0U;
        vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__next_pc 
            = vlSelf->ysyx_23060286_top__DOT__snpc_wire;
    }
    vlSelf->ysyx_23060286_top__DOT__npc_wire = vlSelf->ysyx_23060286_top__DOT__PCMUX__DOT__next_pc;
    VL_ASSIGN_SII(32,vlSelf->npc_wire, vlSelf->ysyx_23060286_top__DOT__npc_wire);
    vlSelf->ysyx_23060286_top__DOT__PC__DOT__next_pc 
        = vlSelf->ysyx_23060286_top__DOT__npc_wire;
}

void Vysyx_23060286_top___024root___eval(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___eval\n"); );
    // Body
    Vysyx_23060286_top___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->__Vcellinp__ysyx_23060286_top__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__ysyx_23060286_top__clk)))) {
        Vysyx_23060286_top___024root___sequent__TOP__0(vlSelf);
    }
    Vysyx_23060286_top___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP____Vcellinp__ysyx_23060286_top__clk 
        = vlSelf->__Vcellinp__ysyx_23060286_top__clk;
}

#ifdef VL_DEBUG
void Vysyx_23060286_top___024root___eval_debug_assertions(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
