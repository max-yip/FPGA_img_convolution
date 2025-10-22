// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrgb_to_grey_tb.h for the primary calling header

#include "Vrgb_to_grey_tb__pch.h"
#include "Vrgb_to_grey_tb___024root.h"

VL_ATTR_COLD void Vrgb_to_grey_tb___024root___eval_static(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_static\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__rgb_to_grey_tb__DOT__clk__0 
        = vlSelfRef.rgb_to_grey_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rgb_to_grey_tb__DOT__out_ready__0 
        = vlSelfRef.rgb_to_grey_tb__DOT__out_ready;
}

VL_ATTR_COLD void Vrgb_to_grey_tb___024root___eval_final(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_final\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb_to_grey_tb___024root___dump_triggers__stl(Vrgb_to_grey_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrgb_to_grey_tb___024root___eval_phase__stl(Vrgb_to_grey_tb___024root* vlSelf);

VL_ATTR_COLD void Vrgb_to_grey_tb___024root___eval_settle(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_settle\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vrgb_to_grey_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/rgb_to_grey_tb.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vrgb_to_grey_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb_to_grey_tb___024root___dump_triggers__stl(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___dump_triggers__stl\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vrgb_to_grey_tb___024root___act_comb__TOP__0(Vrgb_to_grey_tb___024root* vlSelf);

VL_ATTR_COLD void Vrgb_to_grey_tb___024root___eval_stl(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_stl\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vrgb_to_grey_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vrgb_to_grey_tb___024root___eval_triggers__stl(Vrgb_to_grey_tb___024root* vlSelf);

VL_ATTR_COLD bool Vrgb_to_grey_tb___024root___eval_phase__stl(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_phase__stl\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrgb_to_grey_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vrgb_to_grey_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb_to_grey_tb___024root___dump_triggers__act(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___dump_triggers__act\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge rgb_to_grey_tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @( rgb_to_grey_tb.out_ready)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb_to_grey_tb___024root___dump_triggers__nba(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___dump_triggers__nba\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge rgb_to_grey_tb.clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @( rgb_to_grey_tb.out_ready)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrgb_to_grey_tb___024root___ctor_var_reset(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___ctor_var_reset\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->rgb_to_grey_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3812098277000247251ull);
    vlSelf->rgb_to_grey_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5605351896203254540ull);
    vlSelf->rgb_to_grey_tb__DOT__pixel_in = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 7010685795775048156ull);
    vlSelf->rgb_to_grey_tb__DOT__pixel_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6741160285315526913ull);
    vlSelf->rgb_to_grey_tb__DOT__in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17804972563281857984ull);
    vlSelf->rgb_to_grey_tb__DOT__out_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16005443594725257226ull);
    for (int __Vi0 = 0; __Vi0 < 307200; ++__Vi0) {
        vlSelf->rgb_to_grey_tb__DOT__img_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4765638331658145902ull);
    }
    vlSelf->rgb_to_grey_tb__DOT__fd = 0;
    vlSelf->rgb_to_grey_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16098569638123987680ull);
    vlSelf->rgb_to_grey_tb__DOT__gray8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17012393538092987861ull);
    vlSelf->rgb_to_grey_tb__DOT__dut__DOT__gray_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8754142151626229542ull);
    vlSelf->__Vtrigprevexpr___TOP__rgb_to_grey_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12579725019797847957ull);
    vlSelf->__Vtrigprevexpr___TOP__rgb_to_grey_tb__DOT__out_ready__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9070908889317167111ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
