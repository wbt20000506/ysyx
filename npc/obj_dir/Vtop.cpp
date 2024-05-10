// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop.h"
#include "Vtop__Syms.h"
#include "verilated_vcd_sc.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vtop::Vtop(sc_module_name /* unused */)
    : vlSymsp{new Vtop__Syms(nullptr, name(), this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , wen_wire{vlSymsp->TOP.wen_wire}
    , alucotrol_wire{vlSymsp->TOP.alucotrol_wire}
    , immtype_wire{vlSymsp->TOP.immtype_wire}
    , of_wire{vlSymsp->TOP.of_wire}
    , zf_wire{vlSymsp->TOP.zf_wire}
    , nf_wire{vlSymsp->TOP.nf_wire}
    , cf_wire{vlSymsp->TOP.cf_wire}
    , pc_wire{vlSymsp->TOP.pc_wire}
    , rddata_wire{vlSymsp->TOP.rddata_wire}
    , immext_wire{vlSymsp->TOP.immext_wire}
    , rs1data_wire{vlSymsp->TOP.rs1data_wire}
    , inst{vlSymsp->TOP.inst}
    , rs2data_wire{vlSymsp->TOP.rs2data_wire}
    , rootp{&(vlSymsp->TOP)}
{
    // Sensitivities on all clocks and combinational inputs
    SC_METHOD(eval);
    sensitive << clk;
    sensitive << rst;
    sensitive << inst;

}

//============================================================
// Destructor

Vtop::~Vtop() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtop___024root___eval_initial(Vtop___024root* vlSelf);
void Vtop___024root___eval_settle(Vtop___024root* vlSelf);
void Vtop___024root___eval(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop___024root___final(Vtop___024root* vlSelf);

static void _eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop___024root___eval_settle(&(vlSymsp->TOP));
        Vtop___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vtop::contextp() const {
    return vlSymsp->_vm_contextp__;
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtop::final() {
    Vtop___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (!sc_core::sc_get_curr_simcontext()->elaboration_done()) {
        vl_fatal(__FILE__, __LINE__, name(), "Vtop::trace() is called before sc_core::sc_start(). Run sc_core::sc_start(sc_core::SC_ZERO_TIME) before trace() to complete elaboration.");
    }if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
