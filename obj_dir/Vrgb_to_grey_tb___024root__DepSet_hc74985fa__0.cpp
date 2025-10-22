// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrgb_to_grey_tb.h for the primary calling header

#include "Vrgb_to_grey_tb__pch.h"
#include "Vrgb_to_grey_tb__Syms.h"
#include "Vrgb_to_grey_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vrgb_to_grey_tb___024root___eval_initial__TOP__Vtiming__1(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/rgb_to_grey_tb.sv", 
                                             33);
        vlSelfRef.rgb_to_grey_tb__DOT__clk = (1U & 
                                              (~ (IData)(vlSelfRef.rgb_to_grey_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb_to_grey_tb___024root___dump_triggers__act(Vrgb_to_grey_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vrgb_to_grey_tb___024root___eval_triggers__act(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_triggers__act\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.rgb_to_grey_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rgb_to_grey_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.rgb_to_grey_tb__DOT__out_ready) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rgb_to_grey_tb__DOT__out_ready__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__rgb_to_grey_tb__DOT__clk__0 
        = vlSelfRef.rgb_to_grey_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rgb_to_grey_tb__DOT__out_ready__0 
        = vlSelfRef.rgb_to_grey_tb__DOT__out_ready;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrgb_to_grey_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
