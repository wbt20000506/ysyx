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
    CData/*7:0*/ __Vdly____Vcellout__top__out;
    // Body
    __Vdly____Vcellout__top__out = vlSelf->__Vcellout__top__out;
    if ((0U != (IData)(vlSelf->__Vcellinp__top__in))) {
        if (vlSelf->top__DOT__i) {
            vlSelf->top__DOT__a = (1U & VL_REDXOR_8(
                                                    (0x1dU 
                                                     & (IData)(vlSelf->__Vcellout__top__out))));
            __Vdly____Vcellout__top__out = (((IData)(vlSelf->top__DOT__a) 
                                             << 7U) 
                                            | (0x7fU 
                                               & ((IData)(vlSelf->__Vcellinp__top__in) 
                                                  >> 1U)));
        } else {
            vlSelf->top__DOT__a = (1U & VL_REDXOR_8(
                                                    (0x1dU 
                                                     & (IData)(vlSelf->__Vcellinp__top__in))));
            vlSelf->top__DOT__i = 1U;
            __Vdly____Vcellout__top__out = (((IData)(vlSelf->top__DOT__a) 
                                             << 7U) 
                                            | (0x7fU 
                                               & ((IData)(vlSelf->__Vcellinp__top__in) 
                                                  >> 1U)));
        }
        vlSelf->__Vcellout__top__h = (((((((((0U == (IData)(vlSelf->__Vcellout__top__out)) 
                                             | (1U 
                                                == (IData)(vlSelf->__Vcellout__top__out))) 
                                            | (2U == (IData)(vlSelf->__Vcellout__top__out))) 
                                           | (3U == (IData)(vlSelf->__Vcellout__top__out))) 
                                          | (4U == (IData)(vlSelf->__Vcellout__top__out))) 
                                         | (5U == (IData)(vlSelf->__Vcellout__top__out))) 
                                        | (6U == (IData)(vlSelf->__Vcellout__top__out))) 
                                       | (7U == (IData)(vlSelf->__Vcellout__top__out)))
                                       ? ((0U == (IData)(vlSelf->__Vcellout__top__out))
                                           ? 2U : (
                                                   (1U 
                                                    == (IData)(vlSelf->__Vcellout__top__out))
                                                    ? 0x9fU
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__Vcellout__top__out))
                                                     ? 0x25U
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->__Vcellout__top__out))
                                                      ? 0xdU
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlSelf->__Vcellout__top__out))
                                                       ? 0x99U
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->__Vcellout__top__out))
                                                        ? 0x49U
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->__Vcellout__top__out))
                                                         ? 0x41U
                                                         : 0x1fU)))))))
                                       : 0U);
    } else {
        __Vdly____Vcellout__top__out = 1U;
    }
    VL_ASSIGN_SII(8,vlSelf->h, vlSelf->__Vcellout__top__h);
    vlSelf->__Vcellout__top__out = __Vdly____Vcellout__top__out;
    VL_ASSIGN_SII(8,vlSelf->out, vlSelf->__Vcellout__top__out);
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__1\n"); );
    // Body
    VL_ASSIGN_ISI(8,vlSelf->__Vcellinp__top__in, vlSelf->in);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    Vtop___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->__Vcellinp__top__clk) ^ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__top__clk))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
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
