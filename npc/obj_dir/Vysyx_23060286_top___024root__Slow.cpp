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
    , wen_wire("wen_wire")
    , alucotrol_wire("alucotrol_wire")
    , immtype_wire("immtype_wire")
    , branch_wire("branch_wire")
    , zero_wire("zero_wire")
    , jump_wire("jump_wire")
    , pc_wire("pc_wire")
    , rddata_wire("rddata_wire")
    , immext_wire("immext_wire")
    , rs1data_wire("rs1data_wire")
    , inst("inst")
    , rs2data_wire("rs2data_wire")
    , npc_wire("npc_wire")
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
