// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__clk, vlSelf->clk);
}

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__top__DOT__ps2_clk_sync;
    CData/*3:0*/ __Vdly__top__DOT__count;
    // Body
    __Vdly__top__DOT__ps2_clk_sync = vlSelf->top__DOT__ps2_clk_sync;
    __Vdly__top__DOT__count = vlSelf->top__DOT__count;
    __Vdly__top__DOT__ps2_clk_sync = ((6U & ((IData)(vlSelf->top__DOT__ps2_clk_sync) 
                                             << 1U)) 
                                      | (IData)(vlSelf->__Vcellinp__top__ps2_clk));
    if (vlSelf->__Vcellinp__top__reset) {
        __Vdly__top__DOT__count = 0U;
    } else if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__ps2_clk_sync))))) {
        if ((0xaU == (IData)(vlSelf->top__DOT__count))) {
            if (VL_UNLIKELY((((~ (IData)(vlSelf->__Vcellout__top__buffer)) 
                              & (IData)(vlSelf->__Vcellinp__top__ps2_data)) 
                             & VL_REDXOR_32((0x1ffU 
                                             & ((IData)(vlSelf->__Vcellout__top__buffer) 
                                                >> 1U)))))) {
                VL_WRITEF("receive %x\n",8,(0xffU & 
                                            ((IData)(vlSelf->__Vcellout__top__buffer) 
                                             >> 1U)));
            }
        }
        __Vdly__top__DOT__count = 0U;
    } else {
        vlSelf->top__DOT____Vlvbound_h094b76d9__0 = vlSelf->__Vcellinp__top__ps2_data;
        if (VL_LIKELY((9U >= (IData)(vlSelf->top__DOT__count)))) {
            vlSelf->__Vcellout__top__buffer = (((~ 
                                                 ((IData)(1U) 
                                                  << (IData)(vlSelf->top__DOT__count))) 
                                                & (IData)(vlSelf->__Vcellout__top__buffer)) 
                                               | (0x3ffU 
                                                  & ((IData)(vlSelf->top__DOT____Vlvbound_h094b76d9__0) 
                                                     << (IData)(vlSelf->top__DOT__count))));
        }
        __Vdly__top__DOT__count = (0xfU & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__count)));
    }
    vlSelf->top__DOT__count = __Vdly__top__DOT__count;
    vlSelf->top__DOT__ps2_clk_sync = __Vdly__top__DOT__ps2_clk_sync;
    VL_ASSIGN_SII(10,vlSelf->buffer, vlSelf->__Vcellout__top__buffer);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__ps2_clk, vlSelf->ps2_clk);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__reset, vlSelf->reset);
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__ps2_data, vlSelf->ps2_data);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->__Vcellinp__top__clk) & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__top__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop___024root___combo__TOP__1(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP____Vcellinp__top__clk = vlSelf->__Vcellinp__top__clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
