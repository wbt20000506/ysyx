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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __Vcellinp__ysyx_23060286_top__clk;
        CData/*0:0*/ __Vcellinp__ysyx_23060286_top__rst;
        CData/*0:0*/ ysyx_23060286_top__DOT__clk;
        CData/*0:0*/ ysyx_23060286_top__DOT__rst;
        CData/*0:0*/ ysyx_23060286_top__DOT__pcsrc;
        CData/*0:0*/ ysyx_23060286_top__DOT__alusrc;
        CData/*0:0*/ ysyx_23060286_top__DOT__regwrite;
        CData/*0:0*/ ysyx_23060286_top__DOT__zero;
        CData/*0:0*/ ysyx_23060286_top__DOT__jalr;
        CData/*0:0*/ ysyx_23060286_top__DOT__auipc;
        CData/*1:0*/ ysyx_23060286_top__DOT__resultsrc;
        CData/*1:0*/ ysyx_23060286_top__DOT__immsrc;
        CData/*3:0*/ ysyx_23060286_top__DOT__memwrite;
        CData/*3:0*/ ysyx_23060286_top__DOT__alucontrol;
        CData/*3:0*/ ysyx_23060286_top__DOT__ALU__DOT__alucontrol;
        CData/*2:0*/ ysyx_23060286_top__DOT__ALU__DOT__f3;
        CData/*0:0*/ ysyx_23060286_top__DOT__ALU__DOT__zero;
        CData/*0:0*/ ysyx_23060286_top__DOT__SRCA__DOT__auipc;
        CData/*0:0*/ ysyx_23060286_top__DOT__ALUMUX__DOT__alusrc;
        CData/*0:0*/ ysyx_23060286_top__DOT__DNPC__DOT__jalr;
        CData/*6:0*/ ysyx_23060286_top__DOT__IDU__DOT__op;
        CData/*2:0*/ ysyx_23060286_top__DOT__IDU__DOT__f3;
        CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__f7;
        CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__zero;
        CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__jalr;
        CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__pcsrc;
        CData/*1:0*/ ysyx_23060286_top__DOT__IDU__DOT__resultsrc;
        CData/*3:0*/ ysyx_23060286_top__DOT__IDU__DOT__memwrite;
        CData/*3:0*/ ysyx_23060286_top__DOT__IDU__DOT__alucontrol;
        CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__alusrc;
        CData/*1:0*/ ysyx_23060286_top__DOT__IDU__DOT__immsrc;
        CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__regwrite;
        CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__auipc;
        CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__branch;
        CData/*1:0*/ ysyx_23060286_top__DOT__IDU__DOT__aluop;
        CData/*0:0*/ ysyx_23060286_top__DOT__IDU__DOT__jump;
        CData/*0:0*/ ysyx_23060286_top__DOT__Imm__DOT__auipc;
        CData/*1:0*/ ysyx_23060286_top__DOT__Imm__DOT__immsrc;
        CData/*0:0*/ ysyx_23060286_top__DOT__PC__DOT__clk;
        CData/*0:0*/ ysyx_23060286_top__DOT__PC__DOT__rst;
        CData/*0:0*/ ysyx_23060286_top__DOT__PCMUX__DOT__pcsrc;
        CData/*0:0*/ ysyx_23060286_top__DOT__GRP__DOT__clk;
        CData/*4:0*/ ysyx_23060286_top__DOT__GRP__DOT__waddr;
        CData/*4:0*/ ysyx_23060286_top__DOT__GRP__DOT__r1addr;
        CData/*4:0*/ ysyx_23060286_top__DOT__GRP__DOT__r2addr;
        CData/*0:0*/ ysyx_23060286_top__DOT__GRP__DOT__wen;
        CData/*1:0*/ ysyx_23060286_top__DOT__RESMUX__DOT__resultsrc;
        CData/*0:0*/ __Vclklast__TOP____Vcellinp__ysyx_23060286_top__clk;
        IData/*31:0*/ __Vcellinp__ysyx_23060286_top__readdata_wire;
        IData/*31:0*/ __Vcellinp__ysyx_23060286_top__inst_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__inst_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__readdata_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__npc_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__pc_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__snpc_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__rs1data_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__rs2data_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__immext_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__srcb_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__aluresult_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__dnpc_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__result_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__srca_wire;
        IData/*31:0*/ ysyx_23060286_top__DOT__ALU__DOT__srca;
    };
    struct {
        IData/*31:0*/ ysyx_23060286_top__DOT__ALU__DOT__srcb;
        IData/*31:0*/ ysyx_23060286_top__DOT__ALU__DOT__aluresult;
        IData/*31:0*/ ysyx_23060286_top__DOT__SRCA__DOT__rs1data;
        IData/*31:0*/ ysyx_23060286_top__DOT__SRCA__DOT__pc;
        IData/*31:0*/ ysyx_23060286_top__DOT__SRCA__DOT__srca;
        IData/*31:0*/ ysyx_23060286_top__DOT__ALUMUX__DOT__rs2data;
        IData/*31:0*/ ysyx_23060286_top__DOT__ALUMUX__DOT__immext;
        IData/*31:0*/ ysyx_23060286_top__DOT__ALUMUX__DOT__srcb;
        IData/*31:0*/ ysyx_23060286_top__DOT__DNPC__DOT__pc;
        IData/*31:0*/ ysyx_23060286_top__DOT__DNPC__DOT__immext;
        IData/*31:0*/ ysyx_23060286_top__DOT__DNPC__DOT__rs1data;
        IData/*31:0*/ ysyx_23060286_top__DOT__DNPC__DOT__dnpc;
        IData/*24:0*/ ysyx_23060286_top__DOT__Imm__DOT__imm;
        IData/*31:0*/ ysyx_23060286_top__DOT__Imm__DOT__immext;
        IData/*31:0*/ ysyx_23060286_top__DOT__PC__DOT__next_pc;
        IData/*31:0*/ ysyx_23060286_top__DOT__PC__DOT__pc;
        IData/*31:0*/ ysyx_23060286_top__DOT__PCMUX__DOT__snpc;
        IData/*31:0*/ ysyx_23060286_top__DOT__PCMUX__DOT__dnpc;
        IData/*31:0*/ ysyx_23060286_top__DOT__PCMUX__DOT__next_pc;
        IData/*31:0*/ ysyx_23060286_top__DOT__GRP__DOT__rddata;
        IData/*31:0*/ ysyx_23060286_top__DOT__GRP__DOT__rs1data;
        IData/*31:0*/ ysyx_23060286_top__DOT__GRP__DOT__rs2data;
        IData/*31:0*/ ysyx_23060286_top__DOT__RESMUX__DOT__aluresult;
        IData/*31:0*/ ysyx_23060286_top__DOT__RESMUX__DOT__readdata;
        IData/*31:0*/ ysyx_23060286_top__DOT__RESMUX__DOT__snpc;
        IData/*31:0*/ ysyx_23060286_top__DOT__RESMUX__DOT__result;
        IData/*31:0*/ ysyx_23060286_top__DOT__SNPC__DOT__pc;
        IData/*31:0*/ ysyx_23060286_top__DOT__SNPC__DOT__snpc;
        VlUnpacked<IData/*31:0*/, 32> ysyx_23060286_top__DOT__GRP__DOT__rf;
    };
    sc_in<bool> clk;
    sc_in<bool> rst;
    sc_out<bool> pcsrc;
    sc_out<bool> alusrc;
    sc_out<bool> regwrite;
    sc_out<bool> zero;
    sc_out<bool> jalr;
    sc_out<bool> auipc;
    sc_out<uint32_t> resultsrc;
    sc_out<uint32_t> immsrc;
    sc_out<uint32_t> memwrite;
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
