// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_chain_tb.h for the primary calling header

#include "Vvga_chain_tb__pch.h"
#include "Vvga_chain_tb__Syms.h"
#include "Vvga_chain_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_chain_tb___024root___dump_triggers__act(Vvga_chain_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vvga_chain_tb___024root___eval_triggers__act(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_triggers__act\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vtrigprevexpr_h202f897c__0;
    __Vtrigprevexpr_h202f897c__0 = 0;
    // Body
    __Vtrigprevexpr_h202f897c__0 = (1U & (~ (IData)(vlSelfRef.vga_chain_tb__DOT__rst)));
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.vga_chain_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__vga_chain_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.vga_chain_tb__DOT__rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__vga_chain_tb__DOT__rst__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.setBit(3U, ((IData)(__Vtrigprevexpr_h202f897c__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr_h202f897c__1)));
    vlSelfRef.__Vtrigprevexpr___TOP__vga_chain_tb__DOT__clk__0 
        = vlSelfRef.vga_chain_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__vga_chain_tb__DOT__rst__0 
        = vlSelfRef.vga_chain_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr_h202f897c__1 = __Vtrigprevexpr_h202f897c__0;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvga_chain_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
