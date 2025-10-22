// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRGB_TO_GREY_TB__SYMS_H_
#define VERILATED_VRGB_TO_GREY_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrgb_to_grey_tb.h"

// INCLUDE MODULE CLASSES
#include "Vrgb_to_grey_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vrgb_to_grey_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrgb_to_grey_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrgb_to_grey_tb___024root      TOP;

    // CONSTRUCTORS
    Vrgb_to_grey_tb__Syms(VerilatedContext* contextp, const char* namep, Vrgb_to_grey_tb* modelp);
    ~Vrgb_to_grey_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
