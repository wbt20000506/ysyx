// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root____Vdpiimwrap_top__DOT__IDU__DOT__npc_trap_TOP();

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    VL_ASSIGN_SII(3,vlSelf->immtype_wire, 0U);
    VL_ASSIGN_SII(1,vlSelf->wen_wire, 1U);
    vlSelf->top__DOT__GPR__DOT__rf[0U] = 0U;
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__clk, vlSelf->clk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__rst, vlSelf->rst);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__top__inst, vlSelf->inst);
    VL_ASSIGN_SII(32,vlSelf->pc_wire, vlSelf->__Vcellout__top__pc_wire);
    vlSelf->top__DOT__snpc_wire = ((IData)(4U) + vlSelf->__Vcellout__top__pc_wire);
    if ((IData)((0x100073U == (0xfff0007fU & vlSelf->__Vcellinp__top__inst)))) {
        Vtop___024root____Vdpiimwrap_top__DOT__IDU__DOT__npc_trap_TOP();
    }
    VL_ASSIGN_SII(3,vlSelf->alucotrol_wire, (7U & (vlSelf->__Vcellinp__top__inst 
                                                   >> 0xcU)));
    VL_ASSIGN_SII(32,vlSelf->rs2data_wire, vlSelf->top__DOT__GPR__DOT__rf
                  [(0x1fU & (vlSelf->__Vcellinp__top__inst 
                             >> 0x14U))]);
    vlSelf->__Vcellout__top__rs1data_wire = vlSelf->top__DOT__GPR__DOT__rf
        [(0x1fU & (vlSelf->__Vcellinp__top__inst >> 0xfU))];
    vlSelf->top__DOT__IMM__DOT__immI = (((- (IData)(
                                                    (vlSelf->__Vcellinp__top__inst 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->__Vcellinp__top__inst 
                                         >> 0x14U));
    VL_ASSIGN_SII(32,vlSelf->rs1data_wire, vlSelf->__Vcellout__top__rs1data_wire);
    VL_ASSIGN_SII(32,vlSelf->immext_wire, vlSelf->top__DOT__IMM__DOT__immI);
    vlSelf->top__DOT__ALU__DOT__b2 = (vlSelf->top__DOT__IMM__DOT__immI 
                                      ^ (- (IData)(
                                                   (1U 
                                                    & (vlSelf->__Vcellinp__top__inst 
                                                       >> 0xcU)))));
    VL_ASSIGN_SII(1,vlSelf->cf_wire, (1U & (IData)(
                                                   (1ULL 
                                                    & ((((QData)((IData)(vlSelf->__Vcellout__top__rs1data_wire)) 
                                                         + (QData)((IData)(vlSelf->top__DOT__ALU__DOT__b2))) 
                                                        + (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->__Vcellinp__top__inst 
                                                                              >> 0xcU))))) 
                                                       >> 0x20U)))));
    vlSelf->top__DOT__ALU__DOT__raddsub = ((vlSelf->__Vcellout__top__rs1data_wire 
                                            + vlSelf->top__DOT__ALU__DOT__b2) 
                                           + (IData)((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->__Vcellinp__top__inst 
                                                                         >> 0xcU))))));
    VL_ASSIGN_SII(1,vlSelf->of_wire, (1U & ((~ ((vlSelf->__Vcellout__top__rs1data_wire 
                                                 ^ vlSelf->top__DOT__ALU__DOT__b2) 
                                                >> 0x1fU)) 
                                            & ((vlSelf->__Vcellout__top__rs1data_wire 
                                                ^ vlSelf->top__DOT__ALU__DOT__raddsub) 
                                               >> 0x1fU))));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[0U] 
        = (IData)((0x300000000ULL | (QData)((IData)(
                                                    (vlSelf->__Vcellout__top__rs1data_wire 
                                                     | vlSelf->top__DOT__IMM__DOT__immI)))));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[1U] 
        = (((vlSelf->__Vcellout__top__rs1data_wire 
             & vlSelf->top__DOT__IMM__DOT__immI) << 3U) 
           | (IData)(((0x300000000ULL | (QData)((IData)(
                                                        (vlSelf->__Vcellout__top__rs1data_wire 
                                                         | vlSelf->top__DOT__IMM__DOT__immI)))) 
                      >> 0x20U)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[2U] 
        = (0x10U | ((vlSelf->top__DOT__ALU__DOT__raddsub 
                     << 6U) | ((vlSelf->__Vcellout__top__rs1data_wire 
                                & vlSelf->top__DOT__IMM__DOT__immI) 
                               >> 0x1dU)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[3U] 
        = (0x40U | (((IData)((QData)((IData)(vlSelf->top__DOT__ALU__DOT__raddsub))) 
                     << 9U) | (vlSelf->top__DOT__ALU__DOT__raddsub 
                               >> 0x1aU)));
    vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[4U] 
        = (((IData)((QData)((IData)(vlSelf->top__DOT__ALU__DOT__raddsub))) 
            >> 0x17U) | ((IData)(((QData)((IData)(vlSelf->top__DOT__ALU__DOT__raddsub)) 
                                  >> 0x20U)) << 9U));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[0U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[0U]))));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[1U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[2U])) 
                              << 0x1dU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[1U])) 
                                           >> 3U)));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[2U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[3U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[2U])) 
                                           >> 6U)));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[3U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[4U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4[3U])) 
                                           >> 9U)));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[0U] 
        = (IData)(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list
                  [0U]);
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[1U] 
        = (IData)(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list
                  [1U]);
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[2U] 
        = (IData)(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list
                  [2U]);
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[3U] 
        = (IData)(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list
                  [3U]);
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[0U] 
        = (7U & (IData)((vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list
                         [0U] >> 0x20U)));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[1U] 
        = (7U & (IData)((vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list
                         [1U] >> 0x20U)));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[2U] 
        = (7U & (IData)((vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list
                         [2U] >> 0x20U)));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[3U] 
        = (7U & (IData)((vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list
                         [3U] >> 0x20U)));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__hit = 
        ((7U & (vlSelf->__Vcellinp__top__inst >> 0xcU)) 
         == vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list
         [0U]);
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__hit) 
         | ((7U & (vlSelf->__Vcellinp__top__inst >> 0xcU)) 
            == vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list
            [1U]));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__hit) 
         | ((7U & (vlSelf->__Vcellinp__top__inst >> 0xcU)) 
            == vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list
            [2U]));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__hit = 
        ((IData)(vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__hit) 
         | ((7U & (vlSelf->__Vcellinp__top__inst >> 0xcU)) 
            == vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list
            [3U]));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelf->__Vcellinp__top__inst 
                              >> 0xcU)) == vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->__Vcellinp__top__inst 
                                 >> 0xcU)) == vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->__Vcellinp__top__inst 
                                 >> 0xcU)) == vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__lut_out 
           | ((- (IData)(((7U & (vlSelf->__Vcellinp__top__inst 
                                 >> 0xcU)) == vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list
              [3U]));
    vlSelf->__Vcellout__top__rddata_wire = vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__lut_out;
    VL_ASSIGN_SII(1,vlSelf->nf_wire, (vlSelf->__Vcellout__top__rddata_wire 
                                      >> 0x1fU));
    VL_ASSIGN_SII(1,vlSelf->zf_wire, (1U & (~ (IData)(
                                                      (0U 
                                                       != vlSelf->__Vcellout__top__rddata_wire)))));
    VL_ASSIGN_SII(32,vlSelf->rddata_wire, vlSelf->__Vcellout__top__rddata_wire);
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP____Vcellinp__top__clk = vlSelf->__Vcellinp__top__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->__Vcellinp__top__inst = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__top__rs1data_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__top__rddata_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__top__pc_wire = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__top__rst = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__top__clk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__snpc_wire = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__GPR__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ALU__DOT__raddsub = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALU__DOT__b2 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(140, vlSelf->top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(35);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALU__DOT__aluxmux__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IMM__DOT__immI = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
