// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VYSYX_23060286_TOP_H_
#define VERILATED_VYSYX_23060286_TOP_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"
#include "svdpi.h"

class Vysyx_23060286_top__Syms;
class Vysyx_23060286_top___024root;
class VerilatedVcdSc;

// This class is the main interface to the Verilated model
SC_MODULE(Vysyx_23060286_top) {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vysyx_23060286_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    sc_in<bool> &clk;
    sc_in<bool> &rst;
    sc_out<bool> &wen_wire;
    sc_out<uint32_t> &alucotrol_wire;
    sc_out<uint32_t> &immtype_wire;
    sc_out<bool> &branch_wire;
    sc_out<bool> &zero_wire;
    sc_out<bool> &jump_wire;
    sc_out<uint32_t> &pc_wire;
    sc_out<uint32_t> &rddata_wire;
    sc_out<uint32_t> &immext_wire;
    sc_out<uint32_t> &rs1data_wire;
    sc_in<uint32_t> &inst;
    sc_out<uint32_t> &rs2data_wire;
    sc_out<uint32_t> &npc_wire;

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vysyx_23060286_top___024root* const rootp;

    // CONSTRUCTORS
    SC_CTOR(Vysyx_23060286_top);
    virtual ~Vysyx_23060286_top();
  private:
    VL_UNCOPYABLE(Vysyx_23060286_top);  ///< Copying not allowed

  public:
    // API METHODS
  private:
    void eval() { eval_step(); }
    void eval_step();
  public:
    void final();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// SC tracing; avoid overloaded virtual function lint warning
    virtual void trace(sc_trace_file* tfp) const override { ::sc_core::sc_module::trace(tfp); }
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
