// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvga_chain_tb__Syms.h"


void Vvga_chain_tb___024root__trace_chg_0_sub_0(Vvga_chain_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vvga_chain_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root__trace_chg_0\n"); );
    // Init
    Vvga_chain_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvga_chain_tb___024root*>(voidSelf);
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vvga_chain_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vvga_chain_tb___024root__trace_chg_0_sub_0(Vvga_chain_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root__trace_chg_0_sub_0\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.vga_chain_tb__DOT__tb_in_ready));
        bufp->chgSData(oldp+1,(vlSelfRef.vga_chain_tb__DOT__tb_pixel_in),12);
        bufp->chgIData(oldp+2,(vlSelfRef.vga_chain_tb__DOT__pixel_idx),32);
        bufp->chgCData(oldp+3,((0xfU & ((IData)(vlSelfRef.vga_chain_tb__DOT__tb_pixel_in) 
                                        >> 8U))),4);
        bufp->chgCData(oldp+4,((0xfU & ((IData)(vlSelfRef.vga_chain_tb__DOT__tb_pixel_in) 
                                        >> 4U))),4);
        bufp->chgCData(oldp+5,((0xfU & (IData)(vlSelfRef.vga_chain_tb__DOT__tb_pixel_in))),4);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [3U])))) {
        bufp->chgIData(oldp+6,(vlSelfRef.vga_chain_tb__DOT__fd),32);
        bufp->chgIData(oldp+7,(vlSelfRef.vga_chain_tb__DOT__written_pixels),32);
        bufp->chgIData(oldp+8,(vlSelfRef.vga_chain_tb__DOT__cycle_count),32);
        bufp->chgCData(oldp+9,(vlSelfRef.vga_chain_tb__DOT__r8),8);
        bufp->chgCData(oldp+10,(vlSelfRef.vga_chain_tb__DOT__g8),8);
        bufp->chgCData(oldp+11,(vlSelfRef.vga_chain_tb__DOT__b8),8);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+12,((0xfU & (IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag))),4);
        bufp->chgSData(oldp+13,((0xfffU & ((0xf00U 
                                            & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag) 
                                               << 8U)) 
                                           | ((0xf0U 
                                               & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag) 
                                                  << 4U)) 
                                              | (0xfU 
                                                 & (IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag)))))),12);
        bufp->chgIData(oldp+14,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col),32);
        bufp->chgCData(oldp+15,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[0]),4);
        bufp->chgCData(oldp+16,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[1]),4);
        bufp->chgCData(oldp+17,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[2]),4);
        bufp->chgCData(oldp+18,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[0]),4);
        bufp->chgCData(oldp+19,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[1]),4);
        bufp->chgCData(oldp+20,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[2]),4);
        bufp->chgCData(oldp+21,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[0]),4);
        bufp->chgCData(oldp+22,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[1]),4);
        bufp->chgCData(oldp+23,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[2]),4);
        bufp->chgCData(oldp+24,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__gx),8);
        bufp->chgCData(oldp+25,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__gy),8);
        bufp->chgCData(oldp+26,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag),8);
        bufp->chgCData(oldp+27,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__ready_shift),3);
        bufp->chgIData(oldp+28,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+29,(vlSelfRef.vga_chain_tb__DOT__hsync));
        bufp->chgBit(oldp+30,((1U & (~ ((0x1eaU <= (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)) 
                                        & (0x1ecU > (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)))))));
        bufp->chgBit(oldp+31,((((0x8eU <= vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count) 
                                & (0x30dU >= vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)) 
                               & ((0x23U <= (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)) 
                                  & (0x203U > (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count))))));
        bufp->chgIData(oldp+32,(vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count),21);
        bufp->chgSData(oldp+33,(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count),12);
        bufp->chgIData(oldp+34,(vlSelfRef.vga_chain_tb__DOT__vga__DOT__state),32);
        bufp->chgIData(oldp+35,(((0U == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
                                  ? ((0x5fU == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                                      ? 1U : 0U) : 
                                 ((1U == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
                                   ? ((0x8fU == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                                       ? 2U : 1U) : 
                                  ((2U == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
                                    ? ((0x30fU == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                                        ? 3U : 2U) : 
                                   ((3U == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
                                     ? ((0x31fU == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                                         ? 0U : 3U)
                                     : vlSelfRef.vga_chain_tb__DOT__vga__DOT__state))))),32);
        bufp->chgBit(oldp+36,(((0x8eU <= vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count) 
                               & (0x30dU >= vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count))));
        bufp->chgBit(oldp+37,(((0x23U <= (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)) 
                               & (0x203U > (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+38,(vlSelfRef.vga_chain_tb__DOT__rout),8);
        bufp->chgCData(oldp+39,(vlSelfRef.vga_chain_tb__DOT__gout),8);
        bufp->chgCData(oldp+40,(vlSelfRef.vga_chain_tb__DOT__bout),8);
    }
    bufp->chgBit(oldp+41,(vlSelfRef.vga_chain_tb__DOT__clk));
    bufp->chgBit(oldp+42,(vlSelfRef.vga_chain_tb__DOT__rst));
    bufp->chgCData(oldp+43,(vlSelfRef.vga_chain_tb__DOT__grey_pixel),4);
    bufp->chgCData(oldp+44,(vlSelfRef.vga_chain_tb__DOT__rgb2grey__DOT__gray_temp),8);
    bufp->chgIData(oldp+45,(vlSelfRef.vga_chain_tb__DOT__unnamedblk1__DOT__i),32);
}

void Vvga_chain_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root__trace_cleanup\n"); );
    // Init
    Vvga_chain_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvga_chain_tb___024root*>(voidSelf);
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
