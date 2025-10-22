// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vedge_filter_tb__Syms.h"


void Vedge_filter_tb___024root__trace_chg_0_sub_0(Vedge_filter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vedge_filter_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root__trace_chg_0\n"); );
    // Init
    Vedge_filter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vedge_filter_tb___024root*>(voidSelf);
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vedge_filter_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vedge_filter_tb___024root__trace_chg_0_sub_0(Vedge_filter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root__trace_chg_0_sub_0\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.edge_filter_tb__DOT__rst));
        bufp->chgSData(oldp+1,(vlSelfRef.edge_filter_tb__DOT__pixel_in),12);
        bufp->chgBit(oldp+2,(vlSelfRef.edge_filter_tb__DOT__in_ready));
        bufp->chgIData(oldp+3,(vlSelfRef.edge_filter_tb__DOT__fd),32);
        bufp->chgIData(oldp+4,(vlSelfRef.edge_filter_tb__DOT__i),32);
        bufp->chgIData(oldp+5,(vlSelfRef.edge_filter_tb__DOT__gray8),32);
        bufp->chgCData(oldp+6,((0xfU & ((IData)(vlSelfRef.edge_filter_tb__DOT__pixel_in) 
                                        >> 8U))),4);
        bufp->chgCData(oldp+7,((0xfU & ((IData)(vlSelfRef.edge_filter_tb__DOT__pixel_in) 
                                        >> 4U))),4);
        bufp->chgCData(oldp+8,((0xfU & (IData)(vlSelfRef.edge_filter_tb__DOT__pixel_in))),4);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgCData(oldp+9,((0xfU & (IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__mag))),4);
        bufp->chgBit(oldp+10,((1U & ((IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__ready_shift) 
                                     >> 2U))));
        bufp->chgIData(oldp+11,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col),32);
        bufp->chgCData(oldp+12,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[0]),4);
        bufp->chgCData(oldp+13,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[1]),4);
        bufp->chgCData(oldp+14,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[2]),4);
        bufp->chgCData(oldp+15,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[0]),4);
        bufp->chgCData(oldp+16,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[1]),4);
        bufp->chgCData(oldp+17,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[2]),4);
        bufp->chgCData(oldp+18,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[0]),4);
        bufp->chgCData(oldp+19,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[1]),4);
        bufp->chgCData(oldp+20,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[2]),4);
        bufp->chgCData(oldp+21,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__gx),8);
        bufp->chgCData(oldp+22,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__gy),8);
        bufp->chgCData(oldp+23,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__mag),8);
        bufp->chgCData(oldp+24,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__ready_shift),3);
        bufp->chgIData(oldp+25,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i),32);
    }
    bufp->chgBit(oldp+26,(vlSelfRef.edge_filter_tb__DOT__clk));
    bufp->chgCData(oldp+27,(vlSelfRef.edge_filter_tb__DOT__pixel_grey),4);
    bufp->chgCData(oldp+28,(vlSelfRef.edge_filter_tb__DOT__rgb_dut__DOT__gray_temp),8);
}

void Vedge_filter_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root__trace_cleanup\n"); );
    // Init
    Vedge_filter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vedge_filter_tb___024root*>(voidSelf);
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
