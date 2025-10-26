// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCALC_CENTROID_TB__SYMS_H_
#define VERILATED_VCALC_CENTROID_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcalc_centroid_tb.h"

// INCLUDE MODULE CLASSES
#include "Vcalc_centroid_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcalc_centroid_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcalc_centroid_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcalc_centroid_tb___024root    TOP;

    // CONSTRUCTORS
    Vcalc_centroid_tb__Syms(VerilatedContext* contextp, const char* namep, Vcalc_centroid_tb* modelp);
    ~Vcalc_centroid_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
