// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcalc_centroid_tb__Syms.h"


void Vcalc_centroid_tb___024root__trace_chg_0_sub_0(Vcalc_centroid_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcalc_centroid_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root__trace_chg_0\n"); );
    // Init
    Vcalc_centroid_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalc_centroid_tb___024root*>(voidSelf);
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcalc_centroid_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcalc_centroid_tb___024root__trace_chg_0_sub_0(Vcalc_centroid_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root__trace_chg_0_sub_0\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgSData(oldp+0,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__centroid_x_r),11);
        bufp->chgBit(oldp+1,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_r));
        bufp->chgBit(oldp+2,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_r));
        bufp->chgSData(oldp+3,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__centroid_x_r),10);
        bufp->chgSData(oldp+4,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__x_cnt),10);
        bufp->chgSData(oldp+5,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__y_cnt),9);
        bufp->chgSData(oldp+6,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__first_pixel),10);
        bufp->chgSData(oldp+7,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__last_pixel),10);
        bufp->chgBit(oldp+8,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_active));
        bufp->chgIData(oldp+9,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_midpoints),17);
        bufp->chgCData(oldp+10,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count),6);
        bufp->chgIData(oldp+11,(vlSelfRef.calc_centroid_tb__DOT__unnamedblk1__DOT__val),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+12,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                         >> 4U))),4);
        bufp->chgSData(oldp+13,((0xfffU & ((0xf00U 
                                            & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                               << 4U)) 
                                           | ((0xf0U 
                                               & (IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag)) 
                                              | (0xfU 
                                                 & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                                    >> 4U)))))),12);
        bufp->chgIData(oldp+14,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col),32);
        bufp->chgCData(oldp+15,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top[0]),4);
        bufp->chgCData(oldp+16,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top[1]),4);
        bufp->chgCData(oldp+17,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_top[2]),4);
        bufp->chgCData(oldp+18,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid[0]),4);
        bufp->chgCData(oldp+19,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid[1]),4);
        bufp->chgCData(oldp+20,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_mid[2]),4);
        bufp->chgCData(oldp+21,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot[0]),4);
        bufp->chgCData(oldp+22,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot[1]),4);
        bufp->chgCData(oldp+23,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_bot[2]),4);
        bufp->chgCData(oldp+24,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx),8);
        bufp->chgCData(oldp+25,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy),8);
        bufp->chgSData(oldp+26,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag),9);
        bufp->chgCData(oldp+27,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift),3);
        bufp->chgIData(oldp+28,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+29,((0U < (0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                             >> 4U)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgSData(oldp+30,(vlSelfRef.calc_centroid_tb__DOT__video_data),12);
        bufp->chgCData(oldp+31,(vlSelfRef.calc_centroid_tb__DOT__grey_data),4);
        bufp->chgCData(oldp+32,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                         >> 8U))),4);
        bufp->chgCData(oldp+33,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+34,((0xfU & (IData)(vlSelfRef.calc_centroid_tb__DOT__video_data))),4);
        bufp->chgCData(oldp+35,(vlSelfRef.calc_centroid_tb__DOT__U5__DOT__gray_temp),8);
    }
    bufp->chgBit(oldp+36,(vlSelfRef.calc_centroid_tb__DOT__clk_video));
    bufp->chgBit(oldp+37,(vlSelfRef.calc_centroid_tb__DOT__sys_reset));
    bufp->chgBit(oldp+38,(vlSelfRef.calc_centroid_tb__DOT__vga_ready));
    bufp->chgIData(oldp+39,(vlSelfRef.calc_centroid_tb__DOT__i),32);
    bufp->chgIData(oldp+40,(vlSelfRef.calc_centroid_tb__DOT__ppm_file),32);
    bufp->chgIData(oldp+41,(vlSelfRef.calc_centroid_tb__DOT__px_cnt),32);
}

void Vcalc_centroid_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root__trace_cleanup\n"); );
    // Init
    Vcalc_centroid_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalc_centroid_tb___024root*>(voidSelf);
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
