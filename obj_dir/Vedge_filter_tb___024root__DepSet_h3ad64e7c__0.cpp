// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vedge_filter_tb.h for the primary calling header

#include "Vedge_filter_tb__pch.h"
#include "Vedge_filter_tb__Syms.h"
#include "Vedge_filter_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vedge_filter_tb___024root___eval_initial__TOP__Vtiming__1(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/edge_filter_tb.sv", 
                                             50);
        vlSelfRef.edge_filter_tb__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.edge_filter_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_filter_tb___024root___dump_triggers__act(Vedge_filter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vedge_filter_tb___024root___eval_triggers__act(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_triggers__act\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.edge_filter_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__edge_filter_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.edge_filter_tb__DOT__rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__edge_filter_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__edge_filter_tb__DOT__clk__0 
        = vlSelfRef.edge_filter_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__edge_filter_tb__DOT__rst__0 
        = vlSelfRef.edge_filter_tb__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vedge_filter_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
