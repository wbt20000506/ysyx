// Verilated -*- SystemC -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_23060286_TOP__SYMS_H_
#define VERILATED_VYSYX_23060286_TOP__SYMS_H_  // guard

#include "systemc.h"
#include "verilated_sc.h"
#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vysyx_23060286_top.h"

// INCLUDE MODULE CLASSES
#include "Vysyx_23060286_top___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Vysyx_23060286_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vysyx_23060286_top* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vysyx_23060286_top___024root   TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_TOP;
    VerilatedScope __Vscope_ysyx_23060286_top;
    VerilatedScope __Vscope_ysyx_23060286_top__ALU;
    VerilatedScope __Vscope_ysyx_23060286_top__ALUMUX;
    VerilatedScope __Vscope_ysyx_23060286_top__DNPC;
    VerilatedScope __Vscope_ysyx_23060286_top__GRP;
    VerilatedScope __Vscope_ysyx_23060286_top__IDU;
    VerilatedScope __Vscope_ysyx_23060286_top__Imm;
    VerilatedScope __Vscope_ysyx_23060286_top__PC;
    VerilatedScope __Vscope_ysyx_23060286_top__PCMUX;
    VerilatedScope __Vscope_ysyx_23060286_top__RESMUX;
    VerilatedScope __Vscope_ysyx_23060286_top__SNPC;
    VerilatedScope __Vscope_ysyx_23060286_top__SRCA;

    // CONSTRUCTORS
    Vysyx_23060286_top__Syms(VerilatedContext* contextp, const char* namep, Vysyx_23060286_top* modelp);
    ~Vysyx_23060286_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
