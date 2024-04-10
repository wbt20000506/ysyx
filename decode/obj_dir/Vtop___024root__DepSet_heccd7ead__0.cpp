// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlUnpacked<CData/*3:0*/, 8> Vtop__ConstPool__TABLE_h95775f4a_0;

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__top__en, vlSelf->en);
    VL_ASSIGN_ISI(2,vlSelf->__Vcellinp__top__x, vlSelf->x);
    __Vtableidx1 = (((IData)(vlSelf->__Vcellinp__top__x) 
                     << 1U) | (IData)(vlSelf->__Vcellinp__top__en));
    vlSelf->__Vcellout__top__y = Vtop__ConstPool__TABLE_h95775f4a_0
        [__Vtableidx1];
    VL_ASSIGN_SII(4,vlSelf->y, vlSelf->__Vcellout__top__y);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
