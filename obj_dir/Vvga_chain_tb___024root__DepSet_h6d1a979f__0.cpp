// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_chain_tb.h for the primary calling header

#include "Vvga_chain_tb__pch.h"
#include "Vvga_chain_tb___024root.h"

VL_ATTR_COLD void Vvga_chain_tb___024root___eval_initial__TOP(Vvga_chain_tb___024root* vlSelf);
VlCoroutine Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__0(Vvga_chain_tb___024root* vlSelf);
VlCoroutine Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__1(Vvga_chain_tb___024root* vlSelf);
VlCoroutine Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__2(Vvga_chain_tb___024root* vlSelf);
VlCoroutine Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__3(Vvga_chain_tb___024root* vlSelf);

void Vvga_chain_tb___024root___eval_initial(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_initial\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vvga_chain_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__3(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__0(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vga_chain_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/vga_chain_tb.sv", 
                                             87);
        vlSelfRef.vga_chain_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.vga_chain_tb__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__1(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vga_chain_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "tb/vga_chain_tb.sv", 
                                         93);
    vlSelfRef.vga_chain_tb__DOT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__2(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.vga_chain_tb__DOT__tb_in_ready = 0U;
    vlSelfRef.vga_chain_tb__DOT__tb_pixel_in = 0U;
    vlSelfRef.vga_chain_tb__DOT__pixel_idx = 0U;
    while (vlSelfRef.vga_chain_tb__DOT__rst) {
        co_await vlSelfRef.__VtrigSched_h88180eb7__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ vga_chain_tb.rst))", 
                                                             "tb/vga_chain_tb.sv", 
                                                             133);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h85dfb695__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge vga_chain_tb.clk)", 
                                                             "tb/vga_chain_tb.sv", 
                                                             138);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        if ((((0x8eU <= vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count) 
              & (0x30dU >= vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)) 
             & ((0x23U <= (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)) 
                & (0x203U > (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count))))) {
            if (VL_GTS_III(32, 0x4b000U, vlSelfRef.vga_chain_tb__DOT__pixel_idx)) {
                vlSelfRef.vga_chain_tb__DOT__tb_pixel_in 
                    = ((0x4afffU >= (0x7ffffU & vlSelfRef.vga_chain_tb__DOT__pixel_idx))
                        ? vlSelfRef.vga_chain_tb__DOT__img_mem
                       [(0x7ffffU & vlSelfRef.vga_chain_tb__DOT__pixel_idx)]
                        : 0U);
                vlSelfRef.vga_chain_tb__DOT__pixel_idx 
                    = ((IData)(1U) + vlSelfRef.vga_chain_tb__DOT__pixel_idx);
            } else {
                vlSelfRef.vga_chain_tb__DOT__tb_pixel_in = 0U;
            }
            vlSelfRef.vga_chain_tb__DOT__tb_in_ready = 1U;
            co_await vlSelfRef.__VtrigSched_h85dfb695__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge vga_chain_tb.clk)", 
                                                                 "tb/vga_chain_tb.sv", 
                                                                 148);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
            vlSelfRef.vga_chain_tb__DOT__tb_in_ready = 0U;
        }
    }
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__3(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelfRef.vga_chain_tb__DOT__written_pixels = 0U;
    vlSelfRef.vga_chain_tb__DOT__cycle_count = 0U;
    __Vtemp_1[0U] = 0x2e70706dU;
    __Vtemp_1[1U] = 0x5f766761U;
    __Vtemp_1[2U] = 0x65646765U;
    vlSelfRef.vga_chain_tb__DOT__fd = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                                                  , 
                                                  std::string{"w"});
    ;
    if (VL_UNLIKELY(((0U == vlSelfRef.vga_chain_tb__DOT__fd)))) {
        VL_WRITEF_NX("ERROR: cannot open output file edge_vga.ppm\n",0);
        VL_FINISH_MT("tb/vga_chain_tb.sv", 164, "");
    }
    VL_FWRITEF_NX(vlSelfRef.vga_chain_tb__DOT__fd,"P3\n640 480\n255\n",0);
    while (vlSelfRef.vga_chain_tb__DOT__rst) {
        co_await vlSelfRef.__VtrigSched_h88180eb7__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ vga_chain_tb.rst))", 
                                                             "tb/vga_chain_tb.sv", 
                                                             170);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    while (1U) {
        co_await vlSelfRef.__VtrigSched_h85dfb695__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge vga_chain_tb.clk)", 
                                                             "tb/vga_chain_tb.sv", 
                                                             174);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
        vlSelfRef.vga_chain_tb__DOT__cycle_count = 
            ((IData)(1U) + vlSelfRef.vga_chain_tb__DOT__cycle_count);
        if (VL_UNLIKELY((vlSelfRef.vga_chain_tb__DOT__tb_in_ready))) {
            vlSelfRef.vga_chain_tb__DOT__r8 = ((0xf0U 
                                                & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag) 
                                                   << 4U)) 
                                               | (0xfU 
                                                  & (IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag)));
            vlSelfRef.vga_chain_tb__DOT__g8 = ((0xf0U 
                                                & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag) 
                                                   << 4U)) 
                                               | (0xfU 
                                                  & (IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag)));
            vlSelfRef.vga_chain_tb__DOT__b8 = ((0xf0U 
                                                & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag) 
                                                   << 4U)) 
                                               | (0xfU 
                                                  & (IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag)));
            VL_FWRITEF_NX(vlSelfRef.vga_chain_tb__DOT__fd,"%0# %0# %0#\n",0,
                          8,vlSelfRef.vga_chain_tb__DOT__r8,
                          8,(IData)(vlSelfRef.vga_chain_tb__DOT__g8),
                          8,vlSelfRef.vga_chain_tb__DOT__b8);
            vlSelfRef.vga_chain_tb__DOT__written_pixels 
                = ((IData)(1U) + vlSelfRef.vga_chain_tb__DOT__written_pixels);
            if (VL_UNLIKELY(((0x4b000U == vlSelfRef.vga_chain_tb__DOT__written_pixels)))) {
                VL_FCLOSE_I(vlSelfRef.vga_chain_tb__DOT__fd); VL_WRITEF_NX("\342\234\205 VGA chain simulation complete, output written to edge_vga.ppm\n",0);
                VL_FINISH_MT("tb/vga_chain_tb.sv", 189, "");
            }
        }
        if (VL_UNLIKELY((VL_LTS_III(32, 0x5dc000U, vlSelfRef.vga_chain_tb__DOT__cycle_count)))) {
            VL_WRITEF_NX("ERROR: simulation timeout after %0d cycles, written %0d pixels\n",0,
                         32,vlSelfRef.vga_chain_tb__DOT__cycle_count,
                         32,vlSelfRef.vga_chain_tb__DOT__written_pixels);
            VL_FCLOSE_I(vlSelfRef.vga_chain_tb__DOT__fd); VL_FINISH_MT("tb/vga_chain_tb.sv", 197, "");
        }
    }
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

void Vvga_chain_tb___024root___act_comb__TOP__0(Vvga_chain_tb___024root* vlSelf);

void Vvga_chain_tb___024root___eval_act(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_act\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((9ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vvga_chain_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vvga_chain_tb___024root___act_comb__TOP__0(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___act_comb__TOP__0\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vvga_chain_tb___024root___nba_sequent__TOP__0(Vvga_chain_tb___024root* vlSelf);
void Vvga_chain_tb___024root___nba_sequent__TOP__1(Vvga_chain_tb___024root* vlSelf);
void Vvga_chain_tb___024root___nba_comb__TOP__1(Vvga_chain_tb___024root* vlSelf);

void Vvga_chain_tb___024root___eval_nba(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_nba\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvga_chain_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvga_chain_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((9ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvga_chain_tb___024root___act_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vvga_chain_tb___024root___nba_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
}

VL_INLINE_OPT void Vvga_chain_tb___024root___nba_sequent__TOP__0(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___nba_sequent__TOP__0\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__vga_chain_tb__DOT__edge_dut__DOT__ready_shift;
    __Vdly__vga_chain_tb__DOT__edge_dut__DOT__ready_shift = 0;
    IData/*31:0*/ __Vdly__vga_chain_tb__DOT__edge_dut__DOT__col;
    __Vdly__vga_chain_tb__DOT__edge_dut__DOT__col = 0;
    CData/*0:0*/ __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v0;
    __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v0 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v3;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v3 = 0;
    CData/*0:0*/ __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v3;
    __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v3 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v4;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v4 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v5;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v5 = 0;
    CData/*0:0*/ __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v0;
    __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v0 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line0__v0;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line0__v0 = 0;
    SData/*9:0*/ __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line0__v0;
    __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line0__v0 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line1__v0;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line1__v0 = 0;
    SData/*9:0*/ __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line1__v0;
    __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line1__v0 = 0;
    CData/*0:0*/ __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v1;
    __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v1 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v3;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v3 = 0;
    CData/*0:0*/ __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v3;
    __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v3 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v4;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v4 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v5;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v5 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v3;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v3 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v4;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v4 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v5;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v5 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line0__v1;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line0__v1 = 0;
    SData/*9:0*/ __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line0__v1;
    __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line0__v1 = 0;
    CData/*3:0*/ __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line1__v1;
    __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line1__v1 = 0;
    SData/*9:0*/ __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line1__v1;
    __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line1__v1 = 0;
    // Body
    __Vdly__vga_chain_tb__DOT__edge_dut__DOT__ready_shift 
        = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__ready_shift;
    __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v0 = 0U;
    __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v3 = 0U;
    __Vdly__vga_chain_tb__DOT__edge_dut__DOT__col = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col;
    __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v0 = 0U;
    __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v1 = 0U;
    __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v3 = 0U;
    if (vlSelfRef.vga_chain_tb__DOT__rst) {
        __Vdly__vga_chain_tb__DOT__edge_dut__DOT__ready_shift = 0U;
        __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v0 = 1U;
    } else if (vlSelfRef.vga_chain_tb__DOT__tb_in_ready) {
        __Vdly__vga_chain_tb__DOT__edge_dut__DOT__ready_shift 
            = ((6U & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__ready_shift) 
                      << 1U)) | (IData)(vlSelfRef.vga_chain_tb__DOT__tb_in_ready));
        __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v3 
            = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot
            [1U];
        __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v3 = 1U;
        __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v4 
            = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot
            [2U];
        __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v5 
            = vlSelfRef.vga_chain_tb__DOT__grey_pixel;
    }
    if (vlSelfRef.vga_chain_tb__DOT__rst) {
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i = 0U;
        __Vdly__vga_chain_tb__DOT__edge_dut__DOT__col = 0U;
        __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v0 = 1U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_h7c89ed01__0 = 0U;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line0__v0 
                    = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_h7c89ed01__0;
                __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line0__v0 
                    = (0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuevga_chain_tb__DOT__edge_dut__DOT__line0.enqueue(__VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line0__v0, (IData)(__VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line0__v0));
            }
            vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_hc6643a1d__0 = 0U;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line1__v0 
                    = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_hc6643a1d__0;
                __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line1__v0 
                    = (0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuevga_chain_tb__DOT__edge_dut__DOT__line1.enqueue(__VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line1__v0, (IData)(__VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line1__v0));
            }
            vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i);
        }
        __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v1 = 1U;
    } else if (vlSelfRef.vga_chain_tb__DOT__tb_in_ready) {
        __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v3 
            = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top
            [1U];
        __VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v3 = 1U;
        __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v4 
            = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top
            [2U];
        __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v3 
            = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid
            [1U];
        __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v4 
            = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid
            [2U];
        if ((0x27fU >= (0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col))) {
            __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v5 
                = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__line0
                [(0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col)];
            __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v5 
                = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__line1
                [(0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col)];
            vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_h30510e2c__0 
                = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__line1
                [(0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col)];
        } else {
            __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v5 = 0U;
            __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v5 = 0U;
            vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_h30510e2c__0 = 0U;
        }
        if ((0x27fU >= (0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col))) {
            __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line0__v1 
                = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_h30510e2c__0;
            __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line0__v1 
                = (0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col);
            vlSelfRef.__VdlyCommitQueuevga_chain_tb__DOT__edge_dut__DOT__line0.enqueue(__VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line0__v1, (IData)(__VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line0__v1));
        }
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_hfa9c3548__0 
            = vlSelfRef.vga_chain_tb__DOT__grey_pixel;
        if ((0x27fU >= (0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col))) {
            __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line1__v1 
                = vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_hfa9c3548__0;
            __VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line1__v1 
                = (0x3ffU & vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col);
            vlSelfRef.__VdlyCommitQueuevga_chain_tb__DOT__edge_dut__DOT__line1.enqueue(__VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__line1__v1, (IData)(__VdlyDim0__vga_chain_tb__DOT__edge_dut__DOT__line1__v1));
        }
        __Vdly__vga_chain_tb__DOT__edge_dut__DOT__col 
            = ((0x27fU == vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col)
                ? 0U : ((IData)(1U) + vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col));
    }
    vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__ready_shift 
        = __Vdly__vga_chain_tb__DOT__edge_dut__DOT__ready_shift;
    if (__VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v0) {
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[0U] = 0U;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[1U] = 0U;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[2U] = 0U;
    }
    if (__VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v3) {
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[0U] 
            = __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v3;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[1U] 
            = __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v4;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[2U] 
            = __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_bot__v5;
    }
    vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col 
        = __Vdly__vga_chain_tb__DOT__edge_dut__DOT__col;
    vlSelfRef.__VdlyCommitQueuevga_chain_tb__DOT__edge_dut__DOT__line0.commit(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__line0);
    vlSelfRef.__VdlyCommitQueuevga_chain_tb__DOT__edge_dut__DOT__line1.commit(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__line1);
    if (__VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v0) {
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[0U] = 0U;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[0U] = 0U;
    }
    if (__VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v1) {
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[1U] = 0U;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[2U] = 0U;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[1U] = 0U;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[2U] = 0U;
    }
    if (__VdlySet__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v3) {
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[0U] 
            = __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v3;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[1U] 
            = __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v4;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[2U] 
            = __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_top__v5;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[0U] 
            = __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v3;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[1U] 
            = __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v4;
        vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[2U] 
            = __VdlyVal__vga_chain_tb__DOT__edge_dut__DOT__shift_mid__v5;
    }
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
}

VL_INLINE_OPT void Vvga_chain_tb___024root___nba_sequent__TOP__1(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___nba_sequent__TOP__1\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*20:0*/ __Vdly__vga_chain_tb__DOT__vga__DOT__pixel_count;
    __Vdly__vga_chain_tb__DOT__vga__DOT__pixel_count = 0;
    SData/*11:0*/ __Vdly__vga_chain_tb__DOT__vga__DOT__line_count;
    __Vdly__vga_chain_tb__DOT__vga__DOT__line_count = 0;
    // Body
    __Vdly__vga_chain_tb__DOT__vga__DOT__line_count 
        = vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count;
    __Vdly__vga_chain_tb__DOT__vga__DOT__pixel_count 
        = vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count;
    if (vlSelfRef.vga_chain_tb__DOT__rst) {
        __Vdly__vga_chain_tb__DOT__vga__DOT__pixel_count = 0U;
        __Vdly__vga_chain_tb__DOT__vga__DOT__line_count = 0U;
        vlSelfRef.vga_chain_tb__DOT__vga__DOT__state = 0U;
    } else {
        __Vdly__vga_chain_tb__DOT__vga__DOT__pixel_count 
            = ((0x31fU != vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                ? (0x1fffffU & ((IData)(1U) + vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count))
                : 0U);
        __Vdly__vga_chain_tb__DOT__vga__DOT__line_count 
            = ((0x20cU != (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count))
                ? (0xfffU & ((0x31fU == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                              ? ((IData)(1U) + (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count))
                              : (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)))
                : 0U);
        vlSelfRef.vga_chain_tb__DOT__vga__DOT__state 
            = vlSelfRef.vga_chain_tb__DOT__vga__DOT__next_state;
    }
    vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count 
        = __Vdly__vga_chain_tb__DOT__vga__DOT__line_count;
    vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count 
        = __Vdly__vga_chain_tb__DOT__vga__DOT__pixel_count;
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
}

VL_INLINE_OPT void Vvga_chain_tb___024root___nba_comb__TOP__1(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___nba_comb__TOP__1\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

void Vvga_chain_tb___024root___timing_commit(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___timing_commit\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h88180eb7__0.commit(
                                                   "@( (~ vga_chain_tb.rst))");
    }
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h85dfb695__0.commit(
                                                   "@(posedge vga_chain_tb.clk)");
    }
}

void Vvga_chain_tb___024root___timing_resume(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___timing_resume\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h88180eb7__0.resume(
                                                   "@( (~ vga_chain_tb.rst))");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h85dfb695__0.resume(
                                                   "@(posedge vga_chain_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vvga_chain_tb___024root___eval_triggers__act(Vvga_chain_tb___024root* vlSelf);

bool Vvga_chain_tb___024root___eval_phase__act(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_phase__act\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vvga_chain_tb___024root___eval_triggers__act(vlSelf);
    Vvga_chain_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vvga_chain_tb___024root___timing_resume(vlSelf);
        Vvga_chain_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vvga_chain_tb___024root___eval_phase__nba(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_phase__nba\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vvga_chain_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_chain_tb___024root___dump_triggers__nba(Vvga_chain_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga_chain_tb___024root___dump_triggers__act(Vvga_chain_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vvga_chain_tb___024root___eval(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vvga_chain_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/vga_chain_tb.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vvga_chain_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/vga_chain_tb.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vvga_chain_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vvga_chain_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vvga_chain_tb___024root___eval_debug_assertions(Vvga_chain_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root___eval_debug_assertions\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
