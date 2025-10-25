// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_chain_tb.h for the primary calling header

#include "Vvga_chain_tb__pch.h"
#include "Vvga_chain_tb___024root.h"

VL_ATTR_COLD void Vvga_chain_tb___024root___eval_static(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_static\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__vga_chain_tb__DOT__clk__0 
        = vlSelfRef.vga_chain_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__vga_chain_tb__DOT__rst__0 
        = vlSelfRef.vga_chain_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr_h202f897c__1 = (1U & 
                                              (~ (IData)(vlSelfRef.vga_chain_tb__DOT__rst)));
}

VL_ATTR_COLD void Vvga_chain_tb___024root___eval_initial__TOP(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_initial__TOP\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    vlSelfRef.vga_chain_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4b000U, vlSelfRef.vga_chain_tb__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.vga_chain_tb__DOT____Vlvbound_h115a5203__0 = 0U;
        if (VL_LIKELY(((0x4afffU >= (0x7ffffU & vlSelfRef.vga_chain_tb__DOT__unnamedblk1__DOT__i))))) {
            vlSelfRef.vga_chain_tb__DOT__img_mem[(0x7ffffU 
                                                  & vlSelfRef.vga_chain_tb__DOT__unnamedblk1__DOT__i)] 
                = vlSelfRef.vga_chain_tb__DOT____Vlvbound_h115a5203__0;
        }
        vlSelfRef.vga_chain_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.vga_chain_tb__DOT__unnamedblk1__DOT__i);
    }
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x32626974U;
    __Vtemp_2[2U] = 0x67655f31U;
    __Vtemp_2[3U] = 0x696d61U;
    VL_READMEM_N(true, 12, 307200, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_2)
                 ,  &(vlSelfRef.vga_chain_tb__DOT__img_mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vvga_chain_tb___024root___eval_final(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_final\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_chain_tb___024root___dump_triggers__stl(Vvga_chain_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vvga_chain_tb___024root___eval_phase__stl(Vvga_chain_tb___024root* vlSelf);

VL_ATTR_COLD void Vvga_chain_tb___024root___eval_settle(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_settle\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vvga_chain_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/vga_chain_tb.sv", 5, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vvga_chain_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_chain_tb___024root___dump_triggers__stl(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___dump_triggers__stl\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vvga_chain_tb___024root___stl_sequent__TOP__0(Vvga_chain_tb___024root* vlSelf);
VL_ATTR_COLD void Vvga_chain_tb___024root____Vm_traceActivitySetAll(Vvga_chain_tb___024root* vlSelf);

VL_ATTR_COLD void Vvga_chain_tb___024root___eval_stl(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_stl\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vvga_chain_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vvga_chain_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vvga_chain_tb___024root___stl_sequent__TOP__0(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___stl_sequent__TOP__0\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vga_chain_tb__DOT__hsync = 1U;
    if ((0U == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)) {
        vlSelfRef.vga_chain_tb__DOT__hsync = 0U;
    }
    vlSelfRef.vga_chain_tb__DOT__vga__DOT__next_state 
        = ((0U == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
            ? ((0x5fU == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                ? 1U : 0U) : ((1U == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
                               ? ((0x8fU == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                                   ? 2U : 1U) : ((2U 
                                                  == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
                                                  ? 
                                                 ((0x30fU 
                                                   == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                                                   ? 3U
                                                   : 2U)
                                                  : 
                                                 ((3U 
                                                   == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
                                                   ? 
                                                  ((0x31fU 
                                                    == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                                                    ? 0U
                                                    : 3U)
                                                   : vlSelfRef.vga_chain_tb__DOT__vga__DOT__state))));
    vlSelfRef.vga_chain_tb__DOT__rgb2grey__DOT__gray_temp 
        = (0xffU & ((((IData)(5U) * (0xfU & ((IData)(vlSelfRef.vga_chain_tb__DOT__tb_pixel_in) 
                                             >> 8U))) 
                     + ((IData)(9U) * (0xfU & ((IData)(vlSelfRef.vga_chain_tb__DOT__tb_pixel_in) 
                                               >> 4U)))) 
                    + VL_SHIFTL_III(8,32,32, (0xfU 
                                              & (IData)(vlSelfRef.vga_chain_tb__DOT__tb_pixel_in)), 1U)));
    vlSelfRef.vga_chain_tb__DOT__grey_pixel = (0xfU 
                                               & ((IData)(vlSelfRef.vga_chain_tb__DOT__rgb2grey__DOT__gray_temp) 
                                                  >> 4U));
    vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__gx 
        = (0xffU & (((VL_EXTENDS_II(8,4, vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top
                                    [0U]) - VL_EXTENDS_II(8,4, 
                                                          vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top
                                                          [2U])) 
                     + VL_MULS_III(32, (IData)(2U), 
                                   (VL_EXTENDS_II(32,4, 
                                                  vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid
                                                  [0U]) 
                                    - VL_EXTENDS_II(32,4, 
                                                    vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid
                                                    [2U])))) 
                    + (VL_EXTENDS_II(8,4, vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot
                                     [0U]) - VL_EXTENDS_II(8,4, 
                                                           vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot
                                                           [2U]))));
    vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__gy 
        = (0xffU & (((VL_EXTENDS_II(8,4, vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top
                                    [0U]) + VL_MULS_III(32, (IData)(2U), 
                                                        VL_EXTENDS_II(32,4, 
                                                                      vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top
                                                                      [1U]))) 
                     + VL_EXTENDS_II(8,4, vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top
                                     [2U])) - ((VL_EXTENDS_II(8,4, 
                                                              vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot
                                                              [0U]) 
                                                + VL_MULS_III(32, (IData)(2U), 
                                                              VL_EXTENDS_II(32,4, 
                                                                            vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot
                                                                            [1U]))) 
                                               + VL_EXTENDS_II(8,4, 
                                                               vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot
                                                               [2U]))));
    vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag 
        = (0xffU & ((0xfU & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__gx) 
                             >> 4U)) + (0xfU & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__gy) 
                                                >> 4U))));
    vlSelfRef.vga_chain_tb__DOT__rout = 0U;
    vlSelfRef.vga_chain_tb__DOT__gout = 0U;
    vlSelfRef.vga_chain_tb__DOT__bout = 0U;
    if ((0U != vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)) {
        if ((2U == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)) {
            vlSelfRef.vga_chain_tb__DOT__rout = (0xffU 
                                                 & ((0xf0U 
                                                     & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag))));
            vlSelfRef.vga_chain_tb__DOT__gout = (0xffU 
                                                 & ((0xf0U 
                                                     & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag))));
            vlSelfRef.vga_chain_tb__DOT__bout = (0xffU 
                                                 & ((0xf0U 
                                                     & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag) 
                                                        << 4U)) 
                                                    | (0xfU 
                                                       & (IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag))));
        }
    }
}

VL_ATTR_COLD void Vvga_chain_tb___024root___eval_triggers__stl(Vvga_chain_tb___024root* vlSelf);

VL_ATTR_COLD bool Vvga_chain_tb___024root___eval_phase__stl(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_phase__stl\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vvga_chain_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vvga_chain_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_chain_tb___024root___dump_triggers__act(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___dump_triggers__act\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge vga_chain_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge vga_chain_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( (~ vga_chain_tb.rst))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_chain_tb___024root___dump_triggers__nba(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___dump_triggers__nba\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge vga_chain_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge vga_chain_tb.rst)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( (~ vga_chain_tb.rst))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvga_chain_tb___024root____Vm_traceActivitySetAll(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root____Vm_traceActivitySetAll\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
}

VL_ATTR_COLD void Vvga_chain_tb___024root___ctor_var_reset(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___ctor_var_reset\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->vga_chain_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4393120660187996539ull);
    vlSelf->vga_chain_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5630947708882753289ull);
    vlSelf->vga_chain_tb__DOT__tb_in_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11507302649006320300ull);
    vlSelf->vga_chain_tb__DOT__tb_pixel_in = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6833821568472643577ull);
    vlSelf->vga_chain_tb__DOT__grey_pixel = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11754222393608652115ull);
    vlSelf->vga_chain_tb__DOT__hsync = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5127124460440267597ull);
    vlSelf->vga_chain_tb__DOT__rout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9425872496111615784ull);
    vlSelf->vga_chain_tb__DOT__gout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 664443099435486646ull);
    vlSelf->vga_chain_tb__DOT__bout = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8271928722368231075ull);
    for (int __Vi0 = 0; __Vi0 < 307200; ++__Vi0) {
        vlSelf->vga_chain_tb__DOT__img_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8731711038480740600ull);
    }
    vlSelf->vga_chain_tb__DOT__fd = 0;
    vlSelf->vga_chain_tb__DOT__pixel_idx = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 246282500272279244ull);
    vlSelf->vga_chain_tb__DOT__written_pixels = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 647009926183800581ull);
    vlSelf->vga_chain_tb__DOT__cycle_count = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12585743513089132411ull);
    vlSelf->vga_chain_tb__DOT__r8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7332871487115676373ull);
    vlSelf->vga_chain_tb__DOT__g8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4331737774640241397ull);
    vlSelf->vga_chain_tb__DOT__b8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15464873292692691185ull);
    vlSelf->vga_chain_tb__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2347260988412146540ull);
    vlSelf->vga_chain_tb__DOT____Vlvbound_h115a5203__0 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3417190797605924909ull);
    vlSelf->vga_chain_tb__DOT__rgb2grey__DOT__gray_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7631889016989414506ull);
    for (int __Vi0 = 0; __Vi0 < 640; ++__Vi0) {
        vlSelf->vga_chain_tb__DOT__edge_dut__DOT__line0[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1234538929242028928ull);
    }
    for (int __Vi0 = 0; __Vi0 < 640; ++__Vi0) {
        vlSelf->vga_chain_tb__DOT__edge_dut__DOT__line1[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5418858002755160006ull);
    }
    vlSelf->vga_chain_tb__DOT__edge_dut__DOT__col = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9987330559293538522ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_chain_tb__DOT__edge_dut__DOT__shift_top[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11767391643850744130ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_chain_tb__DOT__edge_dut__DOT__shift_mid[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4710175740653959703ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->vga_chain_tb__DOT__edge_dut__DOT__shift_bot[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16526241905287383143ull);
    }
    vlSelf->vga_chain_tb__DOT__edge_dut__DOT__gx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9643213301015316102ull);
    vlSelf->vga_chain_tb__DOT__edge_dut__DOT__gy = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9698596379659096533ull);
    vlSelf->vga_chain_tb__DOT__edge_dut__DOT__mag = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17003443553179074305ull);
    vlSelf->vga_chain_tb__DOT__edge_dut__DOT__ready_shift = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6418851890176163799ull);
    vlSelf->vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18405369620075774976ull);
    vlSelf->vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_h7c89ed01__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13207778435249619734ull);
    vlSelf->vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_hc6643a1d__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 475832737921656301ull);
    vlSelf->vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_h30510e2c__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17892286781198777683ull);
    vlSelf->vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_hfa9c3548__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 541841714964317344ull);
    vlSelf->vga_chain_tb__DOT__vga__DOT__pixel_count = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 2594154143847318460ull);
    vlSelf->vga_chain_tb__DOT__vga__DOT__line_count = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9548614481781955173ull);
    vlSelf->vga_chain_tb__DOT__vga__DOT__state = 0;
    vlSelf->vga_chain_tb__DOT__vga__DOT__next_state = 0;
    vlSelf->__Vtrigprevexpr___TOP__vga_chain_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8588951035312012072ull);
    vlSelf->__Vtrigprevexpr___TOP__vga_chain_tb__DOT__rst__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17861100985507873847ull);
    vlSelf->__Vtrigprevexpr_h202f897c__1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16589042652851571015ull);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
