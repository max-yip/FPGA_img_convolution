// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrgb_to_grey_tb.h for the primary calling header

#include "Vrgb_to_grey_tb__pch.h"
#include "Vrgb_to_grey_tb__Syms.h"
#include "Vrgb_to_grey_tb___024root.h"

void Vrgb_to_grey_tb___024root___ctor_var_reset(Vrgb_to_grey_tb___024root* vlSelf);

Vrgb_to_grey_tb___024root::Vrgb_to_grey_tb___024root(Vrgb_to_grey_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vrgb_to_grey_tb___024root___ctor_var_reset(this);
}

void Vrgb_to_grey_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrgb_to_grey_tb___024root::~Vrgb_to_grey_tb___024root() {
}
