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
                                         161);
    VL_FCLOSE_I(vlSelfRef.calc_centroid_tb__DOT__ppm_file); VL_WRITEF_NX("Simulation done. PPM output saved.\n",0);
    VL_STOP_MT("tb/calc_centroid_tb.sv", 164, "");
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
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcalc_centroid_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcalc_centroid_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vcalc_centroid_tb___024root___nba_sequent__TOP__0(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___nba_sequent__TOP__0\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__calc_centroid_tb__DOT__px_cnt;
    __Vdly__calc_centroid_tb__DOT__px_cnt = 0;
    SData/*9:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__x_cnt;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__x_cnt = 0;
    SData/*8:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__y_cnt;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__y_cnt = 0;
    SData/*9:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__first_pixel;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__first_pixel = 0;
    SData/*9:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__last_pixel;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__last_pixel = 0;
    CData/*0:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__row_active;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__row_active = 0;
    IData/*16:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_midpoints;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_midpoints = 0;
    CData/*5:0*/ __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count = 0;
    // Body
    __Vdly__calc_centroid_tb__DOT__px_cnt = vlSelfRef.calc_centroid_tb__DOT__px_cnt;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__x_cnt = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__x_cnt;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__y_cnt = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__y_cnt;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__first_pixel 
        = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__first_pixel;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__last_pixel 
        = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__last_pixel;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__row_active 
        = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_active;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_midpoints 
        = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_midpoints;
    __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count 
        = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count;
    if (vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_r) {
        if (vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_r) {
            VL_WRITEF_NX("Frame centroid lost!\n",0);
        } else {
            VL_WRITEF_NX("Frame centroid_x = %0#\n",0,
                         11,vlSelfRef.calc_centroid_tb__DOT__U8__DOT__centroid_x_r);
        }
    }
    if (VL_UNLIKELY((vlSelfRef.calc_centroid_tb__DOT__vga_ready))) {
        vlSelfRef.calc_centroid_tb__DOT__unnamedblk1__DOT__val 
            = (0xffU & ((0xf0U & (IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag)) 
                        | (0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                   >> 4U))));
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
    if (vlSelfRef.calc_centroid_tb__DOT__sys_reset) {
        __Vdly__calc_centroid_tb__DOT__U8__DOT__x_cnt = 0U;
        __Vdly__calc_centroid_tb__DOT__U8__DOT__y_cnt = 0U;
        __Vdly__calc_centroid_tb__DOT__U8__DOT__first_pixel = 0x280U;
        __Vdly__calc_centroid_tb__DOT__U8__DOT__last_pixel = 0U;
        __Vdly__calc_centroid_tb__DOT__U8__DOT__row_active = 0U;
        __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_midpoints = 0U;
        __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U8__DOT__centroid_x_r = 0x140U;
        vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_r = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_r = 0U;
    } else if (vlSelfRef.calc_centroid_tb__DOT__vga_ready) {
        vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_r = 0U;
        if ((0x1a4U <= (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__y_cnt))) {
            if ((0U < (0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                               >> 4U)))) {
                if ((1U & (~ (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_active)))) {
                    __Vdly__calc_centroid_tb__DOT__U8__DOT__first_pixel 
                        = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__x_cnt;
                    __Vdly__calc_centroid_tb__DOT__U8__DOT__row_active = 1U;
                }
                __Vdly__calc_centroid_tb__DOT__U8__DOT__last_pixel 
                    = vlSelfRef.calc_centroid_tb__DOT__U8__DOT__x_cnt;
            }
            if ((0x27fU == (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__x_cnt))) {
                if (vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_active) {
                    __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_midpoints 
                        = (0x1ffffU & (vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_midpoints 
                                       + VL_SHIFTR_III(17,17,32, 
                                                       (0x1ffffU 
                                                        & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__first_pixel) 
                                                           + (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__last_pixel))), 1U)));
                    __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count 
                        = (0x3fU & ((IData)(1U) + (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count)));
                }
                __Vdly__calc_centroid_tb__DOT__U8__DOT__x_cnt = 0U;
                if ((0x1dfU == (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__y_cnt))) {
                    if ((0U != (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count))) {
                        vlSelfRef.calc_centroid_tb__DOT__U8__DOT__centroid_x_r 
                            = (0x3ffU & VL_SHIFTR_III(17,17,32, vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_midpoints, 
                                                      VL_CLOG2_I((IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count))));
                        vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_r = 0U;
                    } else {
                        vlSelfRef.calc_centroid_tb__DOT__U8__DOT__centroid_x_r = 0x140U;
                        vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_r = 1U;
                    }
                    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_r = 1U;
                    __Vdly__calc_centroid_tb__DOT__U8__DOT__y_cnt = 0U;
                    __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_midpoints = 0U;
                    __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count = 0U;
                } else {
                    __Vdly__calc_centroid_tb__DOT__U8__DOT__y_cnt 
                        = (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__y_cnt)));
                }
                __Vdly__calc_centroid_tb__DOT__U8__DOT__first_pixel = 0x280U;
                __Vdly__calc_centroid_tb__DOT__U8__DOT__last_pixel = 0U;
                __Vdly__calc_centroid_tb__DOT__U8__DOT__row_active = 0U;
            } else {
                __Vdly__calc_centroid_tb__DOT__U8__DOT__x_cnt 
                    = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__x_cnt)));
            }
        } else if ((0x27fU == (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__x_cnt))) {
            __Vdly__calc_centroid_tb__DOT__U8__DOT__y_cnt 
                = ((0x1dfU == (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__y_cnt))
                    ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__y_cnt))));
            __Vdly__calc_centroid_tb__DOT__U8__DOT__x_cnt = 0U;
        } else {
            __Vdly__calc_centroid_tb__DOT__U8__DOT__x_cnt 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__x_cnt)));
        }
    }
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__x_cnt 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__x_cnt;
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__y_cnt 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__y_cnt;
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__first_pixel 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__first_pixel;
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__last_pixel 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__last_pixel;
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_active 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__row_active;
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_midpoints 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__sum_midpoints;
    vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count 
        = __Vdly__calc_centroid_tb__DOT__U8__DOT__row_count;
}

VL_INLINE_OPT void Vcalc_centroid_tb___024root___nba_sequent__TOP__1(Vcalc_centroid_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root___nba_sequent__TOP__1\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift;
    __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift = 0;
    IData/*31:0*/ __Vdly__calc_centroid_tb__DOT__U6__DOT__col;
    __Vdly__calc_centroid_tb__DOT__U6__DOT__col = 0;
    CData/*0:0*/ __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_bot__v0;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_bot__v0 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v3;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v3 = 0;
    CData/*0:0*/ __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_bot__v3;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_bot__v3 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v4;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v4 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v5;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v5 = 0;
    CData/*0:0*/ __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v0;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v0 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v0;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v0 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v0;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v0 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v0;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v0 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v0;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v0 = 0;
    CData/*0:0*/ __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v1;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v1 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v3;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v3 = 0;
    CData/*0:0*/ __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v3;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v3 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v4;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v4 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v5;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v5 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v3;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v3 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v4;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v4 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v5;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v5 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v1;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v1 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v1;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v1 = 0;
    CData/*3:0*/ __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v1;
    __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v1 = 0;
    SData/*9:0*/ __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v1;
    __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v1 = 0;
    // Body
    __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift 
        = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_bot__v0 = 0U;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_bot__v3 = 0U;
    __Vdly__calc_centroid_tb__DOT__U6__DOT__col = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v0 = 0U;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v1 = 0U;
    __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v3 = 0U;
    if (vlSelfRef.calc_centroid_tb__DOT__sys_reset) {
        __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift = 0U;
        __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_bot__v0 = 1U;
    } else if (vlSelfRef.calc_centroid_tb__DOT__vga_ready) {
        __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift 
            = ((6U & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift) 
                      << 1U)) | (IData)(vlSelfRef.calc_centroid_tb__DOT__vga_ready));
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v3 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot
            [1U];
        __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_bot__v3 = 1U;
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v4 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot
            [2U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v5 
            = vlSelfRef.calc_centroid_tb__DOT__grey_data;
    }
    if (vlSelfRef.calc_centroid_tb__DOT__sys_reset) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i = 0U;
        __Vdly__calc_centroid_tb__DOT__U6__DOT__col = 0U;
        __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v0 = 1U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h7c89ed01__0 = 0U;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v0 
                    = vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h7c89ed01__0;
                __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v0 
                    = (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line0.enqueue(__VdlyVal__calc_centroid_tb__DOT__U6__DOT__line0__v0, (IData)(__VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line0__v0));
            }
            vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_hc6643a1d__0 = 0U;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v0 
                    = vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_hc6643a1d__0;
                __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v0 
                    = (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line1.enqueue(__VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v0, (IData)(__VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v0));
            }
            vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i);
        }
        __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v1 = 1U;
    } else if (vlSelfRef.calc_centroid_tb__DOT__vga_ready) {
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v3 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top
            [1U];
        __VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v3 = 1U;
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v4 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top
            [2U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v3 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid
            [1U];
        __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v4 
            = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid
            [2U];
        if ((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col))) {
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v5 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line0
                [(0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)];
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v5 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line1
                [(0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)];
            vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_h30510e2c__0 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line1
                [(0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)];
        } else {
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v5 = 0U;
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v5 = 0U;
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
            = vlSelfRef.calc_centroid_tb__DOT__grey_data;
        if ((0x27fU >= (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col))) {
            __VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v1 
                = vlSelfRef.calc_centroid_tb__DOT__U6__DOT____Vlvbound_hfa9c3548__0;
            __VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v1 
                = (0x3ffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col);
            vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line1.enqueue(__VdlyVal__calc_centroid_tb__DOT__U6__DOT__line1__v1, (IData)(__VdlyDim0__calc_centroid_tb__DOT__U6__DOT__line1__v1));
        }
        __Vdly__calc_centroid_tb__DOT__U6__DOT__col 
            = ((0x27fU == vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col)
                ? 0U : ((IData)(1U) + vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col));
    }
    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift 
        = __Vdly__calc_centroid_tb__DOT__U6__DOT__ready_shift;
    if (__VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_bot__v0) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot[0U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot[1U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot[2U] = 0U;
    }
    if (__VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_bot__v3) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot[0U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v3;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot[1U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v4;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot[2U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_bot__v5;
    }
    vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col = __Vdly__calc_centroid_tb__DOT__U6__DOT__col;
    vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line0.commit(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line0);
    vlSelfRef.__VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line1.commit(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__line1);
    if (__VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v0) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top[0U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid[0U] = 0U;
    }
    if (__VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v1) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top[1U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top[2U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid[1U] = 0U;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid[2U] = 0U;
    }
    if (__VdlySet__calc_centroid_tb__DOT__U6__DOT__shift_top__v3) {
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top[0U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v3;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top[1U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v4;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top[2U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_top__v5;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid[0U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v3;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid[1U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v4;
        vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid[2U] 
            = __VdlyVal__calc_centroid_tb__DOT__U6__DOT__shift_mid__v5;
    }
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
