// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_chain_tb.h for the primary calling header

#include "Vvga_chain_tb__pch.h"
#include "Vvga_chain_tb__Syms.h"
#include "Vvga_chain_tb___024root.h"

void Vvga_chain_tb___024root___ctor_var_reset(Vvga_chain_tb___024root* vlSelf);

Vvga_chain_tb___024root::Vvga_chain_tb___024root(Vvga_chain_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvga_chain_tb___024root___ctor_var_reset(this);
}

void Vvga_chain_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vvga_chain_tb___024root::~Vvga_chain_tb___024root() {
}
