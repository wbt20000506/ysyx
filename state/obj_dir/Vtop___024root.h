// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__top__clk;
    CData/*0:0*/ __Vcellinp__top__reset;
    CData/*0:0*/ __Vcellinp__top__ps2_clk;
    CData/*0:0*/ __Vcellinp__top__ps2_data;
    CData/*3:0*/ top__DOT__count;
    CData/*2:0*/ top__DOT__ps2_clk_sync;
    CData/*0:0*/ top__DOT____Vlvbound_h094b76d9__0;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__top__clk;
    SData/*9:0*/ __Vcellout__top__buffer;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    sc_in<bool> ps2_data;
    sc_in<bool> clk;
    sc_in<bool> ps2_clk;
    sc_in<bool> reset;
    sc_out<uint32_t> buffer;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
