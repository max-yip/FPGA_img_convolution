// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrgb_to_grey_tb__pch.h"
#include "Vrgb_to_grey_tb.h"
#include "Vrgb_to_grey_tb___024root.h"

// FUNCTIONS
Vrgb_to_grey_tb__Syms::~Vrgb_to_grey_tb__Syms()
{
}

Vrgb_to_grey_tb__Syms::Vrgb_to_grey_tb__Syms(VerilatedContext* contextp, const char* namep, Vrgb_to_grey_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(46);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
