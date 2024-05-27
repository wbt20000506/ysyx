// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_23060286_top.h"
#include "Vysyx_23060286_top__Syms.h"
#include "verilated_vcd_sc.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vysyx_23060286_top::Vysyx_23060286_top(sc_module_name /* unused */)
    : vlSymsp{new Vysyx_23060286_top__Syms(nullptr, name(), this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , pcsrc{vlSymsp->TOP.pcsrc}
    , memwrite{vlSymsp->TOP.memwrite}
    , alusrc{vlSymsp->TOP.alusrc}
    , regwrite{vlSymsp->TOP.regwrite}
    , zero{vlSymsp->TOP.zero}
    , jalr{vlSymsp->TOP.jalr}
    , auipc{vlSymsp->TOP.auipc}
    , resultsrc{vlSymsp->TOP.resultsrc}
    , immsrc{vlSymsp->TOP.immsrc}
    , alucontrol{vlSymsp->TOP.alucontrol}
    , inst_wire{vlSymsp->TOP.inst_wire}
    , readdata_wire{vlSymsp->TOP.readdata_wire}
    , npc_wire{vlSymsp->TOP.npc_wire}
    , pc_wire{vlSymsp->TOP.pc_wire}
    , snpc_wire{vlSymsp->TOP.snpc_wire}
    , rs1data_wire{vlSymsp->TOP.rs1data_wire}
    , rs2data_wire{vlSymsp->TOP.rs2data_wire}
    , immext_wire{vlSymsp->TOP.immext_wire}
    , srcb_wire{vlSymsp->TOP.srcb_wire}
    , aluresult_wire{vlSymsp->TOP.aluresult_wire}
    , dnpc_wire{vlSymsp->TOP.dnpc_wire}
    , result_wire{vlSymsp->TOP.result_wire}
    , srca_wire{vlSymsp->TOP.srca_wire}
    , rootp{&(vlSymsp->TOP)}
{
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk;
    sensitive << rst;
    sensitive << inst_wire;
    sensitive << readdata_wire;

}

//============================================================
// Destructor

Vysyx_23060286_top::~Vysyx_23060286_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vysyx_23060286_top___024root___eval_initial(Vysyx_23060286_top___024root* vlSelf);
void Vysyx_23060286_top___024root___eval_settle(Vysyx_23060286_top___024root* vlSelf);
void Vysyx_23060286_top___024root___eval(Vysyx_23060286_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vysyx_23060286_top___024root___eval_debug_assertions(Vysyx_23060286_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_23060286_top___024root___final(Vysyx_23060286_top___024root* vlSelf);

static void _eval_initial_loop(Vysyx_23060286_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vysyx_23060286_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vysyx_23060286_top___024root___eval_settle(&(vlSymsp->TOP));
        Vysyx_23060286_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vysyx_23060286_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_23060286_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_23060286_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vysyx_23060286_top___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vysyx_23060286_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vysyx_23060286_top::final() {
    Vysyx_23060286_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vysyx_23060286_top___024root__trace_init_top(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_23060286_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060286_top___024root*>(voidSelf);
    Vysyx_23060286_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vysyx_23060286_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vysyx_23060286_top___024root__trace_register(Vysyx_23060286_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_23060286_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vysyx_23060286_top::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_23060286_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
