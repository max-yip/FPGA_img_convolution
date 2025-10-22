// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vedge_filter_tb.h for the primary calling header

#include "Vedge_filter_tb__pch.h"
#include "Vedge_filter_tb__Syms.h"
#include "Vedge_filter_tb___024root.h"

void Vedge_filter_tb___024root___ctor_var_reset(Vedge_filter_tb___024root* vlSelf);

Vedge_filter_tb___024root::Vedge_filter_tb___024root(Vedge_filter_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vedge_filter_tb___024root___ctor_var_reset(this);
}

void Vedge_filter_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vedge_filter_tb___024root::~Vedge_filter_tb___024root() {
}
