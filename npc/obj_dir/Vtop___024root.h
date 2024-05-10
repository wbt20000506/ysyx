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
    CData/*0:0*/ __Vcellinp__top__rst;
    CData/*0:0*/ top__DOT__ALU__DOT__aluxmux__DOT__hit;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__top__clk;
    IData/*31:0*/ __Vcellinp__top__inst;
    IData/*31:0*/ __Vcellout__top__rs1data_wire;
    IData/*31:0*/ __Vcellout__top__rddata_wire;
    IData/*31:0*/ __Vcellout__top__pc_wire;
    IData/*31:0*/ top__DOT__snpc_wire;
    IData/*31:0*/ top__DOT__ALU__DOT__raddsub;
    IData/*31:0*/ top__DOT__ALU__DOT__b2;
    VlWide<5>/*139:0*/ top__DOT__ALU__DOT____Vcellinp__aluxmux____pinNumber4;
    IData/*31:0*/ top__DOT__ALU__DOT__aluxmux__DOT__lut_out;
    IData/*31:0*/ top__DOT__IMM__DOT__immI;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__GPR__DOT__rf;
    VlUnpacked<QData/*34:0*/, 4> top__DOT__ALU__DOT__aluxmux__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 4> top__DOT__ALU__DOT__aluxmux__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 4> top__DOT__ALU__DOT__aluxmux__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    sc_in<bool> clk;
    sc_in<bool> rst;
    sc_out<bool> wen_wire;
    sc_out<uint32_t> alucotrol_wire;
    sc_out<uint32_t> immtype_wire;
    sc_out<bool> of_wire;
    sc_out<bool> zf_wire;
    sc_out<bool> nf_wire;
    sc_out<bool> cf_wire;
    sc_out<uint32_t> pc_wire;
    sc_out<uint32_t> rddata_wire;
    sc_out<uint32_t> immext_wire;
    sc_out<uint32_t> rs1data_wire;
    sc_in<uint32_t> inst;
    sc_out<uint32_t> rs2data_wire;

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
