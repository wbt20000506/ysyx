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
    CData/*0:0*/ __Vcellout__ysyx_23060286_top__jump_wire;
    CData/*0:0*/ __Vcellout__ysyx_23060286_top__zero_wire;
    CData/*0:0*/ __Vcellout__ysyx_23060286_top__branch_wire;
    CData/*2:0*/ __Vcellout__ysyx_23060286_top__immtype_wire;
    CData/*5:0*/ __Vcellout__ysyx_23060286_top__alucotrol_wire;
    CData/*0:0*/ __Vcellout__ysyx_23060286_top__wen_wire;
    CData/*0:0*/ __Vcellinp__ysyx_23060286_top__rst;
    CData/*2:0*/ ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber2;
    CData/*0:0*/ ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__hit;
    CData/*2:0*/ ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__lut_out;
    CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__hit;
    CData/*5:0*/ ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__lut_out;
    CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__hit;
    CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__lut_out;
    CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__hit;
    CData/*0:0*/ ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__hit;
    CData/*0:0*/ ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__hit;
    CData/*0:0*/ __Vclklast__TOP____Vcellinp__ysyx_23060286_top__clk;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__npc_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__rs2data_wire;
    IData/*31:0*/ __Vcellinp__ysyx_23060286_top__inst;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__rs1data_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__immext_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__rddata_wire;
    IData/*31:0*/ __Vcellout__ysyx_23060286_top__pc_wire;
    IData/*31:0*/ ysyx_23060286_top__DOT__SNPC__DOT__dnpcjal;
    VlWide<4>/*104:0*/ ysyx_23060286_top__DOT__SNPC__DOT____Vcellinp__snpc_mux____pinNumber4;
    IData/*31:0*/ ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__lut_out;
    IData/*16:0*/ ysyx_23060286_top__DOT__IDU__DOT____Vcellinp__aluctrl_mux__key;
    VlWide<28>/*873:0*/ ysyx_23060286_top__DOT__ALU__DOT____Vcellinp__alu_mux__lut;
    IData/*31:0*/ ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__lut_out;
    VlWide<6>/*174:0*/ ysyx_23060286_top__DOT__IMM__DOT____Vcellinp__imm_mux__lut;
    IData/*31:0*/ ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__lut_out;
    VlUnpacked<QData/*34:0*/, 3> ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 3> ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 3> ysyx_23060286_top__DOT__SNPC__DOT__snpc_mux__DOT__data_list;
    VlUnpacked<IData/*31:0*/, 32> ysyx_23060286_top__DOT__GPR__DOT__rf;
    VlUnpacked<SData/*9:0*/, 11> ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 11> ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__key_list;
    VlUnpacked<CData/*2:0*/, 11> ysyx_23060286_top__DOT__IDU__DOT__opmux__DOT__data_list;
    VlUnpacked<IData/*22:0*/, 47> ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__pair_list;
    VlUnpacked<IData/*16:0*/, 47> ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__key_list;
    VlUnpacked<CData/*5:0*/, 47> ysyx_23060286_top__DOT__IDU__DOT__aluctrl_mux__DOT__data_list;
    VlUnpacked<CData/*7:0*/, 8> ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 8> ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__key_list;
    VlUnpacked<CData/*0:0*/, 8> ysyx_23060286_top__DOT__IDU__DOT__regwrite_mux__DOT__data_list;
    VlUnpacked<QData/*37:0*/, 23> ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__pair_list;
    VlUnpacked<CData/*5:0*/, 23> ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 23> ysyx_23060286_top__DOT__ALU__DOT__alu_mux__DOT__data_list;
    VlUnpacked<QData/*34:0*/, 5> ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__pair_list;
    VlUnpacked<CData/*2:0*/, 5> ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 5> ysyx_23060286_top__DOT__IMM__DOT__imm_mux__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    sc_in<bool> clk;
    sc_in<bool> rst;
    sc_out<bool> wen_wire;
    sc_out<uint32_t> alucotrol_wire;
    sc_out<uint32_t> immtype_wire;
    sc_out<bool> branch_wire;
    sc_out<bool> zero_wire;
    sc_out<bool> jump_wire;
    sc_out<uint32_t> pc_wire;
    sc_out<uint32_t> rddata_wire;
    sc_out<uint32_t> immext_wire;
    sc_out<uint32_t> rs1data_wire;
    sc_in<uint32_t> inst;
    sc_out<uint32_t> rs2data_wire;
    sc_out<uint32_t> npc_wire;

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
