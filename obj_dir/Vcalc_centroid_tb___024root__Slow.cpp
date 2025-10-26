// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalc_centroid_tb.h for the primary calling header

#include "Vcalc_centroid_tb__pch.h"
#include "Vcalc_centroid_tb__Syms.h"
#include "Vcalc_centroid_tb___024root.h"

void Vcalc_centroid_tb___024root___ctor_var_reset(Vcalc_centroid_tb___024root* vlSelf);

Vcalc_centroid_tb___024root::Vcalc_centroid_tb___024root(Vcalc_centroid_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcalc_centroid_tb___024root___ctor_var_reset(this);
}

void Vcalc_centroid_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcalc_centroid_tb___024root::~Vcalc_centroid_tb___024root() {
}
