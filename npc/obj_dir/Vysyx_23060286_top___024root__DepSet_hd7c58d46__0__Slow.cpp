// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060286_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060286_top___024root.h"

void Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_trap_TOP();
void Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();

VL_ATTR_COLD void Vysyx_23060286_top___024root___settle__TOP__0(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___settle__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__ysyx_23060286_top__readdata_wire, vlSelf->readdata_wire);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__ysyx_23060286_top__clk, vlSelf->clk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__ysyx_23060286_top__rst, vlSelf->rst);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire, vlSelf->inst_wire);
    VL_ASSIGN_SII(32,vlSelf->snpc_wire, ((IData)(4U) 
                                         + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire));
    VL_ASSIGN_SII(32,vlSelf->pc_wire, vlSelf->__Vcellout__ysyx_23060286_top__pc_wire);
    if ((0x73U == (0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire))) {
        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire 
        = vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf
        [(0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                   >> 0x14U))];
    vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
        = vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf
        [(0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                   >> 0xfU))];
    if ((0x40U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        if ((0x20U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            if ((0x10U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
            } else if ((8U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                        if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                            vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                            vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 3U;
                            vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                            vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                            vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                            vlSelf->__Vcellout__ysyx_23060286_top__auipc = 0U;
                        } else {
                            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                            vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                            vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                            vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                            vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                            vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                            vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
                        }
                    } else {
                        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                        vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                        vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                        vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                        vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                        vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                        vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
                    }
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
                }
            } else if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                        vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                        vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                        vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                        vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                        vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                        vlSelf->__Vcellout__ysyx_23060286_top__auipc = 0U;
                    } else {
                        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                        vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                        vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                        vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                        vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                        vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                        vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
                    }
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
                }
            } else if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 2U;
                    vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 1U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__auipc = 0U;
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
                }
            } else {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
            }
        } else {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
        }
    } else if ((0x20U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        if ((0x10U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            if ((8U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
            } else if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
            } else if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__auipc = 0U;
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
                }
            } else {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
            }
        } else if ((8U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
        } else if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
        } else if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 1U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__auipc = 0U;
            } else {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
            }
        } else {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
        }
    } else if ((0x10U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        if ((8U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
        } else if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                    vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 3U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
                } else {
                    Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                    vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                    vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                    vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
                }
            } else {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
            }
        } else if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
                vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__auipc = 0U;
            } else {
                Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
                vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
                vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
                vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
                vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
            }
        } else {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
        }
    } else if ((8U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
        vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
        vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
        vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
        vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
        vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
        vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
    } else if ((4U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
        vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
        vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
        vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
        vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
        vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
        vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
    } else if ((2U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
        if ((1U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)) {
            vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 1U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__auipc = 0U;
        } else {
            Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
            vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
            vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
            vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
            vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
        }
    } else {
        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_error_TOP();
        vlSelf->__Vcellout__ysyx_23060286_top__regwrite = 1U;
        vlSelf->__Vcellout__ysyx_23060286_top__immsrc = 0U;
        vlSelf->__Vcellout__ysyx_23060286_top__alusrc = 1U;
        vlSelf->__Vcellout__ysyx_23060286_top__memwrite = 0U;
        vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = 2U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = 0U;
        vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = 1U;
        vlSelf->__Vcellout__ysyx_23060286_top__auipc = 1U;
    }
    VL_ASSIGN_SII(32,vlSelf->rs2data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire);
    VL_ASSIGN_SII(32,vlSelf->rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire);
    VL_ASSIGN_SII(1,vlSelf->regwrite, vlSelf->__Vcellout__ysyx_23060286_top__regwrite);
    VL_ASSIGN_SII(1,vlSelf->memwrite, vlSelf->__Vcellout__ysyx_23060286_top__memwrite);
    VL_ASSIGN_SII(2,vlSelf->resultsrc, vlSelf->__Vcellout__ysyx_23060286_top__resultsrc);
    if ((2U & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop))) {
        if ((1U & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop))) {
            vlSelf->__Vcellout__ysyx_23060286_top__alucontrol = 4U;
        } else if ((7U == (7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                 >> 0xcU)))) {
            vlSelf->__Vcellout__ysyx_23060286_top__alucontrol = 2U;
        } else if ((6U == (7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                 >> 0xcU)))) {
            vlSelf->__Vcellout__ysyx_23060286_top__alucontrol = 3U;
        } else if ((2U == (7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                 >> 0xcU)))) {
            vlSelf->__Vcellout__ysyx_23060286_top__alucontrol = 5U;
        } else if ((0U == (7U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                 >> 0xcU)))) {
            vlSelf->__Vcellout__ysyx_23060286_top__alucontrol 
                = ((3U == ((2U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                  >> 4U)) | (1U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                   >> 0x1eU))))
                    ? 1U : 0U);
        }
    } else {
        vlSelf->__Vcellout__ysyx_23060286_top__alucontrol 
            = ((1U & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop))
                ? 1U : 0U);
    }
    VL_ASSIGN_SII(1,vlSelf->alusrc, vlSelf->__Vcellout__ysyx_23060286_top__alusrc);
    VL_ASSIGN_SII(2,vlSelf->immsrc, vlSelf->__Vcellout__ysyx_23060286_top__immsrc);
    vlSelf->__Vcellout__ysyx_23060286_top__jalr = (
                                                   (0U 
                                                    == (IData)(vlSelf->__Vcellout__ysyx_23060286_top__immsrc)) 
                                                   & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump));
    if (vlSelf->__Vcellout__ysyx_23060286_top__auipc) {
        VL_ASSIGN_SII(1,vlSelf->auipc, 1U);
        vlSelf->__Vcellout__ysyx_23060286_top__srca_wire 
            = vlSelf->__Vcellout__ysyx_23060286_top__pc_wire;
    } else {
        VL_ASSIGN_SII(1,vlSelf->auipc, 0U);
        vlSelf->__Vcellout__ysyx_23060286_top__srca_wire 
            = vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire;
    }
    vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
        = ((2U & (IData)(vlSelf->__Vcellout__ysyx_23060286_top__immsrc))
            ? ((1U & (IData)(vlSelf->__Vcellout__ysyx_23060286_top__immsrc))
                ? ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__auipc)
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
                : ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__auipc)
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
            : ((1U & (IData)(vlSelf->__Vcellout__ysyx_23060286_top__immsrc))
                ? ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__auipc)
                    ? 0xffffffffU : (((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0xfe0U 
                                                   & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                                        >> 7U)))))
                : ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__auipc)
                    ? (0xfffff000U & vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire)
                    : (((- (IData)((vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire 
                          >> 0x14U)))));
    VL_ASSIGN_SII(3,vlSelf->alucontrol, vlSelf->__Vcellout__ysyx_23060286_top__alucontrol);
    if (vlSelf->__Vcellout__ysyx_23060286_top__jalr) {
        VL_ASSIGN_SII(1,vlSelf->jalr, 1U);
        VL_ASSIGN_SII(32,vlSelf->srca_wire, vlSelf->__Vcellout__ysyx_23060286_top__srca_wire);
        VL_ASSIGN_SII(32,vlSelf->immext_wire, vlSelf->__Vcellout__ysyx_23060286_top__immext_wire);
        vlSelf->__Vcellout__ysyx_23060286_top__dnpc_wire 
            = (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
               + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire);
    } else {
        VL_ASSIGN_SII(1,vlSelf->jalr, 0U);
        VL_ASSIGN_SII(32,vlSelf->srca_wire, vlSelf->__Vcellout__ysyx_23060286_top__srca_wire);
        VL_ASSIGN_SII(32,vlSelf->immext_wire, vlSelf->__Vcellout__ysyx_23060286_top__immext_wire);
        vlSelf->__Vcellout__ysyx_23060286_top__dnpc_wire 
            = (vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
               + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire);
    }
    vlSelf->__Vcellout__ysyx_23060286_top__srcb_wire 
        = ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alusrc)
            ? vlSelf->__Vcellout__ysyx_23060286_top__immext_wire
            : vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire);
    VL_ASSIGN_SII(32,vlSelf->dnpc_wire, vlSelf->__Vcellout__ysyx_23060286_top__dnpc_wire);
    VL_ASSIGN_SII(32,vlSelf->srcb_wire, vlSelf->__Vcellout__ysyx_23060286_top__srcb_wire);
    vlSelf->__Vcellout__ysyx_23060286_top__aluresult_wire 
        = ((4U & (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucontrol))
            ? ((2U & (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucontrol))
                ? 0xffffffffU : ((1U & (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucontrol))
                                  ? ((vlSelf->__Vcellout__ysyx_23060286_top__srca_wire 
                                      < vlSelf->__Vcellout__ysyx_23060286_top__srcb_wire)
                                      ? 1U : 0U) : 
                                 (vlSelf->__Vcellout__ysyx_23060286_top__srca_wire 
                                  + (vlSelf->__Vcellout__ysyx_23060286_top__srcb_wire 
                                     << 0xcU)))) : 
           ((2U & (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucontrol))
             ? ((1U & (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucontrol))
                 ? (vlSelf->__Vcellout__ysyx_23060286_top__srca_wire 
                    | vlSelf->__Vcellout__ysyx_23060286_top__srcb_wire)
                 : (vlSelf->__Vcellout__ysyx_23060286_top__srca_wire 
                    & vlSelf->__Vcellout__ysyx_23060286_top__srcb_wire))
             : ((1U & (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucontrol))
                 ? (vlSelf->__Vcellout__ysyx_23060286_top__srca_wire 
                    - vlSelf->__Vcellout__ysyx_23060286_top__srcb_wire)
                 : (vlSelf->__Vcellout__ysyx_23060286_top__srca_wire 
                    + vlSelf->__Vcellout__ysyx_23060286_top__srcb_wire))));
    VL_ASSIGN_SII(1,vlSelf->zero, (0U == vlSelf->__Vcellout__ysyx_23060286_top__aluresult_wire));
    VL_ASSIGN_SII(32,vlSelf->aluresult_wire, vlSelf->__Vcellout__ysyx_23060286_top__aluresult_wire);
    vlSelf->__Vcellout__ysyx_23060286_top__result_wire 
        = ((2U & (IData)(vlSelf->__Vcellout__ysyx_23060286_top__resultsrc))
            ? ((IData)(4U) + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire)
            : ((1U & (IData)(vlSelf->__Vcellout__ysyx_23060286_top__resultsrc))
                ? vlSelf->__Vcellinp__ysyx_23060286_top__readdata_wire
                : vlSelf->__Vcellout__ysyx_23060286_top__aluresult_wire));
    vlSelf->__Vcellout__ysyx_23060286_top__pcsrc = 
        (((0U == vlSelf->__Vcellout__ysyx_23060286_top__aluresult_wire) 
          & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch)) 
         | (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump));
    VL_ASSIGN_SII(32,vlSelf->result_wire, vlSelf->__Vcellout__ysyx_23060286_top__result_wire);
    if (vlSelf->__Vcellout__ysyx_23060286_top__pcsrc) {
        VL_ASSIGN_SII(1,vlSelf->pcsrc, 1U);
        vlSelf->__Vcellout__ysyx_23060286_top__npc_wire 
            = vlSelf->__Vcellout__ysyx_23060286_top__dnpc_wire;
    } else {
        VL_ASSIGN_SII(1,vlSelf->pcsrc, 0U);
        vlSelf->__Vcellout__ysyx_23060286_top__npc_wire 
            = ((IData)(4U) + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire);
    }
    VL_ASSIGN_SII(32,vlSelf->npc_wire, vlSelf->__Vcellout__ysyx_23060286_top__npc_wire);
}

VL_ATTR_COLD void Vysyx_23060286_top___024root___eval_initial(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____Vcellinp__ysyx_23060286_top__clk 
        = vlSelf->__Vcellinp__ysyx_23060286_top__clk;
}

VL_ATTR_COLD void Vysyx_23060286_top___024root___eval_settle(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___eval_settle\n"); );
    // Body
    Vysyx_23060286_top___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vysyx_23060286_top___024root___final(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___final\n"); );
}

VL_ATTR_COLD void Vysyx_23060286_top___024root___ctor_var_reset(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellout__ysyx_23060286_top__alucontrol = VL_RAND_RESET_I(3);
    vlSelf->__Vcellout__ysyx_23060286_top__immsrc = VL_RAND_RESET_I(2);
    vlSelf->__Vcellout__ysyx_23060286_top__resultsrc = VL_RAND_RESET_I(2);
    vlSelf->__Vcellout__ysyx_23060286_top__auipc = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__ysyx_23060286_top__jalr = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__ysyx_23060286_top__regwrite = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__ysyx_23060286_top__alusrc = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__ysyx_23060286_top__memwrite = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__ysyx_23060286_top__pcsrc = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__ysyx_23060286_top__srca_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__ysyx_23060286_top__result_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__ysyx_23060286_top__dnpc_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__ysyx_23060286_top__aluresult_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__ysyx_23060286_top__srcb_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__ysyx_23060286_top__immext_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__ysyx_23060286_top__pc_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__ysyx_23060286_top__npc_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__ysyx_23060286_top__readdata_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__ysyx_23060286_top__inst_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__ysyx_23060286_top__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__ysyx_23060286_top__clk = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluop = VL_RAND_RESET_I(2);
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__jump = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->ysyx_23060286_top__DOT__GRP__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
