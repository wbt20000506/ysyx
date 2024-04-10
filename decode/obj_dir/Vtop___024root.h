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
    CData/*3:0*/ __Vcellout__top__y;
    CData/*0:0*/ __Vcellinp__top__en;
    CData/*1:0*/ __Vcellinp__top__x;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    sc_in<uint32_t> x;
    sc_in<bool> en;
    sc_out<uint32_t> y;

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
