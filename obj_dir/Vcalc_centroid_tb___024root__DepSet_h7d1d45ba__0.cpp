// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalc_centroid_tb.h for the primary calling header

#include "Vcalc_centroid_tb__pch.h"
#include "Vcalc_centroid_tb__Syms.h"
#include "Vcalc_centroid_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalc_centroid_tb___024root___dump_triggers__act(Vcalc_centroid_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcalc_centroid_tb___024root___eval_triggers__act(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_triggers__act\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.calc_centroid_tb__DOT__clk_video) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calc_centroid_tb__DOT__clk_video__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.calc_centroid_tb__DOT__sys_reset) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__calc_centroid_tb__DOT__sys_reset__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__calc_centroid_tb__DOT__clk_video__0 
        = vlSelfRef.calc_centroid_tb__DOT__clk_video;
    vlSelfRef.__Vtrigprevexpr___TOP__calc_centroid_tb__DOT__sys_reset__0 
        = vlSelfRef.calc_centroid_tb__DOT__sys_reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcalc_centroid_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
