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
    CData/*7:0*/ __Vcellout__top__h;
    CData/*7:0*/ __Vcellout__top__out;
    CData/*7:0*/ __Vcellinp__top__in;
    CData/*0:0*/ top__DOT__a;
    CData/*0:0*/ top__DOT__i;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__top__clk;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_in<uint32_t> in;
    sc_in<bool> clk;
    sc_out<uint32_t> out;
    sc_out<uint32_t> h;

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
