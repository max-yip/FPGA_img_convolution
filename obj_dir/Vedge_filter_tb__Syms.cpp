// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vedge_filter_tb__pch.h"
#include "Vedge_filter_tb.h"
#include "Vedge_filter_tb___024root.h"

// FUNCTIONS
Vedge_filter_tb__Syms::~Vedge_filter_tb__Syms()
{
}

Vedge_filter_tb__Syms::Vedge_filter_tb__Syms(VerilatedContext* contextp, const char* namep, Vedge_filter_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(100);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
