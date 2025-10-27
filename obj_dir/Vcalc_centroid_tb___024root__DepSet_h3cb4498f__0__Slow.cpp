// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalc_centroid_tb.h for the primary calling header

#include "Vcalc_centroid_tb__pch.h"
#include "Vcalc_centroid_tb___024root.h"

VL_ATTR_COLD void Vcalc_centroid_tb___024root___eval_static(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_static\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__calc_centroid_tb__DOT__clk_video__0 
        = vlSelfRef.calc_centroid_tb__DOT__clk_video;
    vlSelfRef.__Vtrigprevexpr___TOP__calc_centroid_tb__DOT__sys_reset__0 
        = vlSelfRef.calc_centroid_tb__DOT__sys_reset;
}

VL_ATTR_COLD void Vcalc_centroid_tb___024root___eval_initial__TOP(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_initial__TOP\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x32626974U;
    __Vtemp_1[2U] = 0x67655f31U;
    __Vtemp_1[3U] = 0x2f696d61U;
    __Vtemp_1[4U] = 0x74696f6eU;
    __Vtemp_1[5U] = 0x6d756c61U;
    __Vtemp_1[6U] = 0x7369U;
    VL_READMEM_N(true, 12, 307200, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_1)
                 ,  &(vlSelfRef.calc_centroid_tb__DOT__image_mem)
                 , 0, ~0ULL);
    vlSelfRef.calc_centroid_tb__DOT__vga_ready = 0U;
    vlSelfRef.calc_centroid_tb__DOT__i = 0U;
    __Vtemp_2[0U] = 0x2e70706dU;
    __Vtemp_2[1U] = 0x726f6964U;
    __Vtemp_2[2U] = 0x63656e74U;
    __Vtemp_2[3U] = 0x696f6e2fU;
    __Vtemp_2[4U] = 0x756c6174U;
    __Vtemp_2[5U] = 0x73696dU;
    vlSelfRef.calc_centroid_tb__DOT__ppm_file = VL_FOPEN_NN(
                                                            VL_CVT_PACK_STR_NW(6, __Vtemp_2)
                                                            , 
                                                            std::string{"w"});
    ;
    VL_FWRITEF_NX(vlSelfRef.calc_centroid_tb__DOT__ppm_file,"P3\n        640         480\n255\n",0);
    vlSelfRef.calc_centroid_tb__DOT__px_cnt = 0U;
}

VL_ATTR_COLD void Vcalc_centroid_tb___024root___eval_final(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_final\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalc_centroid_tb___024root___dump_triggers__stl(Vcalc_centroid_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcalc_centroid_tb___024root___eval_phase__stl(Vcalc_centroid_tb___024root* vlSelf);

VL_ATTR_COLD void Vcalc_centroid_tb___024root___eval_settle(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_settle\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcalc_centroid_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/calc_centroid_tb.sv", 7, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcalc_centroid_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalc_centroid_tb___024root___dump_triggers__stl(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___dump_triggers__stl\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcalc_centroid_tb___024root___stl_sequent__TOP__0(Vcalc_centroid_tb___024root* vlSelf);
VL_ATTR_COLD void Vcalc_centroid_tb___024root____Vm_traceActivitySetAll(Vcalc_centroid_tb___024root* vlSelf);

VL_ATTR_COLD void Vcalc_centroid_tb___024root___eval_stl(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_stl\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcalc_centroid_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vcalc_centroid_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD void Vcalc_centroid_tb___024root___stl_sequent__TOP__0(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___stl_sequent__TOP__0\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.calc_centroid_tb__DOT__U5__DOT__gray_temp 
        = (0xffU & ((((IData)(5U) * (0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                             >> 8U))) 
                     + ((IData)(9U) * (0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                               >> 4U)))) 
                    + VL_SHIFTL_III(8,32,32, (0xfU 
                                              & (IData)(vlSelfRef.calc_centroid_tb__DOT__video_data)), 1U)));
    vlSelfRef.calc_centroid_tb__DOT__grey_data = (0xfU 
                                                  & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U5__DOT__gray_temp) 
                                                     >> 4U));
    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx = 
        (0xffU & (((vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top
                    [2U] + VL_SHIFTL_III(8,32,32, vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid
                                         [2U], 1U)) 
                   + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot
                   [2U]) - ((vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top
                             [0U] + VL_SHIFTL_III(8,32,32, 
                                                  vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid
                                                  [0U], 1U)) 
                            + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot
                            [0U])));
    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy = 
        (0xffU & (((vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot
                    [0U] + VL_SHIFTL_III(8,32,32, vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot
                                         [1U], 1U)) 
                   + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot
                   [2U]) - ((vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top
                             [0U] + VL_SHIFTL_III(8,32,32, 
                                                  vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top
                                                  [1U], 1U)) 
                            + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top
                            [2U])));
    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag = 
        (0x1ffU & (VL_EXTENDS_II(9,8, (IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx)) 
                   + VL_EXTENDS_II(9,8, (IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy))));
}

VL_ATTR_COLD void Vcalc_centroid_tb___024root___eval_triggers__stl(Vcalc_centroid_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcalc_centroid_tb___024root___eval_phase__stl(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_phase__stl\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcalc_centroid_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcalc_centroid_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalc_centroid_tb___024root___dump_triggers__act(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___dump_triggers__act\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge calc_centroid_tb.clk_video)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge calc_centroid_tb.sys_reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalc_centroid_tb___024root___dump_triggers__nba(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___dump_triggers__nba\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge calc_centroid_tb.clk_video)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge calc_centroid_tb.sys_reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcalc_centroid_tb___024root____Vm_traceActivitySetAll(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root____Vm_traceActivitySetAll\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vcalc_centroid_tb___024root___ctor_var_reset(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___ctor_var_reset\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->calc_centroid_tb__DOT__clk_video = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12602381018603860870ull);
    vlSelf->calc_centroid_tb__DOT__sys_reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12778281185033775955ull);
    vlSelf->calc_centroid_tb__DOT__video_data = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3112973100018599445ull);
    vlSelf->calc_centroid_tb__DOT__vga_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10072522750142297267ull);
    for (int __Vi0 = 0; __Vi0 < 307200; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__image_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12372466554553447369ull);
    }
    vlSelf->calc_centroid_tb__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14150637409918923750ull);
    vlSelf->calc_centroid_tb__DOT__grey_data = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3299624386217073830ull);
    vlSelf->calc_centroid_tb__DOT__ppm_file = 0;
    vlSelf->calc_centroid_tb__DOT__px_cnt = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18289172391377642916ull);
    vlSelf->calc_centroid_tb__DOT__unnamedblk1__DOT__val = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5399236312892732197ull);
    vlSelf->calc_centroid_tb__DOT__U5__DOT__gray_temp = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15732214459641324490ull);
    for (int __Vi0 = 0; __Vi0 < 640; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__line0[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17898269568724455267ull);
    }
    for (int __Vi0 = 0; __Vi0 < 640; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__line1[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13360993241349424432ull);
    }
    vlSelf->calc_centroid_tb__DOT__U6__DOT__col = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9975733556859395533ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__shift_top[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12464543978501534490ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__shift_mid[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8182445651494954981ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__shift_bot[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5948216275284013740ull);
    }
    vlSelf->calc_centroid_tb__DOT__U6__DOT__gx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9162568020036490148ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__gy = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14651028917093486477ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__mag = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 6841135647463856190ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__ready_shift = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 56688268809291275ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8938155472024369083ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_h7c89ed01__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17133570996202228436ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_hc6643a1d__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16497974578268340523ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_h30510e2c__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5971103012479599054ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_hfa9c3548__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12605841925673077863ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__x_cnt = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5793866427279514706ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__y_cnt = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16448374046127921419ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__first_pixel = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11513476747494212454ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__last_pixel = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16101376705276170804ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__row_active = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15160959718954882ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__sum_midpoints = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 130904221019038715ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__row_count = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 17142425702809729290ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__centroid_x_r = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5073701091843270533ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__line_valid_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3804397407975384383ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__line_lost_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7802677733004570572ull);
    vlSelf->__Vtrigprevexpr___TOP__calc_centroid_tb__DOT__clk_video__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6087266393576139150ull);
    vlSelf->__Vtrigprevexpr___TOP__calc_centroid_tb__DOT__sys_reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17733845618329722363ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
