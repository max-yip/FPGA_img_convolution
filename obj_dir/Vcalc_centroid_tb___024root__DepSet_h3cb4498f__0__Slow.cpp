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
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<6>/*191:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f696d67U;
    __Vtemp_1[2U] = 0x6c696e65U;
    __Vtemp_1[3U] = 0x696f6e2fU;
    __Vtemp_1[4U] = 0x756c6174U;
    __Vtemp_1[5U] = 0x73696dU;
    VL_READMEM_N(true, 12, 307200, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
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
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT____Vcellinp__Udiv__denom 
        = ((0U == (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p))
            ? 1U : (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p));
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
    vlSelf->calc_centroid_tb__DOT__centroid_ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16295801839814682666ull);
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
    for (int __Vi0 = 0; __Vi0 < 640; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__line2[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3185956026433835797ull);
    }
    for (int __Vi0 = 0; __Vi0 < 640; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__line3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14287344095057285177ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__shift_0[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18232759194804540939ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__shift_1[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5830996065161184092ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__shift_2[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16460540075997578354ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__shift_3[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10976067289402940133ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__shift_4[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11401332523401641814ull);
    }
    vlSelf->calc_centroid_tb__DOT__U6__DOT__gx = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 9162568020036490148ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__gy = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14651028917093486477ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__mag = VL_SCOPED_RAND_RESET_I(13, __VscopeHash, 6841135647463856190ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__valid_s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17590875063974706002ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__valid_s2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17318319381966511658ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__valid_s3 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 109148693087999643ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__valid_s4 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18130666791892223560ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__col = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 9975733556859395533ull);
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[__Vi0] = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 1275188266361787613ull);
    }
    for (int __Vi0 = 0; __Vi0 < 25; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[__Vi0] = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 7267762162975237219ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__gx_s2[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 7919950673028007385ull);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U6__DOT__gy_s2[__Vi0] = VL_SCOPED_RAND_RESET_I(22, __VscopeHash, 1927707049510943351ull);
    }
    vlSelf->calc_centroid_tb__DOT__U6__DOT__gx_s3 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 10922011420945524048ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__gy_s3 = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 8448242680409568510ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__abs_gx = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 5305513402386279609ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__abs_gy = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 7623034315714625417ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__mag_s4 = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 8474024334316074968ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->calc_centroid_tb__DOT__U6__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->calc_centroid_tb__DOT__U6__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->calc_centroid_tb__DOT__U6__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_h089f645b__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6087012389115397813ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_h8256e297__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13599101192942966661ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_h8b13eaf3__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9461182505693591370ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_h14cbc607__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6519418137871481431ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_h3bc12cd2__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8505049547951284565ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_h0b2bfa0e__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10161407056553073590ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_h153f436c__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16595282424575941126ull);
    vlSelf->calc_centroid_tb__DOT__U6__DOT____Vlvbound_h2b621e80__0 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4913291560271867713ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U8__DOT__row_sum_x[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4211132687817201744ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U8__DOT__row_sum_p[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2526134175301533063ull);
    }
    vlSelf->calc_centroid_tb__DOT__U8__DOT__sum_x = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6610398229315908661ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__sum_p = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 150242012001394477ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__pixel_count = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16367263833907990988ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__row_idx = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13668830800791181376ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__current_row_sum_x = VL_SCOPED_RAND_RESET_I(23, __VscopeHash, 6860522053637081269ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__current_row_sum_p = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7504738972807200ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT____Vcellinp__Udiv__denom = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 10647348209508301552ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__line_valid_pipe = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 16194364806177120778ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__line_lost_pipe = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12832753424341677570ull);
    vlSelf->calc_centroid_tb__DOT__U8__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 14845675151162278540ull);
    }
    vlSelf->calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->calc_centroid_tb__DOT__U8__DOT__Udiv__DOT____Vlvbound_he67cc5ec__0 = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 12102043468217840305ull);
    vlSelf->__Vtrigprevexpr___TOP__calc_centroid_tb__DOT__clk_video__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6087266393576139150ull);
    vlSelf->__Vtrigprevexpr___TOP__calc_centroid_tb__DOT__sys_reset__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17733845618329722363ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
