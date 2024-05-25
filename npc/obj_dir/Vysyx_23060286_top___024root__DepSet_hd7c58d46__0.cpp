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
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__ysyx_23060286_top__clk, vlSelf->clk);
}

VL_INLINE_OPT void Vysyx_23060286_top___024root___sequent__TOP__0(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__ysyx_23060286_top__DOT__GPR__DOT__rf__v0;
    IData/*31:0*/ __Vdlyvval__ysyx_23060286_top__DOT__GPR__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_23060286_top__DOT__GPR__DOT__rf__v0;
    // Body
    __Vdlyvset__ysyx_23060286_top__DOT__GPR__DOT__rf__v0 = 0U;
    vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
        = ((IData)(vlSelf->__Vcellinp__ysyx_23060286_top__rst)
            ? 0x80000000U : vlSelf->__Vcellout__ysyx_23060286_top__npc_wire);
    if (vlSelf->__Vcellout__ysyx_23060286_top__wen_wire) {
        __Vdlyvval__ysyx_23060286_top__DOT__GPR__DOT__rf__v0 
            = vlSelf->__Vcellout__ysyx_23060286_top__rddata_wire;
        __Vdlyvset__ysyx_23060286_top__DOT__GPR__DOT__rf__v0 = 1U;
        __Vdlyvdim0__ysyx_23060286_top__DOT__GPR__DOT__rf__v0 
            = (0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                        >> 7U));
    }
    if (__Vdlyvset__ysyx_23060286_top__DOT__GPR__DOT__rf__v0) {
        vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf[__Vdlyvdim0__ysyx_23060286_top__DOT__GPR__DOT__rf__v0] 
            = __Vdlyvval__ysyx_23060286_top__DOT__GPR__DOT__rf__v0;
    }
    VL_ASSIGN_SII(32,vlSelf->pc_wire, vlSelf->__Vcellout__ysyx_23060286_top__pc_wire);
}

void Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_trap_TOP();

VL_INLINE_OPT void Vysyx_23060286_top___024root___combo__TOP__1(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___combo__TOP__1\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_heb98900d__0;
    VlWide<6>/*191:0*/ __Vtemp_h63259be2__0;
    VlWide<5>/*159:0*/ __Vtemp_h7be7b0a0__0;
    VlWide<6>/*191:0*/ __Vtemp_h7882c763__0;
    VlWide<8>/*255:0*/ __Vtemp_h8cd43ead__0;
    VlWide<9>/*287:0*/ __Vtemp_h4f073ba2__0;
    VlWide<10>/*319:0*/ __Vtemp_h7b0a22a9__0;
    VlWide<11>/*351:0*/ __Vtemp_h98f30c65__0;
    VlWide<12>/*383:0*/ __Vtemp_h01b9245b__0;
    VlWide<14>/*447:0*/ __Vtemp_h221b7d3d__0;
    VlWide<15>/*479:0*/ __Vtemp_h8e372e85__0;
    VlWide<16>/*511:0*/ __Vtemp_h0b9fc768__0;
    VlWide<17>/*543:0*/ __Vtemp_h4d88e2aa__0;
    VlWide<18>/*575:0*/ __Vtemp_hb9c3ec32__0;
    VlWide<21>/*671:0*/ __Vtemp_ha92838a2__0;
    VlWide<22>/*703:0*/ __Vtemp_he4076379__0;
    VlWide<23>/*735:0*/ __Vtemp_hc23b3870__0;
    VlWide<24>/*767:0*/ __Vtemp_h1df58062__0;
    VlWide<25>/*799:0*/ __Vtemp_h7bd94b84__0;
    VlWide<27>/*863:0*/ __Vtemp_h70c392ef__0;
    VlWide<28>/*895:0*/ __Vtemp_h419fec24__0;
    // Body
    VL_ASSIGN_ISI(1,vlSelf->__Vcellinp__ysyx_23060286_top__rst, vlSelf->rst);
    VL_ASSIGN_ISI(32,vlSelf->__Vcellinp__ysyx_23060286_top__inst, vlSelf->inst);
    if ((3U == (0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst))) {
        Vysyx_23060286_top___024root____Vdpiimwrap_ysyx_23060286_top__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out 
        = (((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
            == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
            [0U]) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit 
        = ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
           == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out) 
           | (((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
               == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
               [1U]) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out) 
           | (((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
               == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
               [2U]) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out) 
           | (((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
               == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
               [3U]) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out) 
           | (((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
               == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
               [4U]) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out) 
           | (((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
               == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
               [5U]) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out) 
           | (((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
               == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
               [6U]) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out) 
           | (((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
               == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
               [7U]) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list
              [7U]));
    vlSelf->__Vcellout__ysyx_23060286_top__wen_wire 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit) 
           & (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
        = ((0x1fc00U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                        << 0xaU)) | ((0x380U & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                >> 5U)) 
                                     | (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                        >> 0x19U)));
    vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire 
        = vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf
        [(0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                   >> 0x14U))];
    vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
        = vlSelf->ysyx_23060286_top__DOT__GPR__DOT__rf
        [(0x1fU & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                   >> 0xfU))];
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                       == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit 
        = ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
           == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
                          [7U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
                          [8U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list
              [8U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
              [8U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
                          [9U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list
              [9U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
              [9U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit) 
           | ((0x7fU & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list
              [0xaU]));
    vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit)
            ? (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out)
            : 7U);
    __Vtemp_heb98900d__0[1U] = (((IData)((0x500000000ULL 
                                          | (QData)((IData)(
                                                            (((- (IData)(
                                                                         (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                          >> 0x1fU))) 
                                                              << 0xcU) 
                                                             | ((0xfe0U 
                                                                 & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                    >> 0x14U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                      >> 7U)))))))) 
                                 << 3U) | (IData)((
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(
                                                                      (((- (IData)(
                                                                                (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x1fU))) 
                                                                        << 0xdU) 
                                                                       | ((0x1000U 
                                                                           & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                              >> 0x13U)) 
                                                                          | ((0x800U 
                                                                              & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                << 4U)) 
                                                                             | ((0x7e0U 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 7U))))))))) 
                                                   >> 0x20U)));
    __Vtemp_heb98900d__0[2U] = (((IData)((0x500000000ULL 
                                          | (QData)((IData)(
                                                            (((- (IData)(
                                                                         (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                          >> 0x1fU))) 
                                                              << 0xcU) 
                                                             | ((0xfe0U 
                                                                 & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                    >> 0x14U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                      >> 7U)))))))) 
                                 >> 0x1dU) | (((IData)(
                                                       (0x400000000ULL 
                                                        | (QData)((IData)(
                                                                          (((- (IData)(
                                                                                (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x1fU))) 
                                                                            << 0xcU) 
                                                                           | (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                              >> 0x14U)))))) 
                                               << 6U) 
                                              | ((IData)(
                                                         ((0x500000000ULL 
                                                           | (QData)((IData)(
                                                                             (((- (IData)(
                                                                                (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x1fU))) 
                                                                               << 0xcU) 
                                                                              | ((0xfe0U 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x14U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 7U))))))) 
                                                          >> 0x20U)) 
                                                 << 3U)));
    __Vtemp_heb98900d__0[3U] = (((7U & ((IData)((0x400000000ULL 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x1fU))) 
                                                                     << 0xcU) 
                                                                    | (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                       >> 0x14U)))))) 
                                        >> 0x1aU)) 
                                 | ((IData)(((0x500000000ULL 
                                              | (QData)((IData)(
                                                                (((- (IData)(
                                                                             (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                              >> 0x1fU))) 
                                                                  << 0xcU) 
                                                                 | ((0xfe0U 
                                                                     & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                          >> 7U))))))) 
                                             >> 0x20U)) 
                                    >> 0x1dU)) | ((0x38U 
                                                   & ((IData)(
                                                              (0x400000000ULL 
                                                               | (QData)((IData)(
                                                                                (((- (IData)(
                                                                                (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x1fU))) 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x14U)))))) 
                                                      >> 0x1aU)) 
                                                  | ((IData)(
                                                             ((0x400000000ULL 
                                                               | (QData)((IData)(
                                                                                (((- (IData)(
                                                                                (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x1fU))) 
                                                                                << 0xcU) 
                                                                                | (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x14U))))) 
                                                              >> 0x20U)) 
                                                     << 6U)));
    __Vtemp_h63259be2__0[2U] = (((IData)((0x100000000ULL 
                                          | (QData)((IData)(
                                                            (0xfffff000U 
                                                             & vlSelf->__Vcellinp__ysyx_23060286_top__inst))))) 
                                 >> 0x1dU) | (((IData)(
                                                       (0x300000000ULL 
                                                        | (QData)((IData)(
                                                                          (((- (IData)(
                                                                                (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x1fU))) 
                                                                            << 0xdU) 
                                                                           | ((0x1000U 
                                                                               & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x13U)) 
                                                                              | ((0x800U 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                << 4U)) 
                                                                                | ((0x7e0U 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 7U)))))))))) 
                                               << 6U) 
                                              | ((IData)(
                                                         ((0x100000000ULL 
                                                           | (QData)((IData)(
                                                                             (0xfffff000U 
                                                                              & vlSelf->__Vcellinp__ysyx_23060286_top__inst)))) 
                                                          >> 0x20U)) 
                                                 << 3U)));
    __Vtemp_h63259be2__0[3U] = (((7U & ((IData)((0x300000000ULL 
                                                 | (QData)((IData)(
                                                                   (((- (IData)(
                                                                                (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x1fU))) 
                                                                     << 0xdU) 
                                                                    | ((0x1000U 
                                                                        & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                           >> 0x13U)) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                              << 4U)) 
                                                                          | ((0x7e0U 
                                                                              & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x14U)) 
                                                                             | (0x1eU 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 7U)))))))))) 
                                        >> 0x1aU)) 
                                 | ((IData)(((0x100000000ULL 
                                              | (QData)((IData)(
                                                                (0xfffff000U 
                                                                 & vlSelf->__Vcellinp__ysyx_23060286_top__inst)))) 
                                             >> 0x20U)) 
                                    >> 0x1dU)) | ((0x38U 
                                                   & ((IData)(
                                                              (0x300000000ULL 
                                                               | (QData)((IData)(
                                                                                (((- (IData)(
                                                                                (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x1fU))) 
                                                                                << 0xdU) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x13U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                << 4U)) 
                                                                                | ((0x7e0U 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x14U)) 
                                                                                | (0x1eU 
                                                                                & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 7U)))))))))) 
                                                      >> 0x1aU)) 
                                                  | (__Vtemp_heb98900d__0[1U] 
                                                     << 6U)));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[0U] 
        = (IData)((0x200000000ULL | (QData)((IData)(
                                                    (((- (IData)(
                                                                 (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                  >> 0x1fU))) 
                                                      << 0x15U) 
                                                     | ((0x100000U 
                                                         & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                            >> 0xbU)) 
                                                        | ((0xff000U 
                                                            & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                                                           | ((0x800U 
                                                               & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                    >> 0x14U))))))))));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[1U] 
        = (((IData)((0x100000000ULL | (QData)((IData)(
                                                      (0xfffff000U 
                                                       & vlSelf->__Vcellinp__ysyx_23060286_top__inst))))) 
            << 3U) | (IData)(((0x200000000ULL | (QData)((IData)(
                                                                (((- (IData)(
                                                                             (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                              >> 0x1fU))) 
                                                                  << 0x15U) 
                                                                 | ((0x100000U 
                                                                     & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                        >> 0xbU)) 
                                                                    | ((0xff000U 
                                                                        & vlSelf->__Vcellinp__ysyx_23060286_top__inst) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->__Vcellinp__ysyx_23060286_top__inst 
                                                                                >> 0x14U))))))))) 
                              >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[2U] 
        = __Vtemp_h63259be2__0[2U];
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[3U] 
        = __Vtemp_h63259be2__0[3U];
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[4U] 
        = ((7U & (__Vtemp_heb98900d__0[1U] >> 0x1aU)) 
           | ((0x38U & (__Vtemp_heb98900d__0[1U] >> 0x1aU)) 
              | (__Vtemp_heb98900d__0[2U] << 6U)));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[5U] 
        = ((7U & (__Vtemp_heb98900d__0[2U] >> 0x1aU)) 
           | ((0x38U & (__Vtemp_heb98900d__0[2U] >> 0x1aU)) 
              | (__Vtemp_heb98900d__0[3U] << 6U)));
    VL_ASSIGN_SII(1,vlSelf->wen_wire, vlSelf->__Vcellout__ysyx_23060286_top__wen_wire);
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                       == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
           == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [7U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [8U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [8U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [8U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [9U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [9U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [9U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0xbU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0xcU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0xdU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0xeU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0xfU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0xfU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x10U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x10U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x11U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x11U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x11U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x12U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x12U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x12U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x13U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x13U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x13U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x14U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x14U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x14U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x15U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x15U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x15U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x16U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x16U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x16U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x17U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x17U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x17U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x18U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x18U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x18U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x19U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x19U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x19U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x1aU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x1aU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x1aU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x1bU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x1bU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x1bU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x1cU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x1cU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x1cU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x1dU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x1dU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x1dU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x1eU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x1eU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x1eU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x1fU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x1fU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x1fU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x20U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x20U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x20U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x21U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x21U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x21U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x22U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x22U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x22U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x23U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x23U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x23U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x24U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x24U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x24U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x25U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x25U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x25U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x26U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x26U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x26U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x27U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x27U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x27U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x28U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x28U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x28U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x29U]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x29U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x29U]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x2aU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x2aU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x2aU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x2bU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x2bU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x2bU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x2cU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x2cU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x2cU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x2dU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x2dU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x2dU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out) 
           | ((- (IData)((vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
                          == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
                          [0x2eU]))) & vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list
              [0x2eU]));
    vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit) 
           | (vlSelf->ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key 
              == vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list
              [0x2eU]));
    vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit)
            ? (IData)(vlSelf->ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out)
            : 0x3fU);
    VL_ASSIGN_SII(32,vlSelf->rs2data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire);
    VL_ASSIGN_SII(32,vlSelf->rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire);
    VL_ASSIGN_SII(3,vlSelf->immtype_wire, vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire);
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[0U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[0U]))));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[1U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[2U])) 
                              << 0x1dU) | ((QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[1U])) 
                                           >> 3U)));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[2U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[3U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[2U])) 
                                           >> 6U)));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[3U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[4U])) 
                              << 0x17U) | ((QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[3U])) 
                                           >> 9U)));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list[4U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[5U])) 
                              << 0x14U) | ((QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut[4U])) 
                                           >> 0xcU)));
    VL_ASSIGN_SII(6,vlSelf->alucotrol_wire, vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire);
    vlSelf->__Vcellout__ysyx_23060286_top__jump_wire 
        = ((2U == (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire)) 
           | (3U == (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire)));
    vlSelf->__Vcellout__ysyx_23060286_top__branch_wire 
        = (((4U <= (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire)) 
            & (9U >= (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire))) 
           | (3U == (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire)));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[0U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list
                  [0U]);
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[0U] 
        = (7U & (IData)((vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list
                         [0U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[1U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list
                  [1U]);
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[1U] 
        = (7U & (IData)((vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list
                         [1U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[2U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list
                  [2U]);
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[2U] 
        = (7U & (IData)((vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list
                         [2U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[3U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list
                  [3U]);
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[3U] 
        = (7U & (IData)((vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list
                         [3U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list[4U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list
                  [4U]);
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list[4U] 
        = (7U & (IData)((vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list
                         [4U] >> 0x20U)));
    VL_ASSIGN_SII(1,vlSelf->jump_wire, vlSelf->__Vcellout__ysyx_23060286_top__jump_wire);
    VL_ASSIGN_SII(1,vlSelf->branch_wire, vlSelf->__Vcellout__ysyx_23060286_top__branch_wire);
    vlSelf->__Vcellout__ysyx_23060286_top__zero_wire 
        = ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__branch_wire) 
           & (((((((4U == (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire)) 
                   & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                      == vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)) 
                  | ((5U == (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire)) 
                     & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                        != vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))) 
                 | ((6U == (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire)) 
                    & VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))) 
                | ((7U == (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire)) 
                   & VL_GTES_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))) 
               | ((8U == (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire)) 
                  & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                     < vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))) 
              | ((9U == (IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire)) 
                 & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                    >= vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire) 
                       == vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit 
        = ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire) 
           == vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire) 
              == vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire) 
              == vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire) 
              == vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__immtype_wire) 
              == vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list
              [4U]));
    vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit)
            ? vlSelf->ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out
            : 0U);
    VL_ASSIGN_SII(1,vlSelf->zero_wire, vlSelf->__Vcellout__ysyx_23060286_top__zero_wire);
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber2 
        = (((IData)(vlSelf->__Vcellout__ysyx_23060286_top__jump_wire) 
            << 2U) | (((IData)(vlSelf->__Vcellout__ysyx_23060286_top__branch_wire) 
                       << 1U) | (IData)(vlSelf->__Vcellout__ysyx_23060286_top__zero_wire)));
    VL_ASSIGN_SII(32,vlSelf->immext_wire, vlSelf->__Vcellout__ysyx_23060286_top__immext_wire);
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__dnpcjal 
        = (vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
           + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire);
    __Vtemp_h7be7b0a0__0[3U] = (((0x3fU & ((IData)(
                                                   (0x100000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
                                                                       + 
                                                                       (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                        << 0xcU)))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x200000000ULL 
                                              | (QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x100000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
                                                                                + 
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                                << 0xcU)))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)((QData)((IData)(
                                                                              (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                               << 0xcU)))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x100000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
                                                                                + 
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                                << 0xcU))))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h7be7b0a0__0[4U] = ((0x3fU & (((IData)((QData)((IData)(
                                                                   (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                    << 0xcU)))) 
                                           >> 0xeU) 
                                          | ((IData)(
                                                     ((0x100000000ULL 
                                                       | (QData)((IData)(
                                                                         (vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
                                                                          + 
                                                                          (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                           << 0xcU))))) 
                                                      >> 0x20U)) 
                                             >> 0x14U))) 
                                | ((0xfc0U & (((IData)((QData)((IData)(
                                                                       (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                        << 0xcU)))) 
                                               >> 0xeU) 
                                              | ((IData)(
                                                         ((0x100000000ULL 
                                                           | (QData)((IData)(
                                                                             (vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
                                                                              + 
                                                                              (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                               << 0xcU))))) 
                                                          >> 0x20U)) 
                                                 >> 0x14U))) 
                                   | ((0x3f000U & ((IData)((QData)((IData)(
                                                                           (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                            << 0xcU)))) 
                                                   >> 0xeU)) 
                                      | ((IData)(((QData)((IData)(
                                                                  (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                   << 0xcU))) 
                                                  >> 0x20U)) 
                                         << 0x12U))));
    __Vtemp_h7882c763__0[3U] = (((0x3fU & ((IData)(
                                                   (0x200000000ULL 
                                                    | (QData)((IData)(
                                                                      ((IData)(4U) 
                                                                       + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x300000000ULL 
                                              | (QData)((IData)(
                                                                (0xfffffffeU 
                                                                 & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                    + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x200000000ULL 
                                                               | (QData)((IData)(
                                                                                ((IData)(4U) 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x100000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
                                                                                + 
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                                << 0xcU)))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x200000000ULL 
                                                                  | (QData)((IData)(
                                                                                ((IData)(4U) 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire)))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h8cd43ead__0[3U] = (((0x3fU & ((IData)(
                                                   (0x300000000ULL 
                                                    | (QData)((IData)(
                                                                      (0xfffffffeU 
                                                                       & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                          + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x400000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 + vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x300000000ULL 
                                                               | (QData)((IData)(
                                                                                (0xfffffffeU 
                                                                                & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x200000000ULL 
                                                               | (QData)((IData)(
                                                                                ((IData)(4U) 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x300000000ULL 
                                                                  | (QData)((IData)(
                                                                                (0xfffffffeU 
                                                                                & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h4f073ba2__0[3U] = (((0x3fU & ((IData)(
                                                   (0x400000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                       + vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x500000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 - vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x400000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x300000000ULL 
                                                               | (QData)((IData)(
                                                                                (0xfffffffeU 
                                                                                & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x400000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h4f073ba2__0[6U] = ((0x3fU & (__Vtemp_h7882c763__0[3U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h7882c763__0[3U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0x3ffff000U 
                                                    & ((IData)(
                                                               (0x100000000ULL 
                                                                | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__pc_wire 
                                                                                + 
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__immext_wire 
                                                                                << 0xcU)))))) 
                                                       >> 2U)) 
                                                   | (0xfff000U 
                                                      & ((IData)(
                                                                 ((0x200000000ULL 
                                                                   | (QData)((IData)(
                                                                                ((IData)(4U) 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire)))) 
                                                                  >> 0x20U)) 
                                                         >> 8U)))) 
                                      | (__Vtemp_h7be7b0a0__0[3U] 
                                         << 0x12U))));
    __Vtemp_h4f073ba2__0[7U] = ((0x3fU & (__Vtemp_h7be7b0a0__0[3U] 
                                          >> 0xeU)) 
                                | ((0xfc0U & (__Vtemp_h7be7b0a0__0[3U] 
                                              >> 0xeU)) 
                                   | ((0x3f000U & (
                                                   __Vtemp_h7be7b0a0__0[3U] 
                                                   >> 0xeU)) 
                                      | (__Vtemp_h7be7b0a0__0[4U] 
                                         << 0x12U))));
    __Vtemp_h4f073ba2__0[8U] = ((0x3fU & (__Vtemp_h7be7b0a0__0[4U] 
                                          >> 0xeU)) 
                                | (0xfc0U & (__Vtemp_h7be7b0a0__0[4U] 
                                             >> 0xeU)));
    __Vtemp_h7b0a22a9__0[3U] = (((0x3fU & ((IData)(
                                                   (0x500000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                       - vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x600000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 << 
                                                                 (0x1fU 
                                                                  & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x500000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                - vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x400000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x500000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                - vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h7b0a22a9__0[6U] = ((0x3fU & (__Vtemp_h8cd43ead__0[3U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h8cd43ead__0[3U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0x3ffff000U 
                                                    & ((IData)(
                                                               (0x200000000ULL 
                                                                | (QData)((IData)(
                                                                                ((IData)(4U) 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire))))) 
                                                       >> 2U)) 
                                                   | (0xfff000U 
                                                      & ((IData)(
                                                                 ((0x300000000ULL 
                                                                   | (QData)((IData)(
                                                                                (0xfffffffeU 
                                                                                & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                                                  >> 0x20U)) 
                                                         >> 8U)))) 
                                      | (__Vtemp_h7882c763__0[3U] 
                                         << 0x12U))));
    __Vtemp_h98f30c65__0[3U] = (((0x3fU & ((IData)(
                                                   (0x600000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                       << 
                                                                       (0x1fU 
                                                                        & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x700000000ULL 
                                              | (QData)((IData)(
                                                                (VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                  ? 1U
                                                                  : 0U)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x600000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x500000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                - vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x600000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h98f30c65__0[6U] = ((0x3fU & (__Vtemp_h4f073ba2__0[3U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h4f073ba2__0[3U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0x3ffff000U 
                                                    & ((IData)(
                                                               (0x300000000ULL 
                                                                | (QData)((IData)(
                                                                                (0xfffffffeU 
                                                                                & (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))))) 
                                                       >> 2U)) 
                                                   | (0xfff000U 
                                                      & ((IData)(
                                                                 ((0x400000000ULL 
                                                                   | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                                                  >> 0x20U)) 
                                                         >> 8U)))) 
                                      | (__Vtemp_h8cd43ead__0[3U] 
                                         << 0x12U))));
    __Vtemp_h98f30c65__0[8U] = ((__Vtemp_h7b0a22a9__0[6U] 
                                 >> 0x1aU) | ((0xfc0U 
                                               & (__Vtemp_h7882c763__0[3U] 
                                                  >> 8U)) 
                                              | (__Vtemp_h4f073ba2__0[6U] 
                                                 << 0xcU)));
    __Vtemp_h98f30c65__0[9U] = ((0x3fU & (__Vtemp_h4f073ba2__0[6U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h4f073ba2__0[6U] 
                                              >> 0x14U)) 
                                   | (__Vtemp_h4f073ba2__0[7U] 
                                      << 0xcU)));
    __Vtemp_h01b9245b__0[3U] = (((0x3fU & ((IData)(
                                                   (0x700000000ULL 
                                                    | (QData)((IData)(
                                                                      (VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                        ? 1U
                                                                        : 0U))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x800000000ULL 
                                              | (QData)((IData)(
                                                                ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                  < vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                  ? 1U
                                                                  : 0U)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x700000000ULL 
                                                               | (QData)((IData)(
                                                                                (VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                                 ? 1U
                                                                                 : 0U))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x600000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x700000000ULL 
                                                                  | (QData)((IData)(
                                                                                (VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                                 ? 1U
                                                                                 : 0U)))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h01b9245b__0[6U] = ((0x3fU & (__Vtemp_h7b0a22a9__0[3U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h7b0a22a9__0[3U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0x3ffff000U 
                                                    & ((IData)(
                                                               (0x400000000ULL 
                                                                | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                       >> 2U)) 
                                                   | (0xfff000U 
                                                      & ((IData)(
                                                                 ((0x500000000ULL 
                                                                   | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                - vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                                                  >> 0x20U)) 
                                                         >> 8U)))) 
                                      | (__Vtemp_h4f073ba2__0[3U] 
                                         << 0x12U))));
    __Vtemp_h01b9245b__0[8U] = ((__Vtemp_h98f30c65__0[6U] 
                                 >> 0x1aU) | ((0xfc0U 
                                               & (__Vtemp_h8cd43ead__0[3U] 
                                                  >> 8U)) 
                                              | (__Vtemp_h7b0a22a9__0[6U] 
                                                 << 0xcU)));
    __Vtemp_h01b9245b__0[9U] = ((0x3fU & (__Vtemp_h7b0a22a9__0[6U] 
                                          >> 0x14U)) 
                                | (__Vtemp_h98f30c65__0[8U] 
                                   << 6U));
    __Vtemp_h221b7d3d__0[3U] = (((0x3fU & ((IData)(
                                                   (0x800000000ULL 
                                                    | (QData)((IData)(
                                                                      ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                        < vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                        ? 1U
                                                                        : 0U))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x900000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 ^ vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x800000000ULL 
                                                               | (QData)((IData)(
                                                                                ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                < vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                                 ? 1U
                                                                                 : 0U))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x700000000ULL 
                                                               | (QData)((IData)(
                                                                                (VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                                 ? 1U
                                                                                 : 0U))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x800000000ULL 
                                                                  | (QData)((IData)(
                                                                                ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                < vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                                 ? 1U
                                                                                 : 0U)))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h221b7d3d__0[6U] = ((0x3fU & (__Vtemp_h98f30c65__0[3U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h98f30c65__0[3U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0x3ffff000U 
                                                    & ((IData)(
                                                               (0x500000000ULL 
                                                                | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                - vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                       >> 2U)) 
                                                   | (0xfff000U 
                                                      & ((IData)(
                                                                 ((0x600000000ULL 
                                                                   | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                                  >> 0x20U)) 
                                                         >> 8U)))) 
                                      | (__Vtemp_h7b0a22a9__0[3U] 
                                         << 0x12U))));
    __Vtemp_h8e372e85__0[3U] = (((0x3fU & ((IData)(
                                                   (0x900000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                       ^ vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0xa00000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x900000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                ^ vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x800000000ULL 
                                                               | (QData)((IData)(
                                                                                ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                < vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                                 ? 1U
                                                                                 : 0U))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x900000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                ^ vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h8e372e85__0[6U] = ((0x3fU & (__Vtemp_h01b9245b__0[3U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h01b9245b__0[3U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0x3ffff000U 
                                                    & ((IData)(
                                                               (0x600000000ULL 
                                                                | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                                       >> 2U)) 
                                                   | (0xfff000U 
                                                      & ((IData)(
                                                                 ((0x700000000ULL 
                                                                   | (QData)((IData)(
                                                                                (VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                                 ? 1U
                                                                                 : 0U)))) 
                                                                  >> 0x20U)) 
                                                         >> 8U)))) 
                                      | (__Vtemp_h98f30c65__0[3U] 
                                         << 0x12U))));
    __Vtemp_h8e372e85__0[8U] = ((__Vtemp_h221b7d3d__0[6U] 
                                 >> 0x1aU) | ((0xfc0U 
                                               & (__Vtemp_h7b0a22a9__0[3U] 
                                                  >> 8U)) 
                                              | (__Vtemp_h01b9245b__0[6U] 
                                                 << 0xcU)));
    __Vtemp_h8e372e85__0[9U] = ((0x3fU & (__Vtemp_h01b9245b__0[6U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h01b9245b__0[6U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   __Vtemp_h4f073ba2__0[3U] 
                                                   >> 2U)) 
                                      | (__Vtemp_h98f30c65__0[6U] 
                                         << 0x12U))));
    __Vtemp_h8e372e85__0[0xaU] = ((0x3fU & (__Vtemp_h98f30c65__0[6U] 
                                            >> 0xeU)) 
                                  | ((0xfc0U & (__Vtemp_h98f30c65__0[6U] 
                                                >> 0xeU)) 
                                     | (__Vtemp_h01b9245b__0[8U] 
                                        << 0xcU)));
    __Vtemp_h8e372e85__0[0xbU] = ((0x3fU & (__Vtemp_h01b9245b__0[8U] 
                                            >> 0x14U)) 
                                  | ((0xfc0U & (__Vtemp_h01b9245b__0[8U] 
                                                >> 0x14U)) 
                                     | (__Vtemp_h01b9245b__0[9U] 
                                        << 0xcU)));
    __Vtemp_h8e372e85__0[0xeU] = ((0x3fU & (__Vtemp_h4f073ba2__0[8U] 
                                            >> 2U)) 
                                  | (0xfc0U & (__Vtemp_h4f073ba2__0[8U] 
                                               >> 2U)));
    __Vtemp_h0b9fc768__0[3U] = (((0x3fU & ((IData)(
                                                   (0xa00000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                       >> 
                                                                       (0x1fU 
                                                                        & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0xb00000000ULL 
                                              | (QData)((IData)(
                                                                VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                                                               (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0xa00000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x900000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                ^ vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0xa00000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h0b9fc768__0[6U] = ((0x3fU & (__Vtemp_h221b7d3d__0[3U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h221b7d3d__0[3U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0x3ffff000U 
                                                    & ((IData)(
                                                               (0x700000000ULL 
                                                                | (QData)((IData)(
                                                                                (VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                                 ? 1U
                                                                                 : 0U))))) 
                                                       >> 2U)) 
                                                   | (0xfff000U 
                                                      & ((IData)(
                                                                 ((0x800000000ULL 
                                                                   | (QData)((IData)(
                                                                                ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                < vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                                 ? 1U
                                                                                 : 0U)))) 
                                                                  >> 0x20U)) 
                                                         >> 8U)))) 
                                      | (__Vtemp_h01b9245b__0[3U] 
                                         << 0x12U))));
    __Vtemp_h0b9fc768__0[8U] = ((__Vtemp_h8e372e85__0[6U] 
                                 >> 0x1aU) | ((0xfc0U 
                                               & (__Vtemp_h98f30c65__0[3U] 
                                                  >> 8U)) 
                                              | (__Vtemp_h221b7d3d__0[6U] 
                                                 << 0xcU)));
    __Vtemp_h0b9fc768__0[9U] = ((0x3fU & (__Vtemp_h221b7d3d__0[6U] 
                                          >> 0x14U)) 
                                | (__Vtemp_h8e372e85__0[8U] 
                                   << 6U));
    __Vtemp_h0b9fc768__0[0xeU] = ((0x3fU & (__Vtemp_h98f30c65__0[9U] 
                                            >> 8U)) 
                                  | ((0xfc0U & (__Vtemp_h98f30c65__0[9U] 
                                                >> 8U)) 
                                     | ((0x3f000U & 
                                         (__Vtemp_h98f30c65__0[9U] 
                                          >> 8U)) | 
                                        ((0xfc0000U 
                                          & (__Vtemp_h98f30c65__0[9U] 
                                             >> 8U)) 
                                         | ((0x3f000000U 
                                             & (__Vtemp_h4f073ba2__0[7U] 
                                                << 4U)) 
                                            | (0xc0000000U 
                                               & (__Vtemp_h4f073ba2__0[7U] 
                                                  << 4U)))))));
    __Vtemp_h4d88e2aa__0[3U] = (((0x3fU & ((IData)(
                                                   (0xb00000000ULL 
                                                    | (QData)((IData)(
                                                                      VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0xc00000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 | vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0xb00000000ULL 
                                                               | (QData)((IData)(
                                                                                VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0xa00000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0xb00000000ULL 
                                                                  | (QData)((IData)(
                                                                                VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h4d88e2aa__0[6U] = ((0x3fU & (__Vtemp_h8e372e85__0[3U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h8e372e85__0[3U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0x3ffff000U 
                                                    & ((IData)(
                                                               (0x800000000ULL 
                                                                | (QData)((IData)(
                                                                                ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                < vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)
                                                                                 ? 1U
                                                                                 : 0U))))) 
                                                       >> 2U)) 
                                                   | (0xfff000U 
                                                      & ((IData)(
                                                                 ((0x900000000ULL 
                                                                   | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                ^ vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                                                  >> 0x20U)) 
                                                         >> 8U)))) 
                                      | (__Vtemp_h221b7d3d__0[3U] 
                                         << 0x12U))));
    __Vtemp_h4d88e2aa__0[8U] = ((__Vtemp_h0b9fc768__0[6U] 
                                 >> 0x1aU) | ((0xfc0U 
                                               & (__Vtemp_h01b9245b__0[3U] 
                                                  >> 8U)) 
                                              | (__Vtemp_h8e372e85__0[6U] 
                                                 << 0xcU)));
    __Vtemp_h4d88e2aa__0[9U] = ((0x3fU & (__Vtemp_h8e372e85__0[6U] 
                                          >> 0x14U)) 
                                | (__Vtemp_h0b9fc768__0[8U] 
                                   << 6U));
    __Vtemp_h4d88e2aa__0[0x10U] = ((__Vtemp_h0b9fc768__0[0xeU] 
                                    >> 0x1aU) | (((0x3c0U 
                                                   & (__Vtemp_h4f073ba2__0[7U] 
                                                      >> 0x16U)) 
                                                  | (0xc00U 
                                                     & (__Vtemp_h4f073ba2__0[8U] 
                                                        << 0xaU))) 
                                                 | (__Vtemp_h8e372e85__0[0xeU] 
                                                    << 0xcU)));
    __Vtemp_hb9c3ec32__0[3U] = (((0xfffU & ((IData)(
                                                    (0xc00000000ULL 
                                                     | (QData)((IData)(
                                                                       (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                        | vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                            >> 0xeU)) 
                                 | ((IData)(((0xd00000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                             >> 0x20U)) 
                                    >> 0x14U)) | ((0x3f000U 
                                                   & ((IData)(
                                                              (0xc00000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                | vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                      >> 0xeU)) 
                                                  | (((IData)(
                                                              (0xb00000000ULL 
                                                               | (QData)((IData)(
                                                                                VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                                      << 0x18U) 
                                                     | ((IData)(
                                                                ((0xc00000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                | vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                                                 >> 0x20U)) 
                                                        << 0x12U))));
    __Vtemp_hb9c3ec32__0[6U] = ((0xfffU & (__Vtemp_h0b9fc768__0[3U] 
                                           >> 0xeU)) 
                                | ((0x3f000U & (__Vtemp_h0b9fc768__0[3U] 
                                                >> 0xeU)) 
                                   | ((0xfc0000U & 
                                       ((0xfffc0000U 
                                         & ((IData)(
                                                    (0x900000000ULL 
                                                     | (QData)((IData)(
                                                                       (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                        ^ vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                            << 4U)) 
                                        | (0x3ffc0000U 
                                           & ((IData)(
                                                      ((0xa00000000ULL 
                                                        | (QData)((IData)(
                                                                          (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                       >> 0x20U)) 
                                              >> 2U)))) 
                                      | (__Vtemp_h8e372e85__0[3U] 
                                         << 0x18U))));
    __Vtemp_hb9c3ec32__0[8U] = ((__Vtemp_h4d88e2aa__0[6U] 
                                 >> 0x14U) | ((0x3f000U 
                                               & (__Vtemp_h221b7d3d__0[3U] 
                                                  >> 2U)) 
                                              | (__Vtemp_h0b9fc768__0[6U] 
                                                 << 0x12U)));
    __Vtemp_hb9c3ec32__0[9U] = ((0xfffU & (__Vtemp_h0b9fc768__0[6U] 
                                           >> 0xeU)) 
                                | (__Vtemp_h4d88e2aa__0[8U] 
                                   << 0xcU));
    __Vtemp_hb9c3ec32__0[0xfU] = ((0xfffU & (__Vtemp_h8e372e85__0[0xbU] 
                                             >> 8U)) 
                                  | ((0x3f000U & (__Vtemp_h8e372e85__0[0xbU] 
                                                  >> 8U)) 
                                     | ((0xfc0000U 
                                         & (__Vtemp_h8e372e85__0[0xbU] 
                                            >> 8U)) 
                                        | ((0x3f000000U 
                                            & (__Vtemp_h01b9245b__0[9U] 
                                               << 4U)) 
                                           | (0xc0000000U 
                                              & (__Vtemp_h01b9245b__0[9U] 
                                                 << 4U))))));
    __Vtemp_hb9c3ec32__0[0x10U] = (((__Vtemp_h01b9245b__0[9U] 
                                     >> 0x1cU) | ((0x3f0U 
                                                   & (__Vtemp_h98f30c65__0[8U] 
                                                      >> 0x16U)) 
                                                  | (0xc00U 
                                                     & (__Vtemp_h98f30c65__0[9U] 
                                                        << 0xaU)))) 
                                   | ((0x3f000U & (
                                                   __Vtemp_h98f30c65__0[9U] 
                                                   << 0xaU)) 
                                      | (__Vtemp_h0b9fc768__0[0xeU] 
                                         << 0x12U)));
    __Vtemp_ha92838a2__0[4U] = (((0x3fU & ((IData)(
                                                   (0xd00000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                       & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                           >> 0xeU)) 
                                 | ((IData)(((0x3800000000fULL 
                                              | ((QData)((IData)(
                                                                 (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                  + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))) 
                                                 << 6U)) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0x3ffc0U 
                                                   & ((IData)(
                                                              (0xd00000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                      >> 0xeU)) 
                                                  | (((IData)(
                                                              (0xc00000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                | vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                      << 0x18U) 
                                                     | ((IData)(
                                                                ((0xd00000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                                                 >> 0x20U)) 
                                                        << 0x12U))));
    __Vtemp_ha92838a2__0[7U] = ((0x3fU & (__Vtemp_h4d88e2aa__0[3U] 
                                          >> 0xeU)) 
                                | ((0x3ffc0U & (__Vtemp_h4d88e2aa__0[3U] 
                                                >> 0xeU)) 
                                   | ((0xfc0000U & 
                                       ((0xfffc0000U 
                                         & ((IData)(
                                                    (0xa00000000ULL 
                                                     | (QData)((IData)(
                                                                       (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                            << 4U)) 
                                        | (0x3ffc0000U 
                                           & ((IData)(
                                                      ((0xb00000000ULL 
                                                        | (QData)((IData)(
                                                                          VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                       >> 0x20U)) 
                                              >> 2U)))) 
                                      | (__Vtemp_h0b9fc768__0[3U] 
                                         << 0x18U))));
    __Vtemp_ha92838a2__0[9U] = ((__Vtemp_hb9c3ec32__0[6U] 
                                 >> 0x1aU) | ((0x3ffc0U 
                                               & (__Vtemp_h8e372e85__0[3U] 
                                                  >> 2U)) 
                                              | (__Vtemp_h4d88e2aa__0[6U] 
                                                 << 0x12U)));
    __Vtemp_ha92838a2__0[0xaU] = ((0x3fU & (__Vtemp_h4d88e2aa__0[6U] 
                                            >> 0xeU)) 
                                  | (__Vtemp_hb9c3ec32__0[8U] 
                                     << 6U));
    __Vtemp_ha92838a2__0[0xfU] = ((0x3fU & (__Vtemp_h8e372e85__0[9U] 
                                            >> 2U)) 
                                  | ((0x3ffc0U & (__Vtemp_h8e372e85__0[9U] 
                                                  >> 2U)) 
                                     | ((0xfc0000U 
                                         & (__Vtemp_h8e372e85__0[9U] 
                                            >> 2U)) 
                                        | ((0x3f000000U 
                                            & (__Vtemp_h8e372e85__0[9U] 
                                               >> 2U)) 
                                           | (__Vtemp_h8e372e85__0[0xaU] 
                                              << 0x1eU)))));
    __Vtemp_ha92838a2__0[0x10U] = ((0x3fU & (__Vtemp_h8e372e85__0[0xaU] 
                                             >> 2U)) 
                                   | ((0x3ffc0U & (
                                                   __Vtemp_h8e372e85__0[0xaU] 
                                                   >> 2U)) 
                                      | ((0xfc0000U 
                                          & (__Vtemp_h8e372e85__0[0xaU] 
                                             >> 2U)) 
                                         | ((0x3f000000U 
                                             & (__Vtemp_h8e372e85__0[0xaU] 
                                                >> 2U)) 
                                            | (__Vtemp_h8e372e85__0[0xbU] 
                                               << 0x1eU)))));
    __Vtemp_he4076379__0[4U] = ((0x3fU & ((IData)((0x3800000000fULL 
                                                   | ((QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                       + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))) 
                                                      << 6U))) 
                                          >> 0x14U)) 
                                | ((0xfc0U & ((IData)(
                                                      (0x3800000000fULL 
                                                       | ((QData)((IData)(
                                                                          (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                           + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))) 
                                                          << 6U))) 
                                              >> 0x14U)) 
                                   | (((IData)((0xd00000000ULL 
                                                | (QData)((IData)(
                                                                  (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                   & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                       << 0x18U) | 
                                      ((IData)(((0x3800000000fULL 
                                                 | ((QData)((IData)(
                                                                    (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                     + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))) 
                                                    << 6U)) 
                                                >> 0x20U)) 
                                       << 0xcU))));
    __Vtemp_he4076379__0[7U] = ((0x3fU & (__Vtemp_hb9c3ec32__0[3U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_hb9c3ec32__0[3U] 
                                              >> 0x14U)) 
                                   | ((0xfff000U & 
                                       ((0xfffff000U 
                                         & ((IData)(
                                                    (0xb00000000ULL 
                                                     | (QData)((IData)(
                                                                       VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))))) 
                                            << 4U)) 
                                        | (0x3ffff000U 
                                           & ((IData)(
                                                      ((0xc00000000ULL 
                                                        | (QData)((IData)(
                                                                          (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                           | vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                                       >> 0x20U)) 
                                              >> 2U)))) 
                                      | (__Vtemp_h4d88e2aa__0[3U] 
                                         << 0x18U))));
    __Vtemp_he4076379__0[9U] = ((__Vtemp_ha92838a2__0[7U] 
                                 >> 0x1aU) | ((0xfc0U 
                                               & (__Vtemp_h0b9fc768__0[3U] 
                                                  >> 2U)) 
                                              | (__Vtemp_hb9c3ec32__0[6U] 
                                                 << 0xcU)));
    __Vtemp_he4076379__0[0xaU] = ((0x3fU & (__Vtemp_hb9c3ec32__0[6U] 
                                            >> 0x14U)) 
                                  | (__Vtemp_ha92838a2__0[9U] 
                                     << 6U));
    __Vtemp_he4076379__0[0xfU] = ((0x3fU & (__Vtemp_h0b9fc768__0[9U] 
                                            >> 2U)) 
                                  | ((0xfc0U & (__Vtemp_h0b9fc768__0[9U] 
                                                >> 2U)) 
                                     | ((0xfff000U 
                                         & (__Vtemp_h0b9fc768__0[9U] 
                                            >> 2U)) 
                                        | ((0x3f000000U 
                                            & (__Vtemp_h0b9fc768__0[9U] 
                                               >> 2U)) 
                                           | (0xc0000000U 
                                              & (__Vtemp_h8e372e85__0[8U] 
                                                 << 4U))))));
    __Vtemp_he4076379__0[0x15U] = ((0x3fU & (__Vtemp_h4d88e2aa__0[0x10U] 
                                             >> 8U)) 
                                   | (0xfc0U & (__Vtemp_h4d88e2aa__0[0x10U] 
                                                >> 8U)));
    __Vtemp_hc23b3870__0[3U] = (((0x3fU & ((IData)(
                                                   (0x1000000000ULL 
                                                    | (QData)((IData)(
                                                                      ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                        < vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                                                        ? 1U
                                                                        : 0U))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x1100000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 ^ vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x1000000000ULL 
                                                               | (QData)((IData)(
                                                                                ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                < vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                                                                 ? 1U
                                                                                 : 0U))))) 
                                                      >> 0x14U)) 
                                                  | (((VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                                        ? 1U
                                                        : 0U) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x1000000000ULL 
                                                                  | (QData)((IData)(
                                                                                ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                < vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                                                                 ? 1U
                                                                                 : 0U)))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_hc23b3870__0[4U] = ((0x3fU & (((VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                             ? 1U : 0U) 
                                           >> 0xeU) 
                                          | ((IData)(
                                                     ((0x1000000000ULL 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                           < vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                                                           ? 1U
                                                                           : 0U)))) 
                                                      >> 0x20U)) 
                                             >> 0x14U))) 
                                | ((0xfc0U & (((VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                                 ? 1U
                                                 : 0U) 
                                               >> 0xeU) 
                                              | ((IData)(
                                                         ((0x1000000000ULL 
                                                           | (QData)((IData)(
                                                                             ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                               < vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                                                               ? 1U
                                                                               : 0U)))) 
                                                          >> 0x20U)) 
                                                 >> 0x14U))) 
                                   | ((0x3f000U & (
                                                   (VL_LTS_III(32, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                                     ? 1U
                                                     : 0U) 
                                                   >> 0xeU)) 
                                      | ((IData)((0x3800000000fULL 
                                                  | ((QData)((IData)(
                                                                     (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                      + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))) 
                                                     << 6U))) 
                                         << 0x12U))));
    __Vtemp_hc23b3870__0[7U] = ((0x3fU & (__Vtemp_ha92838a2__0[4U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_ha92838a2__0[4U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0xfffff000U 
                                                    & ((IData)(
                                                               (0xc00000000ULL 
                                                                | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                | vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                       << 4U)) 
                                                   | (0x3ffff000U 
                                                      & ((IData)(
                                                                 ((0xd00000000ULL 
                                                                   | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire)))) 
                                                                  >> 0x20U)) 
                                                         >> 2U)))) 
                                      | (__Vtemp_hb9c3ec32__0[3U] 
                                         << 0x12U))));
    __Vtemp_hc23b3870__0[9U] = ((__Vtemp_he4076379__0[7U] 
                                 >> 0x1aU) | ((0xfc0U 
                                               & (__Vtemp_h4d88e2aa__0[3U] 
                                                  >> 2U)) 
                                              | (__Vtemp_ha92838a2__0[7U] 
                                                 << 0xcU)));
    __Vtemp_hc23b3870__0[0xaU] = ((0x3fU & (__Vtemp_ha92838a2__0[7U] 
                                            >> 0x14U)) 
                                  | (__Vtemp_he4076379__0[9U] 
                                     << 6U));
    __Vtemp_hc23b3870__0[0xfU] = ((0x3fU & (__Vtemp_h4d88e2aa__0[9U] 
                                            >> 2U)) 
                                  | ((0xfc0U & (__Vtemp_h4d88e2aa__0[9U] 
                                                >> 2U)) 
                                     | ((0x3f000U & 
                                         (__Vtemp_h4d88e2aa__0[9U] 
                                          >> 2U)) | 
                                        ((0x3ffc0000U 
                                          & (__Vtemp_h4d88e2aa__0[9U] 
                                             >> 2U)) 
                                         | (0xc0000000U 
                                            & (__Vtemp_h0b9fc768__0[8U] 
                                               << 4U))))));
    __Vtemp_hc23b3870__0[0x13U] = ((0x3fU & (__Vtemp_ha92838a2__0[0x10U] 
                                             >> 0x14U)) 
                                   | ((0xfc0U & (__Vtemp_ha92838a2__0[0x10U] 
                                                 >> 0x14U)) 
                                      | ((0x3f000U 
                                          & (__Vtemp_h8e372e85__0[0xbU] 
                                             << 0xaU)) 
                                         | (__Vtemp_hb9c3ec32__0[0xfU] 
                                            << 0x12U))));
    __Vtemp_hc23b3870__0[0x14U] = ((0x3fU & (__Vtemp_hb9c3ec32__0[0xfU] 
                                             >> 0xeU)) 
                                   | ((0xfc0U & (__Vtemp_hb9c3ec32__0[0xfU] 
                                                 >> 0xeU)) 
                                      | ((0x3f000U 
                                          & (__Vtemp_hb9c3ec32__0[0xfU] 
                                             >> 0xeU)) 
                                         | (__Vtemp_hb9c3ec32__0[0x10U] 
                                            << 0x12U))));
    __Vtemp_hc23b3870__0[0x15U] = ((0x3fU & (__Vtemp_hb9c3ec32__0[0x10U] 
                                             >> 0xeU)) 
                                   | ((0xfc0U & (__Vtemp_hb9c3ec32__0[0x10U] 
                                                 >> 0xeU)) 
                                      | ((0x3f000U 
                                          & (__Vtemp_hb9c3ec32__0[0x10U] 
                                             >> 0xeU)) 
                                         | ((0x3ffc0000U 
                                             & (__Vtemp_h0b9fc768__0[0xeU] 
                                                << 4U)) 
                                            | (__Vtemp_h4d88e2aa__0[0x10U] 
                                               << 0x1eU)))));
    __Vtemp_hc23b3870__0[0x16U] = ((0x3fU & (__Vtemp_h4d88e2aa__0[0x10U] 
                                             >> 2U)) 
                                   | (__Vtemp_he4076379__0[0x15U] 
                                      << 6U));
    __Vtemp_h1df58062__0[3U] = (((0x3fU & ((IData)(
                                                   (0x1100000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                       ^ vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x1200000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 | vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x1100000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                ^ vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x1000000000ULL 
                                                               | (QData)((IData)(
                                                                                ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                < vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                                                                 ? 1U
                                                                                 : 0U))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x1100000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                ^ vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h1df58062__0[7U] = ((0x3fU & (__Vtemp_he4076379__0[4U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_he4076379__0[4U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0xfffff000U 
                                                    & ((IData)(
                                                               (0xd00000000ULL 
                                                                | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__rs2data_wire))))) 
                                                       << 4U)) 
                                                   | (0xfff000U 
                                                      & ((IData)(
                                                                 ((0x3800000000fULL 
                                                                   | ((QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))) 
                                                                      << 6U)) 
                                                                  >> 0x20U)) 
                                                         >> 8U)))) 
                                      | (__Vtemp_ha92838a2__0[4U] 
                                         << 0x12U))));
    __Vtemp_h1df58062__0[0xfU] = ((0x3fU & (__Vtemp_hb9c3ec32__0[9U] 
                                            >> 8U)) 
                                  | ((0xfc0U & (__Vtemp_hb9c3ec32__0[9U] 
                                                >> 8U)) 
                                     | ((0x3f000U & 
                                         (__Vtemp_hb9c3ec32__0[9U] 
                                          >> 8U)) | 
                                        ((0xfc0000U 
                                          & (__Vtemp_hb9c3ec32__0[9U] 
                                             >> 8U)) 
                                         | (0xff000000U 
                                            & (__Vtemp_h4d88e2aa__0[8U] 
                                               << 4U))))));
    __Vtemp_h1df58062__0[0x12U] = ((0x3fU & (__Vtemp_he4076379__0[0xfU] 
                                             >> 0x14U)) 
                                   | ((0xfc0U & (__Vtemp_he4076379__0[0xfU] 
                                                 >> 0x14U)) 
                                      | (((0xf000U 
                                           & (__Vtemp_h8e372e85__0[8U] 
                                              >> 0x10U)) 
                                          | (0x30000U 
                                             & (__Vtemp_h8e372e85__0[9U] 
                                                << 0x10U))) 
                                         | (__Vtemp_ha92838a2__0[0xfU] 
                                            << 0x12U))));
    __Vtemp_h1df58062__0[0x13U] = ((0x3fU & (__Vtemp_ha92838a2__0[0xfU] 
                                             >> 0xeU)) 
                                   | ((0xfc0U & (__Vtemp_ha92838a2__0[0xfU] 
                                                 >> 0xeU)) 
                                      | ((0x3f000U 
                                          & (__Vtemp_ha92838a2__0[0xfU] 
                                             >> 0xeU)) 
                                         | (__Vtemp_ha92838a2__0[0x10U] 
                                            << 0x12U))));
    __Vtemp_h1df58062__0[0x14U] = ((0x3fU & (__Vtemp_ha92838a2__0[0x10U] 
                                             >> 0xeU)) 
                                   | (__Vtemp_hc23b3870__0[0x13U] 
                                      << 6U));
    __Vtemp_h7bd94b84__0[3U] = (((0x3fU & ((IData)(
                                                   (0x1200000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                       | vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x1300000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x1200000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                | vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x1100000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                ^ vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x1200000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                | vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h7bd94b84__0[7U] = ((0x3fU & (__Vtemp_hc23b3870__0[4U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_hc23b3870__0[4U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & ((IData)(
                                                           (0x3800000000fULL 
                                                            | ((QData)((IData)(
                                                                               (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))) 
                                                               << 6U))) 
                                                   >> 2U)) 
                                      | (__Vtemp_he4076379__0[4U] 
                                         << 0x12U))));
    __Vtemp_h7bd94b84__0[8U] = ((0x3fU & (__Vtemp_he4076379__0[4U] 
                                          >> 0xeU)) 
                                | (__Vtemp_h1df58062__0[7U] 
                                   << 6U));
    __Vtemp_h7bd94b84__0[9U] = ((__Vtemp_h1df58062__0[7U] 
                                 >> 0x1aU) | ((0xfc0U 
                                               & (__Vtemp_ha92838a2__0[4U] 
                                                  >> 8U)) 
                                              | (__Vtemp_hc23b3870__0[7U] 
                                                 << 0xcU)));
    __Vtemp_h7bd94b84__0[0xaU] = ((0x3fU & (__Vtemp_hc23b3870__0[7U] 
                                            >> 0x14U)) 
                                  | ((0xfc0U & (__Vtemp_hc23b3870__0[7U] 
                                                >> 0x14U)) 
                                     | ((0x3f000U & 
                                         (__Vtemp_hb9c3ec32__0[3U] 
                                          >> 2U)) | 
                                        (__Vtemp_he4076379__0[7U] 
                                         << 0x12U))));
    __Vtemp_h7bd94b84__0[0xbU] = ((0x3fU & (__Vtemp_he4076379__0[7U] 
                                            >> 0xeU)) 
                                  | ((0xfc0U & (__Vtemp_he4076379__0[7U] 
                                                >> 0xeU)) 
                                     | (__Vtemp_hc23b3870__0[9U] 
                                        << 0xcU)));
    __Vtemp_h7bd94b84__0[0xcU] = ((0x3fU & (__Vtemp_hc23b3870__0[9U] 
                                            >> 0x14U)) 
                                  | ((0xfc0U & (__Vtemp_hc23b3870__0[9U] 
                                                >> 0x14U)) 
                                     | (__Vtemp_hc23b3870__0[0xaU] 
                                        << 0xcU)));
    __Vtemp_h7bd94b84__0[0xfU] = ((0x3fU & (__Vtemp_ha92838a2__0[0xaU] 
                                            >> 8U)) 
                                  | ((0xfc0U & (__Vtemp_ha92838a2__0[0xaU] 
                                                >> 8U)) 
                                     | ((0x3f000U & 
                                         (__Vtemp_ha92838a2__0[0xaU] 
                                          >> 8U)) | 
                                        ((0xfc0000U 
                                          & (__Vtemp_ha92838a2__0[0xaU] 
                                             >> 8U)) 
                                         | ((0x3f000000U 
                                             & (__Vtemp_hb9c3ec32__0[8U] 
                                                >> 2U)) 
                                            | (__Vtemp_hb9c3ec32__0[9U] 
                                               << 0x1eU))))));
    __Vtemp_h7bd94b84__0[0x12U] = ((0x3fU & (__Vtemp_hc23b3870__0[0xfU] 
                                             >> 0x14U)) 
                                   | ((0xfc0U & (__Vtemp_hc23b3870__0[0xfU] 
                                                 >> 0x14U)) 
                                      | (((0xf000U 
                                           & (__Vtemp_h0b9fc768__0[8U] 
                                              >> 0x10U)) 
                                          | (0x30000U 
                                             & (__Vtemp_h0b9fc768__0[9U] 
                                                << 0x10U))) 
                                         | (__Vtemp_he4076379__0[0xfU] 
                                            << 0x12U))));
    __Vtemp_h70c392ef__0[3U] = (((0x3fU & ((IData)(
                                                   (0x1300000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                       & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x1400000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 << 
                                                                 (0x1fU 
                                                                  & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x1300000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x1200000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                | vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x1300000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h70c392ef__0[6U] = ((0x3fU & (__Vtemp_h1df58062__0[3U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h1df58062__0[3U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0x3ffff000U 
                                                    & ((IData)(
                                                               (0x1000000000ULL 
                                                                | (QData)((IData)(
                                                                                ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                < vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)
                                                                                 ? 1U
                                                                                 : 0U))))) 
                                                       >> 2U)) 
                                                   | (0xfff000U 
                                                      & ((IData)(
                                                                 ((0x1100000000ULL 
                                                                   | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                ^ vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))) 
                                                                  >> 0x20U)) 
                                                         >> 8U)))) 
                                      | (__Vtemp_hc23b3870__0[3U] 
                                         << 0x12U))));
    __Vtemp_h70c392ef__0[7U] = ((0x3fU & (__Vtemp_hc23b3870__0[3U] 
                                          >> 0xeU)) 
                                | ((0xfc0U & (__Vtemp_hc23b3870__0[3U] 
                                              >> 0xeU)) 
                                   | ((0x3f000U & (
                                                   __Vtemp_hc23b3870__0[3U] 
                                                   >> 0xeU)) 
                                      | (__Vtemp_hc23b3870__0[4U] 
                                         << 0x12U))));
    __Vtemp_h70c392ef__0[8U] = ((0x3fU & (__Vtemp_hc23b3870__0[4U] 
                                          >> 0xeU)) 
                                | (__Vtemp_h7bd94b84__0[7U] 
                                   << 6U));
    __Vtemp_h70c392ef__0[0xfU] = ((0x3fU & (__Vtemp_he4076379__0[0xaU] 
                                            >> 8U)) 
                                  | ((0xfc0U & (__Vtemp_he4076379__0[0xaU] 
                                                >> 8U)) 
                                     | ((0x3f000U & 
                                         (__Vtemp_he4076379__0[0xaU] 
                                          >> 8U)) | 
                                        ((0xfc0000U 
                                          & (__Vtemp_he4076379__0[0xaU] 
                                             >> 8U)) 
                                         | ((0x3f000000U 
                                             & (__Vtemp_ha92838a2__0[9U] 
                                                >> 2U)) 
                                            | (__Vtemp_ha92838a2__0[0xaU] 
                                               << 0x1eU))))));
    __Vtemp_h70c392ef__0[0x12U] = ((0x3fU & (__Vtemp_h1df58062__0[0xfU] 
                                             >> 0x14U)) 
                                   | ((0xfc0U & (__Vtemp_h1df58062__0[0xfU] 
                                                 >> 0x14U)) 
                                      | (((0xf000U 
                                           & (__Vtemp_h4d88e2aa__0[8U] 
                                              >> 0x10U)) 
                                          | (0x30000U 
                                             & (__Vtemp_h4d88e2aa__0[9U] 
                                                << 0x10U))) 
                                         | (__Vtemp_hc23b3870__0[0xfU] 
                                            << 0x12U))));
    __Vtemp_h70c392ef__0[0x14U] = ((__Vtemp_h7bd94b84__0[0x12U] 
                                    >> 0x1aU) | ((0xfc0U 
                                                  & (__Vtemp_he4076379__0[0xfU] 
                                                     >> 8U)) 
                                                 | (__Vtemp_h1df58062__0[0x12U] 
                                                    << 0xcU)));
    __Vtemp_h70c392ef__0[0x15U] = ((0x3fU & (__Vtemp_h1df58062__0[0x12U] 
                                             >> 0x14U)) 
                                   | ((0xfc0U & (__Vtemp_h1df58062__0[0x12U] 
                                                 >> 0x14U)) 
                                      | (__Vtemp_h1df58062__0[0x13U] 
                                         << 0xcU)));
    __Vtemp_h419fec24__0[3U] = (((0x3fU & ((IData)(
                                                   (0x1400000000ULL 
                                                    | (QData)((IData)(
                                                                      (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                       << 
                                                                       (0x1fU 
                                                                        & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))))) 
                                           >> 0x14U)) 
                                 | ((IData)(((0x1500000000ULL 
                                              | (QData)((IData)(
                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                             >> 0x20U)) 
                                    >> 0x1aU)) | ((0xfc0U 
                                                   & ((IData)(
                                                              (0x1400000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))))) 
                                                      >> 0x14U)) 
                                                  | (((IData)(
                                                              (0x1300000000ULL 
                                                               | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                                      << 0x12U) 
                                                     | ((IData)(
                                                                ((0x1400000000ULL 
                                                                  | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                << 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                                                 >> 0x20U)) 
                                                        << 0xcU))));
    __Vtemp_h419fec24__0[6U] = ((0x3fU & (__Vtemp_h7bd94b84__0[3U] 
                                          >> 0x14U)) 
                                | ((0xfc0U & (__Vtemp_h7bd94b84__0[3U] 
                                              >> 0x14U)) 
                                   | ((0x3f000U & (
                                                   (0x3ffff000U 
                                                    & ((IData)(
                                                               (0x1100000000ULL 
                                                                | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                ^ vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                                       >> 2U)) 
                                                   | (0xfff000U 
                                                      & ((IData)(
                                                                 ((0x1200000000ULL 
                                                                   | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                | vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))) 
                                                                  >> 0x20U)) 
                                                         >> 8U)))) 
                                      | (__Vtemp_h1df58062__0[3U] 
                                         << 0x12U))));
    __Vtemp_h419fec24__0[0x12U] = ((0x3fU & (__Vtemp_h7bd94b84__0[0xfU] 
                                             >> 0x14U)) 
                                   | ((0xfc0U & (__Vtemp_h7bd94b84__0[0xfU] 
                                                 >> 0x14U)) 
                                      | ((0x3f000U 
                                          & (__Vtemp_hb9c3ec32__0[9U] 
                                             << 0xaU)) 
                                         | (__Vtemp_h1df58062__0[0xfU] 
                                            << 0x12U))));
    __Vtemp_h419fec24__0[0x14U] = ((__Vtemp_h70c392ef__0[0x12U] 
                                    >> 0x1aU) | ((0xfc0U 
                                                  & (__Vtemp_hc23b3870__0[0xfU] 
                                                     >> 8U)) 
                                                 | (__Vtemp_h7bd94b84__0[0x12U] 
                                                    << 0xcU)));
    __Vtemp_h419fec24__0[0x15U] = ((0x3fU & (__Vtemp_h7bd94b84__0[0x12U] 
                                             >> 0x14U)) 
                                   | (__Vtemp_h70c392ef__0[0x14U] 
                                      << 6U));
    __Vtemp_h419fec24__0[0x19U] = ((0x3fU & (__Vtemp_hc23b3870__0[0x14U] 
                                             >> 8U)) 
                                   | ((0xfc0U & (__Vtemp_hc23b3870__0[0x14U] 
                                                 >> 8U)) 
                                      | ((0x3f000U 
                                          & (__Vtemp_hc23b3870__0[0x14U] 
                                             >> 8U)) 
                                         | ((0xfc0000U 
                                             & (__Vtemp_hc23b3870__0[0x14U] 
                                                >> 8U)) 
                                            | (__Vtemp_hc23b3870__0[0x15U] 
                                               << 0x18U)))));
    __Vtemp_h419fec24__0[0x1aU] = ((0x3fU & (__Vtemp_hc23b3870__0[0x15U] 
                                             >> 8U)) 
                                   | ((0xfc0U & (__Vtemp_hc23b3870__0[0x15U] 
                                                 >> 8U)) 
                                      | ((0x3f000U 
                                          & (__Vtemp_hc23b3870__0[0x15U] 
                                             >> 8U)) 
                                         | ((0xfc0000U 
                                             & (__Vtemp_hc23b3870__0[0x15U] 
                                                >> 8U)) 
                                            | (__Vtemp_hc23b3870__0[0x16U] 
                                               << 0x18U)))));
    __Vtemp_h419fec24__0[0x1bU] = ((0x3fU & (__Vtemp_hc23b3870__0[0x16U] 
                                             >> 8U)) 
                                   | (0xfc0U & (__Vtemp_hc23b3870__0[0x16U] 
                                                >> 8U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0U] 
        = (IData)((0x1600000000ULL | (QData)((IData)(
                                                     VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                                                    (0x1fU 
                                                                     & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[1U] 
        = (((IData)((0x1500000000ULL | (QData)((IData)(
                                                       (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))))) 
            << 6U) | (IData)(((0x1600000000ULL | (QData)((IData)(
                                                                 VL_SHIFTRS_III(32,32,5, vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire, 
                                                                                (0x1fU 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                              >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[2U] 
        = (((IData)((0x1500000000ULL | (QData)((IData)(
                                                       (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))))) 
            >> 0x1aU) | (((IData)((0x1400000000ULL 
                                   | (QData)((IData)(
                                                     (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                      << 
                                                      (0x1fU 
                                                       & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))))) 
                          << 0xcU) | ((IData)(((0x1500000000ULL 
                                                | (QData)((IData)(
                                                                  (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                   >> 
                                                                   (0x1fU 
                                                                    & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                               >> 0x20U)) 
                                      << 6U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[3U] 
        = __Vtemp_h419fec24__0[3U];
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[4U] 
        = ((0x3fU & (((IData)((0x1300000000ULL | (QData)((IData)(
                                                                 (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                  & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                      >> 0xeU) | ((IData)(((0x1400000000ULL 
                                            | (QData)((IData)(
                                                              (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                               << 
                                                               (0x1fU 
                                                                & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                           >> 0x20U)) 
                                  >> 0x14U))) | (__Vtemp_h70c392ef__0[3U] 
                                                 << 6U));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[5U] 
        = ((__Vtemp_h70c392ef__0[3U] >> 0x1aU) | ((0xfc0U 
                                                   & ((0xffffc0U 
                                                       & ((IData)(
                                                                  (0x1200000000ULL 
                                                                   | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                | vlSelf->__Vcellout__ysyx_23060286_top__immext_wire))))) 
                                                          >> 8U)) 
                                                      | (0x3ffc0U 
                                                         & ((IData)(
                                                                    ((0x1300000000ULL 
                                                                      | (QData)((IData)(
                                                                                (vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                                                                & vlSelf->__Vcellout__ysyx_23060286_top__immext_wire)))) 
                                                                     >> 0x20U)) 
                                                            >> 0xeU)))) 
                                                  | (__Vtemp_h7bd94b84__0[3U] 
                                                     << 0xcU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[6U] 
        = __Vtemp_h419fec24__0[6U];
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[7U] 
        = ((0x3fU & (__Vtemp_h1df58062__0[3U] >> 0xeU)) 
           | (__Vtemp_h70c392ef__0[6U] << 6U));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[8U] 
        = ((__Vtemp_h70c392ef__0[6U] >> 0x1aU) | (__Vtemp_h70c392ef__0[7U] 
                                                  << 6U));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[9U] 
        = ((__Vtemp_h70c392ef__0[7U] >> 0x1aU) | (__Vtemp_h70c392ef__0[8U] 
                                                  << 6U));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xaU] 
        = ((__Vtemp_h70c392ef__0[8U] >> 0x1aU) | ((0xfc0U 
                                                   & (__Vtemp_h7bd94b84__0[7U] 
                                                      >> 0x14U)) 
                                                  | (__Vtemp_h7bd94b84__0[8U] 
                                                     << 0xcU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xbU] 
        = ((0x3fU & (__Vtemp_h7bd94b84__0[8U] >> 0x14U)) 
           | ((0xfc0U & (__Vtemp_h7bd94b84__0[8U] >> 0x14U)) 
              | (__Vtemp_h7bd94b84__0[9U] << 0xcU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xcU] 
        = ((0x3fU & (__Vtemp_h7bd94b84__0[9U] >> 0x14U)) 
           | ((0xfc0U & (__Vtemp_h7bd94b84__0[9U] >> 0x14U)) 
              | (__Vtemp_h7bd94b84__0[0xaU] << 0xcU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xdU] 
        = ((0x3fU & (__Vtemp_h7bd94b84__0[0xaU] >> 0x14U)) 
           | ((0xfc0U & (__Vtemp_h7bd94b84__0[0xaU] 
                         >> 0x14U)) | (__Vtemp_h7bd94b84__0[0xbU] 
                                       << 0xcU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xeU] 
        = ((0x3fU & (__Vtemp_h7bd94b84__0[0xbU] >> 0x14U)) 
           | ((0xfc0U & (__Vtemp_h7bd94b84__0[0xbU] 
                         >> 0x14U)) | (__Vtemp_h7bd94b84__0[0xcU] 
                                       << 0xcU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xfU] 
        = ((0x3fU & (__Vtemp_h7bd94b84__0[0xcU] >> 0x14U)) 
           | ((0xfc0U & (__Vtemp_h7bd94b84__0[0xcU] 
                         >> 0x14U)) | ((0x3f000U & 
                                        (__Vtemp_hc23b3870__0[0xaU] 
                                         >> 8U)) | 
                                       ((0xfc0000U 
                                         & (__Vtemp_hc23b3870__0[0xaU] 
                                            >> 8U)) 
                                        | ((0x3f000000U 
                                            & (__Vtemp_he4076379__0[9U] 
                                               >> 2U)) 
                                           | (__Vtemp_he4076379__0[0xaU] 
                                              << 0x1eU))))));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x10U] 
        = ((0x3fU & (__Vtemp_he4076379__0[0xaU] >> 2U)) 
           | (__Vtemp_h70c392ef__0[0xfU] << 6U));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x11U] 
        = ((__Vtemp_h70c392ef__0[0xfU] >> 0x1aU) | 
           ((0xfc0U & (__Vtemp_ha92838a2__0[0xaU] << 4U)) 
            | (__Vtemp_h7bd94b84__0[0xfU] << 0xcU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x12U] 
        = __Vtemp_h419fec24__0[0x12U];
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x13U] 
        = ((0x3fU & (__Vtemp_h1df58062__0[0xfU] >> 0xeU)) 
           | (__Vtemp_h70c392ef__0[0x12U] << 6U));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x14U] 
        = __Vtemp_h419fec24__0[0x14U];
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x15U] 
        = __Vtemp_h419fec24__0[0x15U];
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x16U] 
        = ((__Vtemp_h70c392ef__0[0x14U] >> 0x1aU) | 
           (__Vtemp_h70c392ef__0[0x15U] << 6U));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x17U] 
        = ((__Vtemp_h70c392ef__0[0x15U] >> 0x1aU) | 
           ((0xfc0U & (__Vtemp_h1df58062__0[0x13U] 
                       >> 0xeU)) | ((0x3f000U & (__Vtemp_h1df58062__0[0x13U] 
                                                 >> 0xeU)) 
                                    | (__Vtemp_h1df58062__0[0x14U] 
                                       << 0x12U))));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x18U] 
        = ((0x3fU & (__Vtemp_h1df58062__0[0x14U] >> 0xeU)) 
           | ((0xfc0U & (__Vtemp_h1df58062__0[0x14U] 
                         >> 0xeU)) | ((0x3f000U & (
                                                   __Vtemp_h1df58062__0[0x14U] 
                                                   >> 0xeU)) 
                                      | ((0xfc0000U 
                                          & (__Vtemp_hc23b3870__0[0x13U] 
                                             >> 8U)) 
                                         | (__Vtemp_hc23b3870__0[0x14U] 
                                            << 0x18U)))));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x19U] 
        = __Vtemp_h419fec24__0[0x19U];
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x1aU] 
        = __Vtemp_h419fec24__0[0x1aU];
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x1bU] 
        = __Vtemp_h419fec24__0[0x1bU];
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4[0U] 
        = (IData)((0x300000000ULL | (QData)((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__dnpcjal))));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4[1U] 
        = ((0xfffffff0U & ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                            + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire) 
                           << 3U)) | (IData)(((0x300000000ULL 
                                               | (QData)((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__dnpcjal))) 
                                              >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4[2U] 
        = (0x30U | ((vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__dnpcjal 
                     << 6U) | ((vlSelf->__Vcellout__ysyx_23060286_top__rs1data_wire 
                                + vlSelf->__Vcellout__ysyx_23060286_top__immext_wire) 
                               >> 0x1dU)));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4[3U] 
        = (0x100U | (vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__dnpcjal 
                     >> 0x1aU));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0U]))));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[1U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[2U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[1U])) 
                                            >> 6U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[2U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[3U])) 
                               << 0x14U) | ((QData)((IData)(
                                                            vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[2U])) 
                                            >> 0xcU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[3U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[4U])) 
                               << 0xeU) | ((QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[3U])) 
                                           >> 0x12U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[4U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[5U])) 
                               << 8U) | ((QData)((IData)(
                                                         vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[4U])) 
                                         >> 0x18U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[5U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[7U])) 
                               << 0x22U) | (((QData)((IData)(
                                                             vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[6U])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[5U])) 
                                               >> 0x1eU))));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[6U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[8U])) 
                               << 0x1cU) | ((QData)((IData)(
                                                            vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[7U])) 
                                            >> 4U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[7U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[9U])) 
                               << 0x16U) | ((QData)((IData)(
                                                            vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[8U])) 
                                            >> 0xaU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[8U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xaU])) 
                               << 0x10U) | ((QData)((IData)(
                                                            vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[9U])) 
                                            >> 0x10U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[9U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xbU])) 
                               << 0xaU) | ((QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xaU])) 
                                           >> 0x16U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0xaU] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xdU])) 
                               << 0x24U) | (((QData)((IData)(
                                                             vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xcU])) 
                                             << 4U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xbU])) 
                                               >> 0x1cU))));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0xbU] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xeU])) 
                               << 0x1eU) | ((QData)((IData)(
                                                            vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xdU])) 
                                            >> 2U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0xcU] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xfU])) 
                               << 0x18U) | ((QData)((IData)(
                                                            vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xeU])) 
                                            >> 8U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0xdU] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x10U])) 
                               << 0x12U) | ((QData)((IData)(
                                                            vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0xfU])) 
                                            >> 0xeU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0xeU] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x11U])) 
                               << 0xcU) | ((QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x10U])) 
                                           >> 0x14U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0xfU] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x12U])) 
                               << 6U) | ((QData)((IData)(
                                                         vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x11U])) 
                                         >> 0x1aU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0x10U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x14U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x13U]))));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0x11U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x15U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x14U])) 
                                            >> 6U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0x12U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x16U])) 
                               << 0x14U) | ((QData)((IData)(
                                                            vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x15U])) 
                                            >> 0xcU)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0x13U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x17U])) 
                               << 0xeU) | ((QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x16U])) 
                                           >> 0x12U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0x14U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x18U])) 
                               << 8U) | ((QData)((IData)(
                                                         vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x17U])) 
                                         >> 0x18U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0x15U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x1aU])) 
                               << 0x22U) | (((QData)((IData)(
                                                             vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x19U])) 
                                             << 2U) 
                                            | ((QData)((IData)(
                                                               vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x18U])) 
                                               >> 0x1eU))));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list[0x16U] 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x1bU])) 
                               << 0x1cU) | ((QData)((IData)(
                                                            vlSelf->ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut[0x1aU])) 
                                            >> 4U)));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list[0U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4[0U]))));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list[1U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4[2U])) 
                              << 0x1dU) | ((QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4[1U])) 
                                           >> 3U)));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list[2U] 
        = (0x7ffffffffULL & (((QData)((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4[3U])) 
                              << 0x1aU) | ((QData)((IData)(
                                                           vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4[2U])) 
                                           >> 6U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[1U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [1U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[1U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [1U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[2U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [2U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[2U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [2U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[3U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [3U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[3U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [3U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[4U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [4U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[4U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [4U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[5U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [5U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[5U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [5U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[6U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [6U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[6U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [6U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[7U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [7U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[7U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [7U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[8U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [8U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[8U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [8U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[9U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [9U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[9U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [9U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0xaU] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0xaU]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0xaU] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0xaU] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0xbU] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0xbU]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0xbU] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0xbU] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0xcU] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0xcU]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0xcU] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0xcU] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0xdU] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0xdU]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0xdU] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0xdU] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0xeU] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0xeU]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0xeU] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0xeU] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0xfU] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0xfU]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0xfU] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0xfU] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0x10U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0x10U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0x10U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0x10U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0x11U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0x11U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0x11U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0x11U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0x12U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0x12U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0x12U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0x12U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0x13U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0x13U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0x13U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0x13U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0x14U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0x14U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0x14U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0x14U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0x15U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0x15U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0x15U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0x15U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list[0x16U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                  [0x16U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list[0x16U] 
        = (0x3fU & (IData)((vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list
                            [0x16U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list[0U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list
                  [0U]);
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list[0U] 
        = (7U & (IData)((vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list
                         [0U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list[1U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list
                  [1U]);
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list[1U] 
        = (7U & (IData)((vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list
                         [1U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list[2U] 
        = (IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list
                  [2U]);
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list[2U] 
        = (7U & (IData)((vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list
                         [2U] >> 0x20U)));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                       == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
           == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [2U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [3U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [3U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [3U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [4U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [4U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [4U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [5U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [5U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [5U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [6U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [6U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [6U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [7U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [7U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [7U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [8U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [8U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [8U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [9U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [9U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [9U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0xaU]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0xaU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0xaU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0xbU]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0xbU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0xbU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0xcU]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0xcU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0xcU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0xdU]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0xdU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0xdU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0xeU]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0xeU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0xeU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0xfU]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0xfU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0xfU]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0x10U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0x10U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0x10U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0x11U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0x11U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0x11U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0x12U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0x12U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0x12U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0x13U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0x13U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0x13U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0x14U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0x14U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0x14U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0x15U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0x15U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0x15U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
                          == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
                          [0x16U]))) & vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list
              [0x16U]));
    vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit) 
           | ((IData)(vlSelf->__Vcellout__ysyx_23060286_top__alucotrol_wire) 
              == vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list
              [0x16U]));
    vlSelf->__Vcellout__ysyx_23060286_top__rddata_wire 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit)
            ? vlSelf->ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out
            : 0U);
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber2) 
                       == vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list
                       [0U]))) & vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber2) 
           == vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list
           [0U]);
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber2) 
                          == vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list
                          [1U]))) & vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber2) 
              == vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list
              [1U]));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__lut_out 
        = (vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber2) 
                          == vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list
                          [2U]))) & vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list
              [2U]));
    vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__hit 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__hit) 
           | ((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber2) 
              == vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list
              [2U]));
    vlSelf->__Vcellout__ysyx_23060286_top__npc_wire 
        = ((IData)(vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__hit)
            ? vlSelf->ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__lut_out
            : ((IData)(4U) + vlSelf->__Vcellout__ysyx_23060286_top__pc_wire));
    VL_ASSIGN_SII(32,vlSelf->rddata_wire, vlSelf->__Vcellout__ysyx_23060286_top__rddata_wire);
    VL_ASSIGN_SII(32,vlSelf->npc_wire, vlSelf->__Vcellout__ysyx_23060286_top__npc_wire);
}

void Vysyx_23060286_top___024root___eval(Vysyx_23060286_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060286_top___024root___eval\n"); );
    // Body
    Vysyx_23060286_top___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->__Vcellinp__ysyx_23060286_top__clk) 
         & (~ (IData)(vlSelf->__Vclklast__TOP____Vcellinp__ysyx_23060286_top__clk)))) {
        Vysyx_23060286_top___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
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
