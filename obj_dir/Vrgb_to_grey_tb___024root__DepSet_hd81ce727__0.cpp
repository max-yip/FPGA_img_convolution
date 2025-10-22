// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrgb_to_grey_tb.h for the primary calling header

#include "Vrgb_to_grey_tb__pch.h"
#include "Vrgb_to_grey_tb___024root.h"

VlCoroutine Vrgb_to_grey_tb___024root___eval_initial__TOP__Vtiming__0(Vrgb_to_grey_tb___024root* vlSelf);
VlCoroutine Vrgb_to_grey_tb___024root___eval_initial__TOP__Vtiming__1(Vrgb_to_grey_tb___024root* vlSelf);

void Vrgb_to_grey_tb___024root___eval_initial(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_initial\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vrgb_to_grey_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vrgb_to_grey_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vrgb_to_grey_tb___024root___eval_initial__TOP__Vtiming__0(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    vlSelfRef.rgb_to_grey_tb__DOT__clk = 0U;
    vlSelfRef.rgb_to_grey_tb__DOT__rst = 1U;
    vlSelfRef.rgb_to_grey_tb__DOT__in_ready = 0U;
    vlSelfRef.rgb_to_grey_tb__DOT__pixel_in = 0U;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x32626974U;
    __Vtemp_1[2U] = 0x74735f31U;
    __Vtemp_1[3U] = 0x68656172U;
    VL_READMEM_N(true, 12, 307200, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.rgb_to_grey_tb__DOT__img_mem)
                 , 0, ~0ULL);
    co_await vlSelfRef.__VdlySched.delay(0x4e20ULL, 
                                         nullptr, "tb/rgb_to_grey_tb.sv", 
                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.rgb_to_grey_tb__DOT__rst = 0U;
    __Vtemp_2[0U] = 0x2e70706dU;
    __Vtemp_2[1U] = 0x74707574U;
    __Vtemp_2[2U] = 0x6f75U;
    vlSelfRef.rgb_to_grey_tb__DOT__fd = VL_FOPEN_NN(
                                                    VL_CVT_PACK_STR_NW(3, __Vtemp_2)
                                                    , 
                                                    std::string{"w"});
    ;
    VL_FWRITEF_NX(vlSelfRef.rgb_to_grey_tb__DOT__fd,"P3\n        640         480\n255\n",0);
    vlSelfRef.rgb_to_grey_tb__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4b000U, vlSelfRef.rgb_to_grey_tb__DOT__i)) {
        co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge rgb_to_grey_tb.clk)", 
                                                             "tb/rgb_to_grey_tb.sv", 
                                                             62);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.rgb_to_grey_tb__DOT__pixel_in = (
                                                   (0x4afffU 
                                                    >= 
                                                    (0x7ffffU 
                                                     & vlSelfRef.rgb_to_grey_tb__DOT__i))
                                                    ? 
                                                   vlSelfRef.rgb_to_grey_tb__DOT__img_mem
                                                   [
                                                   (0x7ffffU 
                                                    & vlSelfRef.rgb_to_grey_tb__DOT__i)]
                                                    : 0U);
        vlSelfRef.rgb_to_grey_tb__DOT__in_ready = 1U;
        while ((1U & (~ (IData)(vlSelfRef.rgb_to_grey_tb__DOT__out_ready)))) {
            co_await vlSelfRef.__VtrigSched_h906a20f4__0.trigger(1U, 
                                                                 nullptr, 
                                                                 "@( rgb_to_grey_tb.out_ready)", 
                                                                 "tb/rgb_to_grey_tb.sv", 
                                                                 67);
            vlSelfRef.__Vm_traceActivity[2U] = 1U;
        }
        vlSelfRef.rgb_to_grey_tb__DOT__gray8 = (0xffU 
                                                & (((IData)(vlSelfRef.rgb_to_grey_tb__DOT__pixel_out) 
                                                    << 4U) 
                                                   | (IData)(vlSelfRef.rgb_to_grey_tb__DOT__pixel_out)));
        VL_FWRITEF_NX(vlSelfRef.rgb_to_grey_tb__DOT__fd,"%0d %0d %0d\n",0,
                      32,vlSelfRef.rgb_to_grey_tb__DOT__gray8,
                      32,vlSelfRef.rgb_to_grey_tb__DOT__gray8,
                      32,vlSelfRef.rgb_to_grey_tb__DOT__gray8);
        vlSelfRef.rgb_to_grey_tb__DOT__i = ((IData)(1U) 
                                            + vlSelfRef.rgb_to_grey_tb__DOT__i);
    }
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         73);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.rgb_to_grey_tb__DOT__in_ready = 0U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_ha4f4ea9a__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge rgb_to_grey_tb.clk)", 
                                                         "tb/rgb_to_grey_tb.sv", 
                                                         78);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FCLOSE_I(vlSelfRef.rgb_to_grey_tb__DOT__fd); VL_WRITEF_NX("\342\234\205 Simulation complete, output written to output.ppm\n",0);
    VL_FINISH_MT("tb/rgb_to_grey_tb.sv", 83, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vrgb_to_grey_tb___024root___act_comb__TOP__0(Vrgb_to_grey_tb___024root* vlSelf);

void Vrgb_to_grey_tb___024root___eval_act(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_act\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vrgb_to_grey_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vrgb_to_grey_tb___024root___act_comb__TOP__0(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___act_comb__TOP__0\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rgb_to_grey_tb__DOT__out_ready = vlSelfRef.rgb_to_grey_tb__DOT__in_ready;
    vlSelfRef.rgb_to_grey_tb__DOT__dut__DOT__gray_temp 
        = (0xffU & ((((IData)(5U) * (0xfU & ((IData)(vlSelfRef.rgb_to_grey_tb__DOT__pixel_in) 
                                             >> 8U))) 
                     + ((IData)(9U) * (0xfU & ((IData)(vlSelfRef.rgb_to_grey_tb__DOT__pixel_in) 
                                               >> 4U)))) 
                    + VL_SHIFTL_III(8,32,32, (0xfU 
                                              & (IData)(vlSelfRef.rgb_to_grey_tb__DOT__pixel_in)), 1U)));
    vlSelfRef.rgb_to_grey_tb__DOT__pixel_out = (0xfU 
                                                & ((IData)(vlSelfRef.rgb_to_grey_tb__DOT__dut__DOT__gray_temp) 
                                                   >> 4U));
}

void Vrgb_to_grey_tb___024root___eval_nba(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_nba\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrgb_to_grey_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vrgb_to_grey_tb___024root___timing_commit(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___timing_commit\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha4f4ea9a__0.commit(
                                                   "@(posedge rgb_to_grey_tb.clk)");
    }
    if ((! (4ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h906a20f4__0.commit(
                                                   "@( rgb_to_grey_tb.out_ready)");
    }
}

void Vrgb_to_grey_tb___024root___timing_resume(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___timing_resume\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha4f4ea9a__0.resume(
                                                   "@(posedge rgb_to_grey_tb.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h906a20f4__0.resume(
                                                   "@( rgb_to_grey_tb.out_ready)");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vrgb_to_grey_tb___024root___eval_triggers__act(Vrgb_to_grey_tb___024root* vlSelf);

bool Vrgb_to_grey_tb___024root___eval_phase__act(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_phase__act\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vrgb_to_grey_tb___024root___eval_triggers__act(vlSelf);
    Vrgb_to_grey_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vrgb_to_grey_tb___024root___timing_resume(vlSelf);
        Vrgb_to_grey_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vrgb_to_grey_tb___024root___eval_phase__nba(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_phase__nba\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vrgb_to_grey_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb_to_grey_tb___024root___dump_triggers__nba(Vrgb_to_grey_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb_to_grey_tb___024root___dump_triggers__act(Vrgb_to_grey_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vrgb_to_grey_tb___024root___eval(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vrgb_to_grey_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/rgb_to_grey_tb.sv", 5, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vrgb_to_grey_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/rgb_to_grey_tb.sv", 5, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vrgb_to_grey_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vrgb_to_grey_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vrgb_to_grey_tb___024root___eval_debug_assertions(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_debug_assertions\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
