// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrgb_to_grey_tb__Syms.h"


void Vrgb_to_grey_tb___024root__trace_chg_0_sub_0(Vrgb_to_grey_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vrgb_to_grey_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root__trace_chg_0\n"); );
    // Init
    Vrgb_to_grey_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrgb_to_grey_tb___024root*>(voidSelf);
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vrgb_to_grey_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vrgb_to_grey_tb___024root__trace_chg_0_sub_0(Vrgb_to_grey_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root__trace_chg_0_sub_0\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.rgb_to_grey_tb__DOT__rst));
        bufp->chgSData(oldp+1,(vlSelfRef.rgb_to_grey_tb__DOT__pixel_in),12);
        bufp->chgBit(oldp+2,(vlSelfRef.rgb_to_grey_tb__DOT__in_ready));
        bufp->chgIData(oldp+3,(vlSelfRef.rgb_to_grey_tb__DOT__fd),32);
        bufp->chgIData(oldp+4,(vlSelfRef.rgb_to_grey_tb__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelfRef.rgb_to_grey_tb__DOT__gray8),32);
        bufp->chgCData(oldp+6,((0xfU & ((IData)(vlSelfRef.rgb_to_grey_tb__DOT__pixel_in) 
                                        >> 8U))),4);
        bufp->chgCData(oldp+7,((0xfU & ((IData)(vlSelfRef.rgb_to_grey_tb__DOT__pixel_in) 
                                        >> 4U))),4);
        bufp->chgCData(oldp+8,((0xfU & (IData)(vlSelfRef.rgb_to_grey_tb__DOT__pixel_in))),4);
    }
    bufp->chgBit(oldp+9,(vlSelfRef.rgb_to_grey_tb__DOT__clk));
    bufp->chgCData(oldp+10,(vlSelfRef.rgb_to_grey_tb__DOT__pixel_out),4);
    bufp->chgCData(oldp+11,(vlSelfRef.rgb_to_grey_tb__DOT__dut__DOT__gray_temp),8);
}

void Vrgb_to_grey_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root__trace_cleanup\n"); );
    // Init
    Vrgb_to_grey_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrgb_to_grey_tb___024root*>(voidSelf);
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
