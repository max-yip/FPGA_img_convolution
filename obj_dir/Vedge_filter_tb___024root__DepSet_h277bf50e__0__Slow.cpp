// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vedge_filter_tb.h for the primary calling header

#include "Vedge_filter_tb__pch.h"
#include "Vedge_filter_tb___024root.h"

VL_ATTR_COLD void Vedge_filter_tb___024root___eval_static__TOP(Vedge_filter_tb___024root* vlSelf);
VL_ATTR_COLD void Vedge_filter_tb___024root____Vm_traceActivitySetAll(Vedge_filter_tb___024root* vlSelf);

VL_ATTR_COLD void Vedge_filter_tb___024root___eval_static(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_static\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vedge_filter_tb___024root___eval_static__TOP(vlSelf);
    Vedge_filter_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__edge_filter_tb__DOT__clk__0 
        = vlSelfRef.edge_filter_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__edge_filter_tb__DOT__rst__0 
        = vlSelfRef.edge_filter_tb__DOT__rst;
}

VL_ATTR_COLD void Vedge_filter_tb___024root___eval_static__TOP(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_static__TOP\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.edge_filter_tb__DOT__in_seen = 0U;
    vlSelfRef.edge_filter_tb__DOT__out_seen = 0U;
}

VL_ATTR_COLD void Vedge_filter_tb___024root___eval_final(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_final\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_filter_tb___024root___dump_triggers__stl(Vedge_filter_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vedge_filter_tb___024root___eval_phase__stl(Vedge_filter_tb___024root* vlSelf);

VL_ATTR_COLD void Vedge_filter_tb___024root___eval_settle(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_settle\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vedge_filter_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/edge_filter_tb.sv", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vedge_filter_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_filter_tb___024root___dump_triggers__stl(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___dump_triggers__stl\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vedge_filter_tb___024root___stl_sequent__TOP__0(Vedge_filter_tb___024root* vlSelf);

VL_ATTR_COLD void Vedge_filter_tb___024root___eval_stl(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_stl\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vedge_filter_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vedge_filter_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vedge_filter_tb___024root___stl_sequent__TOP__0(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___stl_sequent__TOP__0\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.edge_filter_tb__DOT__rgb_dut__DOT__gray_temp 
        = (0xffU & ((((IData)(5U) * (0xfU & ((IData)(vlSelfRef.edge_filter_tb__DOT__pixel_in) 
                                             >> 8U))) 
                     + ((IData)(9U) * (0xfU & ((IData)(vlSelfRef.edge_filter_tb__DOT__pixel_in) 
                                               >> 4U)))) 
                    + VL_SHIFTL_III(8,32,32, (0xfU 
                                              & (IData)(vlSelfRef.edge_filter_tb__DOT__pixel_in)), 1U)));
    vlSelfRef.edge_filter_tb__DOT__pixel_grey = (0xfU 
                                                 & ((IData)(vlSelfRef.edge_filter_tb__DOT__rgb_dut__DOT__gray_temp) 
                                                    >> 4U));
    vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__gx 
        = (0xffU & (((VL_EXTENDS_II(8,4, vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top
                                    [0U]) - VL_EXTENDS_II(8,4, 
                                                          vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top
                                                          [2U])) 
                     + VL_MULS_III(32, (IData)(2U), 
                                   (VL_EXTENDS_II(32,4, 
                                                  vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid
                                                  [0U]) 
                                    - VL_EXTENDS_II(32,4, 
                                                    vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid
                                                    [2U])))) 
                    + (VL_EXTENDS_II(8,4, vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot
                                     [0U]) - VL_EXTENDS_II(8,4, 
                                                           vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot
                                                           [2U]))));
    vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__gy 
        = (0xffU & (((VL_EXTENDS_II(8,4, vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top
                                    [0U]) + VL_MULS_III(32, (IData)(2U), 
                                                        VL_EXTENDS_II(32,4, 
                                                                      vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top
                                                                      [1U]))) 
                     + VL_EXTENDS_II(8,4, vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top
                                     [2U])) - ((VL_EXTENDS_II(8,4, 
                                                              vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot
                                                              [0U]) 
                                                + VL_MULS_III(32, (IData)(2U), 
                                                              VL_EXTENDS_II(32,4, 
                                                                            vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot
                                                                            [1U]))) 
                                               + VL_EXTENDS_II(8,4, 
                                                               vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot
                                                               [2U]))));
    vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__mag 
        = (0xffU & ((0xfU & ((IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__gx) 
                             >> 4U)) + (0xfU & ((IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__gy) 
                                                >> 4U))));
}

VL_ATTR_COLD void Vedge_filter_tb___024root___eval_triggers__stl(Vedge_filter_tb___024root* vlSelf);

VL_ATTR_COLD bool Vedge_filter_tb___024root___eval_phase__stl(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_phase__stl\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vedge_filter_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vedge_filter_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_filter_tb___024root___dump_triggers__act(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___dump_triggers__act\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge edge_filter_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge edge_filter_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_filter_tb___024root___dump_triggers__nba(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___dump_triggers__nba\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge edge_filter_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge edge_filter_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vedge_filter_tb___024root____Vm_traceActivitySetAll(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root____Vm_traceActivitySetAll\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vedge_filter_tb___024root___ctor_var_reset(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___ctor_var_reset\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->edge_filter_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12790110915516328345ull);
    vlSelf->edge_filter_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10635414275374650283ull);
    vlSelf->edge_filter_tb__DOT__pixel_in = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14556218392213923802ull);
    vlSelf->edge_filter_tb__DOT__pixel_grey = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2366628646369008953ull);
    vlSelf->edge_filter_tb__DOT__in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7448004578204553450ull);
    for (int __Vi0 = 0; __Vi0 < 307200; ++__Vi0) {
        vlSelf->edge_filter_tb__DOT__img_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11144515691551186077ull);
    }
    vlSelf->edge_filter_tb__DOT__fd = 0;
    vlSelf->edge_filter_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11444180517068591985ull);
    vlSelf->edge_filter_tb__DOT__gray8 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 802419146486061012ull);
    vlSelf->edge_filter_tb__DOT__cycle_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3939109441893089544ull);
    vlSelf->edge_filter_tb__DOT__first_in_cycle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9505304411514243420ull);
    vlSelf->edge_filter_tb__DOT__first_out_cycle = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10495583250287198547ull);
    vlSelf->edge_filter_tb__DOT__in_seen = 0;
    vlSelf->edge_filter_tb__DOT__out_seen = 0;
    vlSelf->edge_filter_tb__DOT__rgb_dut__DOT__gray_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5587413599992366154ull);
    for (int __Vi0 = 0; __Vi0 < 640; ++__Vi0) {
        vlSelf->edge_filter_tb__DOT__edge_dut__DOT__line0[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7246551835189987343ull);
    }
    for (int __Vi0 = 0; __Vi0 < 640; ++__Vi0) {
        vlSelf->edge_filter_tb__DOT__edge_dut__DOT__line1[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5556300269431079117ull);
    }
    vlSelf->edge_filter_tb__DOT__edge_dut__DOT__col = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8051042928453105657ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->edge_filter_tb__DOT__edge_dut__DOT__shift_top[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6013835959926474695ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->edge_filter_tb__DOT__edge_dut__DOT__shift_mid[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16362066648257979120ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->edge_filter_tb__DOT__edge_dut__DOT__shift_bot[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14543900259211215807ull);
    }
    vlSelf->edge_filter_tb__DOT__edge_dut__DOT__gx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3308647288643533520ull);
    vlSelf->edge_filter_tb__DOT__edge_dut__DOT__gy = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5832784487772303492ull);
    vlSelf->edge_filter_tb__DOT__edge_dut__DOT__mag = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5364366148422608410ull);
    vlSelf->edge_filter_tb__DOT__edge_dut__DOT__ready_shift = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4304663083233388691ull);
    vlSelf->edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8345907253619194134ull);
    vlSelf->edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_h7c89ed01__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 701459407040531109ull);
    vlSelf->edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_hc6643a1d__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12587703351383511637ull);
    vlSelf->edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_h30510e2c__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17240599093237776774ull);
    vlSelf->edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_hfa9c3548__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1020403130200276644ull);
    vlSelf->__Vtrigprevexpr___TOP__edge_filter_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15464007548841880432ull);
    vlSelf->__Vtrigprevexpr___TOP__edge_filter_tb__DOT__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12606770227110089206ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
