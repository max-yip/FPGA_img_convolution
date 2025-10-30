// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcalc_centroid_tb__pch.h"
#include "Vcalc_centroid_tb.h"
#include "Vcalc_centroid_tb___024root.h"

// FUNCTIONS
Vcalc_centroid_tb__Syms::~Vcalc_centroid_tb__Syms()
{
}

Vcalc_centroid_tb__Syms::Vcalc_centroid_tb__Syms(VerilatedContext* contextp, const char* namep, Vcalc_centroid_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(288);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
