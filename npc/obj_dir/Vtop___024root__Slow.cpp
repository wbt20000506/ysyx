// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(Vtop__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , clk("clk")
    , rst("rst")
    , wen_wire("wen_wire")
    , alucotrol_wire("alucotrol_wire")
    , immtype_wire("immtype_wire")
    , of_wire("of_wire")
    , zf_wire("zf_wire")
    , nf_wire("nf_wire")
    , cf_wire("cf_wire")
    , pc_wire("pc_wire")
    , rddata_wire("rddata_wire")
    , immext_wire("immext_wire")
    , rs1data_wire("rs1data_wire")
    , inst("inst")
    , rs2data_wire("rs2data_wire")
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop___024root::~Vtop___024root() {
}
