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
        bufp->chgCData(oldp+0,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                        >> 8U))),4);
        bufp->chgBit(oldp+1,((1U & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift) 
                                    >> 4U))));
        bufp->chgSData(oldp+2,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__centroid_x_reg),11);
        bufp->chgBit(oldp+3,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_reg));
        bufp->chgBit(oldp+4,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_reg));
        bufp->chgSData(oldp+5,((0xfffU & ((0xf00U & (IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag)) 
                                          | ((0xf0U 
                                              & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                                 >> 4U)) 
                                             | (0xfU 
                                                & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                                   >> 8U)))))),12);
        bufp->chgCData(oldp+6,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[0]),4);
        bufp->chgCData(oldp+7,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[1]),4);
        bufp->chgCData(oldp+8,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[2]),4);
        bufp->chgCData(oldp+9,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[3]),4);
        bufp->chgCData(oldp+10,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[4]),4);
        bufp->chgCData(oldp+11,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[0]),4);
        bufp->chgCData(oldp+12,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[1]),4);
        bufp->chgCData(oldp+13,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[2]),4);
        bufp->chgCData(oldp+14,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[3]),4);
        bufp->chgCData(oldp+15,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[4]),4);
        bufp->chgCData(oldp+16,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[0]),4);
        bufp->chgCData(oldp+17,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[1]),4);
        bufp->chgCData(oldp+18,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[2]),4);
        bufp->chgCData(oldp+19,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[3]),4);
        bufp->chgCData(oldp+20,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[4]),4);
        bufp->chgCData(oldp+21,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[0]),4);
        bufp->chgCData(oldp+22,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[1]),4);
        bufp->chgCData(oldp+23,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[2]),4);
        bufp->chgCData(oldp+24,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[3]),4);
        bufp->chgCData(oldp+25,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[4]),4);
        bufp->chgCData(oldp+26,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[0]),4);
        bufp->chgCData(oldp+27,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[1]),4);
        bufp->chgCData(oldp+28,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[2]),4);
        bufp->chgCData(oldp+29,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[3]),4);
        bufp->chgCData(oldp+30,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[4]),4);
        bufp->chgIData(oldp+31,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col),32);
        bufp->chgSData(oldp+32,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx),12);
        bufp->chgSData(oldp+33,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy),12);
        bufp->chgSData(oldp+34,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag),13);
        bufp->chgCData(oldp+35,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift),5);
        bufp->chgIData(oldp+36,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+37,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk2__DOT__j),32);
        bufp->chgIData(oldp+38,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_x),25);
        bufp->chgIData(oldp+39,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p),20);
        bufp->chgSData(oldp+40,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__pixel_count),10);
        bufp->chgSData(oldp+41,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_count),10);
        bufp->chgSData(oldp+42,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__window_start_row),10);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgSData(oldp+43,(vlSelfRef.calc_centroid_tb__DOT__video_data),12);
        bufp->chgCData(oldp+44,(vlSelfRef.calc_centroid_tb__DOT__grey_data),4);
        bufp->chgCData(oldp+45,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                         >> 8U))),4);
        bufp->chgCData(oldp+46,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+47,((0xfU & (IData)(vlSelfRef.calc_centroid_tb__DOT__video_data))),4);
        bufp->chgCData(oldp+48,(vlSelfRef.calc_centroid_tb__DOT__U5__DOT__gray_temp),8);
    }
    bufp->chgBit(oldp+49,(vlSelfRef.calc_centroid_tb__DOT__clk_video));
    bufp->chgBit(oldp+50,(vlSelfRef.calc_centroid_tb__DOT__sys_reset));
    bufp->chgBit(oldp+51,(vlSelfRef.calc_centroid_tb__DOT__vga_ready));
    bufp->chgIData(oldp+52,(vlSelfRef.calc_centroid_tb__DOT__i),32);
    bufp->chgIData(oldp+53,(vlSelfRef.calc_centroid_tb__DOT__ppm_file),32);
    bufp->chgIData(oldp+54,(vlSelfRef.calc_centroid_tb__DOT__px_cnt),32);
    bufp->chgIData(oldp+55,(vlSelfRef.calc_centroid_tb__DOT__unnamedblk1__DOT__val),32);
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
}
