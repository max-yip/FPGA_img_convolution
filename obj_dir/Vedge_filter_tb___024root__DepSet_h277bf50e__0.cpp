// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vedge_filter_tb.h for the primary calling header

#include "Vedge_filter_tb__pch.h"
#include "Vedge_filter_tb___024root.h"

VlCoroutine Vedge_filter_tb___024root___eval_initial__TOP__Vtiming__0(Vedge_filter_tb___024root* vlSelf);
VlCoroutine Vedge_filter_tb___024root___eval_initial__TOP__Vtiming__1(Vedge_filter_tb___024root* vlSelf);

void Vedge_filter_tb___024root___eval_initial(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_initial\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vedge_filter_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vedge_filter_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vedge_filter_tb___024root___eval_initial__TOP__Vtiming__0(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ edge_filter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    edge_filter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelfRef.edge_filter_tb__DOT__clk = 0U;
    vlSelfRef.edge_filter_tb__DOT__rst = 1U;
    vlSelfRef.edge_filter_tb__DOT__in_ready = 0U;
    vlSelfRef.edge_filter_tb__DOT__pixel_in = 0U;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x32626974U;
    __Vtemp_1[2U] = 0x67655f31U;
    __Vtemp_1[3U] = 0x696d61U;
    VL_READMEM_N(true, 12, 307200, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.edge_filter_tb__DOT__img_mem)
                 , 0, ~0ULL);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/edge_filter_tb.sv", 
                                         108);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.edge_filter_tb__DOT__rst = 0U;
    vlSelfRef.edge_filter_tb__DOT__fd = VL_FOPEN_NN(
                                                    std::string{"edge.ppm"}
                                                    , 
                                                    std::string{"w"});
    ;
    VL_FWRITEF_NX(vlSelfRef.edge_filter_tb__DOT__fd,"P3\n        640         480\n255\n",0);
    vlSelfRef.edge_filter_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4b000U, vlSelfRef.edge_filter_tb__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_h5b4003fc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge edge_filter_tb.clk)", 
                                                             "tb/edge_filter_tb.sv", 
                                                             116);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.edge_filter_tb__DOT__pixel_in = (
                                                   (0x4afffU 
                                                    >= 
                                                    (0x7ffffU 
                                                     & vlSelfRef.edge_filter_tb__DOT__i))
                                                    ? 
                                                   vlSelfRef.edge_filter_tb__DOT__img_mem
                                                   [
                                                   (0x7ffffU 
                                                    & vlSelfRef.edge_filter_tb__DOT__i)]
                                                    : 0U);
        vlSelfRef.edge_filter_tb__DOT__in_ready = 1U;
        co_await vlSelfRef.__VtrigSched_h5b4003fc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge edge_filter_tb.clk)", 
                                                             "tb/edge_filter_tb.sv", 
                                                             119);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.edge_filter_tb__DOT__in_ready = 0U;
        if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__ready_shift))))) {
            vlSelfRef.edge_filter_tb__DOT__gray8 = 
                (0xffU & ((0xf0U & ((IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__mag) 
                                    << 4U)) | (0xfU 
                                               & (IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__mag))));
            VL_FWRITEF_NX(vlSelfRef.edge_filter_tb__DOT__fd,"%0d %0d %0d\n",0,
                          32,vlSelfRef.edge_filter_tb__DOT__gray8,
                          32,vlSelfRef.edge_filter_tb__DOT__gray8,
                          32,vlSelfRef.edge_filter_tb__DOT__gray8);
        }
        vlSelfRef.edge_filter_tb__DOT__i = ((IData)(1U) 
                                            + vlSelfRef.edge_filter_tb__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_h5b4003fc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge edge_filter_tb.clk)", 
                                                         "tb/edge_filter_tb.sv", 
                                                         130);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.edge_filter_tb__DOT__pixel_in = 0U;
    vlSelfRef.edge_filter_tb__DOT__in_ready = 1U;
    co_await vlSelfRef.__VtrigSched_h5b4003fc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge edge_filter_tb.clk)", 
                                                         "tb/edge_filter_tb.sv", 
                                                         133);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.edge_filter_tb__DOT__in_ready = 0U;
    if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__ready_shift))))) {
        vlSelfRef.edge_filter_tb__DOT__gray8 = 0U;
        VL_FWRITEF_NX(vlSelfRef.edge_filter_tb__DOT__fd,"%0d %0d %0d\n",0,
                      32,vlSelfRef.edge_filter_tb__DOT__gray8,
                      32,vlSelfRef.edge_filter_tb__DOT__gray8,
                      32,vlSelfRef.edge_filter_tb__DOT__gray8);
    }
    co_await vlSelfRef.__VtrigSched_h5b4003fc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge edge_filter_tb.clk)", 
                                                         "tb/edge_filter_tb.sv", 
                                                         130);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.edge_filter_tb__DOT__pixel_in = 0U;
    vlSelfRef.edge_filter_tb__DOT__in_ready = 1U;
    co_await vlSelfRef.__VtrigSched_h5b4003fc__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge edge_filter_tb.clk)", 
                                                         "tb/edge_filter_tb.sv", 
                                                         133);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.edge_filter_tb__DOT__in_ready = 0U;
    if (VL_UNLIKELY(((4U & (IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__ready_shift))))) {
        vlSelfRef.edge_filter_tb__DOT__gray8 = 0U;
        VL_FWRITEF_NX(vlSelfRef.edge_filter_tb__DOT__fd,"%0d %0d %0d\n",0,
                      32,vlSelfRef.edge_filter_tb__DOT__gray8,
                      32,vlSelfRef.edge_filter_tb__DOT__gray8,
                      32,vlSelfRef.edge_filter_tb__DOT__gray8);
    }
    edge_filter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0x780U;
    while (VL_LTS_III(32, 0U, edge_filter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h5b4003fc__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge edge_filter_tb.clk)", 
                                                             "tb/edge_filter_tb.sv", 
                                                             143);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        edge_filter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (edge_filter_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_FCLOSE_I(vlSelfRef.edge_filter_tb__DOT__fd); VL_WRITEF_NX("\342\234\205 Simulation complete, output written to edge.ppm\n",0);
    VL_FINISH_MT("tb/edge_filter_tb.sv", 148, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vedge_filter_tb___024root___act_comb__TOP__0(Vedge_filter_tb___024root* vlSelf);

void Vedge_filter_tb___024root___eval_act(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_act\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vedge_filter_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vedge_filter_tb___024root___act_comb__TOP__0(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___act_comb__TOP__0\n"); );
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
}

void Vedge_filter_tb___024root___nba_sequent__TOP__0(Vedge_filter_tb___024root* vlSelf);
void Vedge_filter_tb___024root___nba_sequent__TOP__1(Vedge_filter_tb___024root* vlSelf);

void Vedge_filter_tb___024root___eval_nba(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_nba\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vedge_filter_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vedge_filter_tb___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vedge_filter_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vedge_filter_tb___024root___nba_sequent__TOP__0(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___nba_sequent__TOP__0\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__edge_filter_tb__DOT__cycle_count;
    __Vdly__edge_filter_tb__DOT__cycle_count = 0;
    // Body
    __Vdly__edge_filter_tb__DOT__cycle_count = vlSelfRef.edge_filter_tb__DOT__cycle_count;
    __Vdly__edge_filter_tb__DOT__cycle_count = ((IData)(vlSelfRef.edge_filter_tb__DOT__rst)
                                                 ? 0U
                                                 : 
                                                ((IData)(1U) 
                                                 + vlSelfRef.edge_filter_tb__DOT__cycle_count));
    if ((1U & (~ (IData)(vlSelfRef.edge_filter_tb__DOT__rst)))) {
        if (VL_UNLIKELY(((IData)((((IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__ready_shift) 
                                   >> 2U) & (~ (IData)(vlSelfRef.edge_filter_tb__DOT__out_seen))))))) {
            VL_WRITEF_NX("\342\234\205 First input seen at cycle %0d\n",0,
                         32,vlSelfRef.edge_filter_tb__DOT__first_in_cycle);
            vlSelfRef.edge_filter_tb__DOT__out_seen = 1U;
            VL_WRITEF_NX("\342\234\205 First output seen at cycle %0d\n\360\237\223\217 Pipeline latency = %0d cycles\n\342\217\261 In time units = %0d ns\n",0,
                         32,vlSelfRef.edge_filter_tb__DOT__first_out_cycle,
                         32,(vlSelfRef.edge_filter_tb__DOT__first_out_cycle 
                             - vlSelfRef.edge_filter_tb__DOT__first_in_cycle),
                         32,VL_MULS_III(32, (IData)(0xaU), 
                                        (vlSelfRef.edge_filter_tb__DOT__first_out_cycle 
                                         - vlSelfRef.edge_filter_tb__DOT__first_in_cycle)));
            vlSelfRef.edge_filter_tb__DOT__first_out_cycle 
                = vlSelfRef.edge_filter_tb__DOT__cycle_count;
        }
        if (((IData)(vlSelfRef.edge_filter_tb__DOT__in_ready) 
             & (~ (IData)(vlSelfRef.edge_filter_tb__DOT__in_seen)))) {
            vlSelfRef.edge_filter_tb__DOT__first_in_cycle 
                = vlSelfRef.edge_filter_tb__DOT__cycle_count;
            vlSelfRef.edge_filter_tb__DOT__in_seen = 1U;
        }
    }
    vlSelfRef.edge_filter_tb__DOT__cycle_count = __Vdly__edge_filter_tb__DOT__cycle_count;
}

VL_INLINE_OPT void Vedge_filter_tb___024root___nba_sequent__TOP__1(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___nba_sequent__TOP__1\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__edge_filter_tb__DOT__edge_dut__DOT__ready_shift;
    __Vdly__edge_filter_tb__DOT__edge_dut__DOT__ready_shift = 0;
    IData/*31:0*/ __Vdly__edge_filter_tb__DOT__edge_dut__DOT__col;
    __Vdly__edge_filter_tb__DOT__edge_dut__DOT__col = 0;
    CData/*0:0*/ __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v0;
    __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v0 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v3;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v3 = 0;
    CData/*0:0*/ __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v3;
    __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v3 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v4;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v4 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v5;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v5 = 0;
    CData/*0:0*/ __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v0;
    __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v0 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line0__v0;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line0__v0 = 0;
    SData/*9:0*/ __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line0__v0;
    __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line0__v0 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line1__v0;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line1__v0 = 0;
    SData/*9:0*/ __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line1__v0;
    __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line1__v0 = 0;
    CData/*0:0*/ __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v1;
    __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v1 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v3;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v3 = 0;
    CData/*0:0*/ __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v3;
    __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v3 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v4;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v4 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v5;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v5 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v3;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v3 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v4;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v4 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v5;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v5 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line0__v1;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line0__v1 = 0;
    SData/*9:0*/ __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line0__v1;
    __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line0__v1 = 0;
    CData/*3:0*/ __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line1__v1;
    __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line1__v1 = 0;
    SData/*9:0*/ __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line1__v1;
    __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line1__v1 = 0;
    // Body
    __Vdly__edge_filter_tb__DOT__edge_dut__DOT__ready_shift 
        = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__ready_shift;
    __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v0 = 0U;
    __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v3 = 0U;
    __Vdly__edge_filter_tb__DOT__edge_dut__DOT__col 
        = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col;
    __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v0 = 0U;
    __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v1 = 0U;
    __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v3 = 0U;
    if (vlSelfRef.edge_filter_tb__DOT__rst) {
        __Vdly__edge_filter_tb__DOT__edge_dut__DOT__ready_shift = 0U;
        __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v0 = 1U;
    } else if (vlSelfRef.edge_filter_tb__DOT__in_ready) {
        __Vdly__edge_filter_tb__DOT__edge_dut__DOT__ready_shift 
            = ((6U & ((IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__ready_shift) 
                      << 1U)) | (IData)(vlSelfRef.edge_filter_tb__DOT__in_ready));
        __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v3 
            = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot
            [1U];
        __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v3 = 1U;
        __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v4 
            = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot
            [2U];
        __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v5 
            = vlSelfRef.edge_filter_tb__DOT__pixel_grey;
    }
    if (vlSelfRef.edge_filter_tb__DOT__rst) {
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i = 0U;
        __Vdly__edge_filter_tb__DOT__edge_dut__DOT__col = 0U;
        __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v0 = 1U;
        while (VL_GTS_III(32, 0x280U, vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_h7c89ed01__0 = 0U;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line0__v0 
                    = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_h7c89ed01__0;
                __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line0__v0 
                    = (0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueueedge_filter_tb__DOT__edge_dut__DOT__line0.enqueue(__VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line0__v0, (IData)(__VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line0__v0));
            }
            vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_hc6643a1d__0 = 0U;
            if (VL_LIKELY(((0x27fU >= (0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line1__v0 
                    = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_hc6643a1d__0;
                __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line1__v0 
                    = (0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueueedge_filter_tb__DOT__edge_dut__DOT__line1.enqueue(__VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line1__v0, (IData)(__VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line1__v0));
            }
            vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i);
        }
        __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v1 = 1U;
    } else if (vlSelfRef.edge_filter_tb__DOT__in_ready) {
        __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v3 
            = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top
            [1U];
        __VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v3 = 1U;
        __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v4 
            = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top
            [2U];
        __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v3 
            = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid
            [1U];
        __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v4 
            = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid
            [2U];
        if ((0x27fU >= (0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col))) {
            __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v5 
                = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__line0
                [(0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col)];
            __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v5 
                = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__line1
                [(0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col)];
            vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_h30510e2c__0 
                = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__line1
                [(0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col)];
        } else {
            __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v5 = 0U;
            __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v5 = 0U;
            vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_h30510e2c__0 = 0U;
        }
        if ((0x27fU >= (0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col))) {
            __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line0__v1 
                = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_h30510e2c__0;
            __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line0__v1 
                = (0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col);
            vlSelfRef.__VdlyCommitQueueedge_filter_tb__DOT__edge_dut__DOT__line0.enqueue(__VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line0__v1, (IData)(__VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line0__v1));
        }
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_hfa9c3548__0 
            = vlSelfRef.edge_filter_tb__DOT__pixel_grey;
        if ((0x27fU >= (0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col))) {
            __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line1__v1 
                = vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_hfa9c3548__0;
            __VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line1__v1 
                = (0x3ffU & vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col);
            vlSelfRef.__VdlyCommitQueueedge_filter_tb__DOT__edge_dut__DOT__line1.enqueue(__VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__line1__v1, (IData)(__VdlyDim0__edge_filter_tb__DOT__edge_dut__DOT__line1__v1));
        }
        __Vdly__edge_filter_tb__DOT__edge_dut__DOT__col 
            = ((0x27fU == vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col)
                ? 0U : ((IData)(1U) + vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col));
    }
    vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__ready_shift 
        = __Vdly__edge_filter_tb__DOT__edge_dut__DOT__ready_shift;
    if (__VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v0) {
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[0U] = 0U;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[1U] = 0U;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[2U] = 0U;
    }
    if (__VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v3) {
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[0U] 
            = __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v3;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[1U] 
            = __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v4;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[2U] 
            = __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_bot__v5;
    }
    vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col 
        = __Vdly__edge_filter_tb__DOT__edge_dut__DOT__col;
    vlSelfRef.__VdlyCommitQueueedge_filter_tb__DOT__edge_dut__DOT__line0.commit(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__line0);
    vlSelfRef.__VdlyCommitQueueedge_filter_tb__DOT__edge_dut__DOT__line1.commit(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__line1);
    if (__VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v0) {
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[0U] = 0U;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[0U] = 0U;
    }
    if (__VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v1) {
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[1U] = 0U;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[2U] = 0U;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[1U] = 0U;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[2U] = 0U;
    }
    if (__VdlySet__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v3) {
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[0U] 
            = __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v3;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[1U] 
            = __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v4;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[2U] 
            = __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_top__v5;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[0U] 
            = __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v3;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[1U] 
            = __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v4;
        vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[2U] 
            = __VdlyVal__edge_filter_tb__DOT__edge_dut__DOT__shift_mid__v5;
    }
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

void Vedge_filter_tb___024root___timing_commit(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___timing_commit\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h5b4003fc__0.commit(
                                                   "@(posedge edge_filter_tb.clk)");
    }
}

void Vedge_filter_tb___024root___timing_resume(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___timing_resume\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h5b4003fc__0.resume(
                                                   "@(posedge edge_filter_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vedge_filter_tb___024root___eval_triggers__act(Vedge_filter_tb___024root* vlSelf);

bool Vedge_filter_tb___024root___eval_phase__act(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_phase__act\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vedge_filter_tb___024root___eval_triggers__act(vlSelf);
    Vedge_filter_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vedge_filter_tb___024root___timing_resume(vlSelf);
        Vedge_filter_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vedge_filter_tb___024root___eval_phase__nba(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_phase__nba\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vedge_filter_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_filter_tb___024root___dump_triggers__nba(Vedge_filter_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vedge_filter_tb___024root___dump_triggers__act(Vedge_filter_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vedge_filter_tb___024root___eval(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vedge_filter_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/edge_filter_tb.sv", 7, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vedge_filter_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/edge_filter_tb.sv", 7, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vedge_filter_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vedge_filter_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vedge_filter_tb___024root___eval_debug_assertions(Vedge_filter_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root___eval_debug_assertions\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
