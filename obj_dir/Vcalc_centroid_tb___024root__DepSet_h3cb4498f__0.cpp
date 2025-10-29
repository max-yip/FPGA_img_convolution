// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcalc_centroid_tb.h for the primary calling header

#include "Vcalc_centroid_tb__pch.h"
#include "Vcalc_centroid_tb___024root.h"

VL_ATTR_COLD void Vcalc_centroid_tb___024root___eval_initial__TOP(Vcalc_centroid_tb___024root* vlSelf);
VlCoroutine Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__0(Vcalc_centroid_tb___024root* vlSelf);
VlCoroutine Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__1(Vcalc_centroid_tb___024root* vlSelf);
VlCoroutine Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__2(Vcalc_centroid_tb___024root* vlSelf);

void Vcalc_centroid_tb___024root___eval_initial(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_initial\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcalc_centroid_tb___024root___eval_initial__TOP(vlSelf);
    Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__0(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.calc_centroid_tb__DOT__clk_video = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                             nullptr, 
                                             "tb/calc_centroid_tb.sv", 
                                             20);
        vlSelfRef.calc_centroid_tb__DOT__clk_video 
            = (1U & (~ (IData)(vlSelfRef.calc_centroid_tb__DOT__clk_video)));
    }
}

VL_INLINE_OPT VlCoroutine Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__1(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.calc_centroid_tb__DOT__sys_reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb/calc_centroid_tb.sv", 
                                         25);
    vlSelfRef.calc_centroid_tb__DOT__sys_reset = 0U;
}

VL_INLINE_OPT VlCoroutine Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__2(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x4a817c800ULL, 
                                         nullptr, "tb/calc_centroid_tb.sv", 
                                         160);
    VL_FCLOSE_I(vlSelfRef.calc_centroid_tb__DOT__ppm_file); VL_WRITEF_NX("Simulation done. PPM output saved.\n",0);
    VL_STOP_MT("tb/calc_centroid_tb.sv", 163, "");
}

void Vcalc_centroid_tb___024root___eval_act(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_act\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcalc_centroid_tb___024root___nba_sequent__TOP__0(Vcalc_centroid_tb___024root* vlSelf);
void Vcalc_centroid_tb___024root___nba_sequent__TOP__1(Vcalc_centroid_tb___024root* vlSelf);
void Vcalc_centroid_tb___024root___nba_sequent__TOP__2(Vcalc_centroid_tb___024root* vlSelf);

void Vcalc_centroid_tb___024root___eval_nba(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_nba\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcalc_centroid_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcalc_centroid_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcalc_centroid_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

VL_INLINE_OPT void Vcalc_centroid_tb___024root___nba_sequent__TOP__0(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___nba_sequent__TOP__0\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__calc_centroid_tb__DOT__px_cnt;
    __Vdly__calc_centroid_tb__DOT__px_cnt = 0;
    // Body
    __Vdly__calc_centroid_tb__DOT__px_cnt = vlSelfRef.calc_centroid_tb__DOT__px_cnt;
    if (vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_reg) {
        if (vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_reg) {
            VL_WRITEF_NX("Frame centroid lost!\n",0);
        } else {
            VL_WRITEF_NX("Frame centroid_x = %0#\n",0,
                         11,vlSelfRef.calc_centroid_tb__DOT__U8__DOT__centroid_x_reg);
        }
    }
    if (VL_UNLIKELY(((0x10U & (IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift))))) {
        vlSelfRef.calc_centroid_tb__DOT__unnamedblk1__DOT__val 
            = (0xffU & ((0xf0U & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                  >> 4U)) | (0xfU & 
                                             ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                              >> 8U))));
        VL_FWRITEF_NX(vlSelfRef.calc_centroid_tb__DOT__ppm_file,"%0d %0d %0d ",0,
                      32,vlSelfRef.calc_centroid_tb__DOT__unnamedblk1__DOT__val,
                      32,vlSelfRef.calc_centroid_tb__DOT__unnamedblk1__DOT__val,
                      32,vlSelfRef.calc_centroid_tb__DOT__unnamedblk1__DOT__val);
        __Vdly__calc_centroid_tb__DOT__px_cnt = ((IData)(1U) 
                                                 + vlSelfRef.calc_centroid_tb__DOT__px_cnt);
        if (VL_UNLIKELY(((0U == VL_MODDIVS_III(32, vlSelfRef.calc_centroid_tb__DOT__px_cnt, (IData)(0x280U)))))) {
            VL_FWRITEF_NX(vlSelfRef.calc_centroid_tb__DOT__ppm_file,"\n",0);
        }
    }
    vlSelfRef.calc_centroid_tb__DOT__px_cnt = __Vdly__calc_centroid_tb__DOT__px_cnt;
}

VL_INLINE_OPT void Vcalc_centroid_tb___024root___nba_sequent__TOP__1(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___nba_sequent__TOP__1\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift;
    __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift = 0;
    IData/*31:0*/ __Vdly__calc_centroid_tb__DOT__U6__DOT__col;
    __Vdly__calc_centroid_tb__DOT__U6__DOT__col = 0;
    IData/*24:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_x;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_x = 0;
    IData/*19:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_p;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_p = 0;
    SData/*9:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__pixel_count;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__pixel_count = 0;
    SData/*9:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count = 0;
    SData/*9:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__window_start_row;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__window_start_row = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v0;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v0 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v0;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v0 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v0;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v0 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v0;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v0 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line2__v0;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line2__v0 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line2__v0;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line2__v0 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line3__v0;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line3__v0 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line3__v0;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line3__v0 = 0;
    CData/*0:0*/ __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_0__v0;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_0__v0 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v5;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v5 = 0;
    CData/*0:0*/ __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_0__v5;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_0__v5 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v6;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v6 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v7;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v7 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v8;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v8 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v9;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v9 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v5;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v5 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v6;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v6 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v7;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v7 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v8;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v8 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v9;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v9 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v5;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v5 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v6;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v6 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v7;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v7 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v8;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v8 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v9;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v9 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v5;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v5 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v6;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v6 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v7;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v7 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v8;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v8 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v9;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v9 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v1;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v1 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v1;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v1 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v1;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v1 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v1;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v1 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line2__v1;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line2__v1 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line2__v1;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line2__v1 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line3__v1;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line3__v1 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line3__v1;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line3__v1 = 0;
    CData/*0:0*/ __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_4__v0;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_4__v0 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v5;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v5 = 0;
    CData/*0:0*/ __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_4__v5;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_4__v5 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v6;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v6 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v7;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v7 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v8;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v8 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v9;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v9 = 0;
    // Body
    __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift 
        = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_x = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_x;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_p = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__pixel_count 
        = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__pixel_count;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count 
        = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__window_start_row 
        = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__window_start_row;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_4__v0 = 0U;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_4__v5 = 0U;
    __Vdly__calc_centroid_tb__DOT__U6__DOT__col = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_0__v0 = 0U;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_0__v5 = 0U;
    if (vlSelfRef.calc_centroid_tb__DOT__sys_reset) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk2__DOT__j = 5U;
        __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift = 0U;
        __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_4__v0 = 1U;
    } else if (vlSelfRef.calc_centroid_tb__DOT__vga_ready) {
        __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift 
            = ((0x1eU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift) 
                         << 1U)) | (IData)(vlSelfRef.calc_centroid_tb__DOT__vga_ready));
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v5 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
            [1U];
        __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_4__v5 = 1U;
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v6 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
            [2U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v7 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
            [3U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v8 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
            [4U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v9 
            = vlSelfRef.calc_centroid_tb__DOT__grey_data;
    }
    if (vlSelfRef.calc_centroid_tb__DOT__sys_reset) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i = 0U;
        __Vdly__calc_centroid_tb__DOT__U6__DOT__col = 0U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h089f645b__0 = 0U;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v0 
                    = vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h089f645b__0;
                __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v0 
                    = (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line0.enqueue(__VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v0, (IData)(__VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v0));
            }
            vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h8256e297__0 = 0U;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v0 
                    = vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h8256e297__0;
                __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v0 
                    = (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line1.enqueue(__VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v0, (IData)(__VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v0));
            }
            vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h8b13eaf3__0 = 0U;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line2__v0 
                    = vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h8b13eaf3__0;
                __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line2__v0 
                    = (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line2.enqueue(__VdlyVal__calc_centroid_tb__DOT__U6__DOT__line2__v0, (IData)(__VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line2__v0));
            }
            vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h14cbc607__0 = 0U;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line3__v0 
                    = vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h14cbc607__0;
                __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line3__v0 
                    = (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line3.enqueue(__VdlyVal__calc_centroid_tb__DOT__U6__DOT__line3__v0, (IData)(__VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line3__v0));
            }
            vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i);
        }
        __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_0__v0 = 1U;
    } else if (vlSelfRef.calc_centroid_tb__DOT__vga_ready) {
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v5 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
            [1U];
        __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_0__v5 = 1U;
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v6 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
            [2U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v7 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
            [3U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v8 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
            [4U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v5 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
            [1U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v6 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
            [2U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v7 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
            [3U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v8 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
            [4U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v5 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
            [1U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v6 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
            [2U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v7 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
            [3U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v8 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
            [4U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v5 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
            [1U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v6 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
            [2U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v7 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
            [3U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v8 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
            [4U];
        if ((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col))) {
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v9 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line0
                [(0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)];
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v9 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line1
                [(0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)];
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v9 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line2
                [(0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)];
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v9 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line3
                [(0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)];
            vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h30510e2c__0 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line1
                [(0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)];
        } else {
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v9 = 0U;
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v9 = 0U;
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v9 = 0U;
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v9 = 0U;
            vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h30510e2c__0 = 0U;
        }
        if ((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col))) {
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v1 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h30510e2c__0;
            __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v1 
                = (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col);
            vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line0.enqueue(__VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v1, (IData)(__VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v1));
        }
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_hfa9c3548__0 
            = ((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col))
                ? vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line2
               [(0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)]
                : 0U);
        if ((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col))) {
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v1 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_hfa9c3548__0;
            __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v1 
                = (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col);
            vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line1.enqueue(__VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v1, (IData)(__VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v1));
        }
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_ha2cf1aa2__0 
            = ((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col))
                ? vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line3
               [(0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)]
                : 0U);
        if ((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col))) {
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line2__v1 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_ha2cf1aa2__0;
            __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line2__v1 
                = (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col);
            vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line2.enqueue(__VdlyVal__calc_centroid_tb__DOT__U6__DOT__line2__v1, (IData)(__VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line2__v1));
        }
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h3d11f6d6__0 
            = vlSelfRef.calc_centroid_tb__DOT__grey_data;
        if ((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col))) {
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line3__v1 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h3d11f6d6__0;
            __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line3__v1 
                = (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col);
            vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line3.enqueue(__VdlyVal__calc_centroid_tb__DOT__U6__DOT__line3__v1, (IData)(__VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line3__v1));
        }
        __Vdly__calc_centroid_tb__DOT__U6__DOT__col 
            = ((0x27fU == vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)
                ? 0U : ((IData)(1U) + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col));
    }
    if (vlSelfRef.calc_centroid_tb__DOT__sys_reset) {
        __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_x = 0U;
        __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_p = 0U;
        __Vdly__calc_centroid_tb__DOT__U8__DOT__pixel_count = 0U;
        __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count = 0U;
        __Vdly__calc_centroid_tb__DOT__U8__DOT__window_start_row = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U8__DOT__centroid_x_reg = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_reg = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_reg = 1U;
    } else if ((0x10U & (IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift))) {
        if ((0U < (0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                           >> 8U)))) {
            __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_x 
                = (0x1ffffffU & (vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_x 
                                 + (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__pixel_count)));
            __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_p 
                = (0xfffffU & ((IData)(1U) + vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p));
        }
        if ((0x27fU == (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__pixel_count))) {
            __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count)));
            __Vdly__calc_centroid_tb__DOT__U8__DOT__pixel_count = 0U;
            if ((0x40U == ((IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count) 
                           - (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__window_start_row)))) {
                __Vdly__calc_centroid_tb__DOT__U8__DOT__window_start_row 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__window_start_row)));
                if ((0U < vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p)) {
                    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__centroid_x_reg 
                        = (0x7ffU & VL_DIV_III(25, vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_x, vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p));
                    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_reg = 1U;
                    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_reg = 0U;
                } else {
                    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__centroid_x_reg = 0U;
                    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_reg = 0U;
                    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_reg = 1U;
                }
                __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_x = 0U;
                __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_p = 0U;
            }
        } else {
            __Vdly__calc_centroid_tb__DOT__U8__DOT__pixel_count 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__pixel_count)));
        }
        if ((0x1dfU == (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count))) {
            __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count = 0U;
            __Vdly__calc_centroid_tb__DOT__U8__DOT__window_start_row = 0U;
        }
    }
    if (__VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_4__v0) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[0U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[1U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[2U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[3U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[4U] = 0U;
    }
    if (__VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_4__v5) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[0U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v5;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[1U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v6;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[2U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v7;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[3U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v8;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[4U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_4__v9;
    }
    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col = __Vdly__calc_centroid_tb__DOT__U6__DOT__col;
    vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line0.commit(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line0);
    vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line1.commit(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line1);
    vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line2.commit(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line2);
    vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line3.commit(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line3);
    if (__VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_0__v0) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[0U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[1U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[2U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[3U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[4U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[0U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[1U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[2U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[3U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[4U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[0U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[1U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[2U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[3U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[4U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[0U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[1U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[2U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[3U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[4U] = 0U;
    }
    if (__VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_0__v5) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[0U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v5;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[1U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v6;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[2U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v7;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[3U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v8;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[4U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_0__v9;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[0U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v5;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[1U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v6;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[2U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v7;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[3U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v8;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[4U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_1__v9;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[0U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v5;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[1U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v6;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[2U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v7;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[3U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v8;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[4U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_2__v9;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[0U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v5;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[1U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v6;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[2U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v7;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[3U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v8;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[4U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_3__v9;
    }
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_x 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_x;
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_p;
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__pixel_count 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__pixel_count;
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count;
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__window_start_row 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__window_start_row;
    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift 
        = __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift;
    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx = 
        (0xfffU & (((((((((((((((((((((IData)(0xffffffffU) 
                                      * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
                                      [0U]) + ((IData)(0xfffffffeU) 
                                               * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
                                               [1U])) 
                                    + VL_SHIFTL_III(12,32,32, 
                                                    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
                                                    [3U], 1U)) 
                                   + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
                                   [4U]) + ((IData)(0xfffffffcU) 
                                            * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
                                            [0U])) 
                                 + ((IData)(0xfffffff8U) 
                                    * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
                                    [1U])) + VL_SHIFTL_III(12,32,32, 
                                                           vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
                                                           [3U], 3U)) 
                               + VL_SHIFTL_III(12,32,32, 
                                               vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
                                               [4U], 2U)) 
                              + ((IData)(0xfffffffaU) 
                                 * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
                                 [0U])) + ((IData)(0xfffffff4U) 
                                           * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
                                           [1U])) + 
                            ((IData)(0xcU) * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
                             [3U])) + ((IData)(6U) 
                                       * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
                                       [4U])) + ((IData)(0xfffffffcU) 
                                                 * 
                                                 vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
                                                 [0U])) 
                         + ((IData)(0xfffffff8U) * 
                            vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
                            [1U])) + VL_SHIFTL_III(12,32,32, 
                                                   vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
                                                   [3U], 3U)) 
                       + VL_SHIFTL_III(12,32,32, vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
                                       [4U], 2U)) + 
                      ((IData)(0xffffffffU) * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
                       [0U])) + ((IData)(0xfffffffeU) 
                                 * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
                                 [1U])) + VL_SHIFTL_III(12,32,32, 
                                                        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
                                                        [3U], 1U)) 
                   + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
                   [4U]));
    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy = 
        (0xfffU & (((((((((((((((((((((IData)(0xffffffffU) 
                                      * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
                                      [0U]) + ((IData)(0xfffffffcU) 
                                               * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
                                               [0U])) 
                                    + ((IData)(0xfffffffaU) 
                                       * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
                                       [0U])) + ((IData)(0xfffffffcU) 
                                                 * 
                                                 vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
                                                 [0U])) 
                                  + ((IData)(0xffffffffU) 
                                     * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
                                     [0U])) + ((IData)(0xfffffffeU) 
                                               * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
                                               [1U])) 
                                + ((IData)(0xfffffff8U) 
                                   * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
                                   [1U])) + ((IData)(0xfffffff4U) 
                                             * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
                                             [1U])) 
                              + ((IData)(0xfffffff8U) 
                                 * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
                                 [1U])) + ((IData)(0xfffffffeU) 
                                           * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
                                           [1U])) + 
                            VL_SHIFTL_III(12,32,32, 
                                          vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
                                          [3U], 1U)) 
                           + VL_SHIFTL_III(12,32,32, 
                                           vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
                                           [3U], 3U)) 
                          + ((IData)(0xcU) * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
                             [3U])) + VL_SHIFTL_III(12,32,32, 
                                                    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
                                                    [3U], 3U)) 
                        + VL_SHIFTL_III(12,32,32, vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
                                        [3U], 1U)) 
                       + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0
                       [4U]) + VL_SHIFTL_III(12,32,32, 
                                             vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1
                                             [4U], 2U)) 
                     + ((IData)(6U) * vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2
                        [4U])) + VL_SHIFTL_III(12,32,32, 
                                               vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3
                                               [4U], 2U)) 
                   + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4
                   [4U]));
    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag = 
        (0x1fffU & (VL_EXTENDS_II(13,12, (IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx)) 
                    + VL_EXTENDS_II(13,12, (IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy))));
}

VL_INLINE_OPT void Vcalc_centroid_tb___024root___nba_sequent__TOP__2(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___nba_sequent__TOP__2\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.calc_centroid_tb__DOT__sys_reset)))) {
        if (VL_GTS_III(32, 0x4b000U, vlSelfRef.calc_centroid_tb__DOT__i)) {
            vlSelfRef.calc_centroid_tb__DOT__video_data 
                = ((0x4afffU >= (0x7ffffU & vlSelfRef.calc_centroid_tb__DOT__i))
                    ? vlSelfRef.calc_centroid_tb__DOT__image_mem
                   [(0x7ffffU & vlSelfRef.calc_centroid_tb__DOT__i)]
                    : 0U);
            vlSelfRef.calc_centroid_tb__DOT__vga_ready = 1U;
            vlSelfRef.calc_centroid_tb__DOT__i = ((IData)(1U) 
                                                  + vlSelfRef.calc_centroid_tb__DOT__i);
        } else {
            vlSelfRef.calc_centroid_tb__DOT__vga_ready = 0U;
        }
    }
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

void Vcalc_centroid_tb___024root___timing_resume(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___timing_resume\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcalc_centroid_tb___024root___eval_triggers__act(Vcalc_centroid_tb___024root* vlSelf);

bool Vcalc_centroid_tb___024root___eval_phase__act(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_phase__act\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcalc_centroid_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcalc_centroid_tb___024root___timing_resume(vlSelf);
        Vcalc_centroid_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcalc_centroid_tb___024root___eval_phase__nba(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_phase__nba\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcalc_centroid_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalc_centroid_tb___024root___dump_triggers__nba(Vcalc_centroid_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcalc_centroid_tb___024root___dump_triggers__act(Vcalc_centroid_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcalc_centroid_tb___024root___eval(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcalc_centroid_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/calc_centroid_tb.sv", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcalc_centroid_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/calc_centroid_tb.sv", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcalc_centroid_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcalc_centroid_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcalc_centroid_tb___024root___eval_debug_assertions(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___eval_debug_assertions\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
