// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_23060286_top.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vysyx_23060286_top__Syms.h"
#include "Vysyx_23060286_top___024root.h"

void Vysyx_23060286_top___024root___ctor_var_reset(Vysyx_23060286_top___024root* vlSelf);

Vysyx_23060286_top___024root::Vysyx_23060286_top___024root(Vysyx_23060286_top__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , clk("clk")
    , rst("rst")
    , pcsrc("pcsrc")
    , memwrite("memwrite")
    , alusrc("alusrc")
    , regwrite("regwrite")
    , zero("zero")
    , jalr("jalr")
    , auipc("auipc")
    , resultsrc("resultsrc")
    , immsrc("immsrc")
    , alucontrol("alucontrol")
    , inst_wire("inst_wire")
    , readdata_wire("readdata_wire")
    , npc_wire("npc_wire")
    , pc_wire("pc_wire")
    , snpc_wire("snpc_wire")
    , rs1data_wire("rs1data_wire")
    , rs2data_wire("rs2data_wire")
    , immext_wire("immext_wire")
    , srcb_wire("srcb_wire")
    , aluresult_wire("aluresult_wire")
    , dnpc_wire("dnpc_wire")
    , result_wire("result_wire")
    , srca_wire("srca_wire")
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vysyx_23060286_top___024root___ctor_var_reset(this);
}

void Vysyx_23060286_top___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vysyx_23060286_top___024root::~Vysyx_23060286_top___024root() {
}
