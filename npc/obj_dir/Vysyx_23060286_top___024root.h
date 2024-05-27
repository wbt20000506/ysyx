// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060286_top.h for the primary calling header

#ifndef VERILATED_VYSYX_23060286_TOP___024ROOT_H_
#define VERILATED_VYSYX_23060286_TOP___024ROOT_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

class Vysyx_23060286_top__Syms;
VL_MODULE(Vysyx_23060286_top___024root) {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vcellinp__ysyx_23060286_top__clk;
    CData/*2:0*/ __Vcellout__ysyx_23060286_top__alucontrol;
    CData/*1:0*/ __Vcellout__ysyx_23060286_top__immsrc;
    CData/*1:0*/ __Vcellout__ysyx_23060286_top__resultsrc;
    CData/*0:0*/ __Vcellout__ysyx_23060286_top__auipc;
    CData/*0:0*/ __Vcellout__ysyx_23060286_top__jalr;
    CData/*0:0*/ __Vcellout__ysyx_23060286_top__regwrite;
    CData/*0:0*/ __Vcellout__ysyx_23060286_top__alusrc;
    CData/*0:0*/ __Vcellout__ysyx_23060286_top__memwrite;
    CData/*0:0*/ __Vcellout__ysyx_23060286_top__pcsrc;
    CData/*0:0*/ __Vcellinp__ysyx_23060286_top__rst;
    CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__branch;
    CData/*1:0*/ ysyx_23060286_top__DOT__IDU__DOT__aluop;
    CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__jump;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__ysyx_23060286_top__clk;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__srca_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__result_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__dnpc_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__aluresult_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__srcb_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__immext_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__rs2data_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__rs1data_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__pc_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__npc_wire;
    IData/*31:0*/ __Vcellinp__ysyx_23060286_top__readdata_wire;
    IData/*31:0*/ __Vcellinp__ysyx_23060286_top__inst_wire;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060286_top__DOT__GRP__DOT__rf;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    sc_in<bool> clk;
    sc_in<bool> rst;
    sc_out<bool> pcsrc;
    sc_out<bool> memwrite;
    sc_out<bool> alusrc;
    sc_out<bool> regwrite;
    sc_out<bool> zero;
    sc_out<bool> jalr;
    sc_out<bool> auipc;
    sc_out<uint32_t> resultsrc;
    sc_out<uint32_t> immsrc;
    sc_out<uint32_t> alucontrol;
    sc_in<uint32_t> inst_wire;
    sc_in<uint32_t> readdata_wire;
    sc_out<uint32_t> npc_wire;
    sc_out<uint32_t> pc_wire;
    sc_out<uint32_t> snpc_wire;
    sc_out<uint32_t> rs1data_wire;
    sc_out<uint32_t> rs2data_wire;
    sc_out<uint32_t> immext_wire;
    sc_out<uint32_t> srcb_wire;
    sc_out<uint32_t> aluresult_wire;
    sc_out<uint32_t> dnpc_wire;
    sc_out<uint32_t> result_wire;
    sc_out<uint32_t> srca_wire;

    // INTERNAL VARIABLES
    Vysyx_23060286_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060286_top___024root(Vysyx_23060286_top__Syms* symsp, const char* name);
    ~Vysyx_23060286_top___024root();
    VL_UNCOPYABLE(Vysyx_23060286_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
