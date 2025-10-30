// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcalc_centroid_tb__Syms.h"


VL_ATTR_COLD void Vcalc_centroid_tb___024root__trace_init_sub__TOP__0(Vcalc_centroid_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root__trace_init_sub__TOP__0\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("calc_centroid_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+72,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"TOTAL_PIXELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"clk_video",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"sys_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"video_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+67,0,"vga_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+60,0,"grey_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+67,0,"grey_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"edge_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"edge_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"centroid_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+4,0,"line_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"line_lost",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"rgb_grey_pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+2,0,"rgb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"ppm_file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+70,0,"px_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("U5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+65,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+60,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+67,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+62,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"gray_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("U6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+76,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+65,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+67,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("shift_0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+32,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+33,0,"gx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+34,0,"gy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+35,0,"mag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+35,0,"uns_mag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+36,0,"ready_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+37,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+38,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("U8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+75,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+76,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+77,0,"ROI_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+78,0,"THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+79,0,"DIV_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+65,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+3,0,"centroid_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+4,0,"line_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"line_lost",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"sum_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+40,0,"sum_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+3,0,"centroid_x_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+41,0,"pixel_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+42,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+43,0,"line_valid_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"line_lost_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"current_row_sum_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+46,0,"current_row_sum_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+47,0,"line_valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"line_lost_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("Udiv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+66,0,"aclr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"numer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+50,0,"denom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+3,0,"quotient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+80,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("div_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+51+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+56,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+57,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+58,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("U9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+65,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+2,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+71,0,"val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcalc_centroid_tb___024root__trace_init_top(Vcalc_centroid_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root__trace_init_top\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcalc_centroid_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcalc_centroid_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vcalc_centroid_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcalc_centroid_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcalc_centroid_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcalc_centroid_tb___024root__trace_register(Vcalc_centroid_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root__trace_register\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcalc_centroid_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcalc_centroid_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcalc_centroid_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcalc_centroid_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcalc_centroid_tb___024root__trace_const_0_sub_0(Vcalc_centroid_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcalc_centroid_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root__trace_const_0\n"); );
    // Init
    Vcalc_centroid_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalc_centroid_tb___024root*>(voidSelf);
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcalc_centroid_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcalc_centroid_tb___024root__trace_const_0_sub_0(Vcalc_centroid_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root__trace_const_0_sub_0\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+72,(0x280U),32);
    bufp->fullIData(oldp+73,(0x1e0U),32);
    bufp->fullIData(oldp+74,(0x4b000U),32);
    bufp->fullIData(oldp+75,(0x280U),32);
    bufp->fullIData(oldp+76,(0x1e0U),32);
    bufp->fullIData(oldp+77,(0x40U),32);
    bufp->fullIData(oldp+78,(0U),32);
    bufp->fullIData(oldp+79,(5U),32);
    bufp->fullIData(oldp+80,(5U),32);
}

VL_ATTR_COLD void Vcalc_centroid_tb___024root__trace_full_0_sub_0(Vcalc_centroid_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcalc_centroid_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root__trace_full_0\n"); );
    // Init
    Vcalc_centroid_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcalc_centroid_tb___024root*>(voidSelf);
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcalc_centroid_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcalc_centroid_tb___024root__trace_full_0_sub_0(Vcalc_centroid_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcalc_centroid_tb___024root__trace_full_0_sub_0\n"); );
    Vcalc_centroid_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                     >> 8U))),4);
    bufp->fullBit(oldp+2,((1U & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift) 
                                 >> 4U))));
    bufp->fullSData(oldp+3,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe
                            [4U]),11);
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_pipe) 
                                 >> 4U))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_pipe) 
                                 >> 4U))));
    bufp->fullSData(oldp+6,((0xfffU & ((0xf00U & (IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag)) 
                                       | ((0xf0U & 
                                           ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                            >> 4U)) 
                                          | (0xfU & 
                                             ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag) 
                                              >> 8U)))))),12);
    bufp->fullCData(oldp+7,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[0]),4);
    bufp->fullCData(oldp+8,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[1]),4);
    bufp->fullCData(oldp+9,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[2]),4);
    bufp->fullCData(oldp+10,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[3]),4);
    bufp->fullCData(oldp+11,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[4]),4);
    bufp->fullCData(oldp+12,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[0]),4);
    bufp->fullCData(oldp+13,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[1]),4);
    bufp->fullCData(oldp+14,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[2]),4);
    bufp->fullCData(oldp+15,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[3]),4);
    bufp->fullCData(oldp+16,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[4]),4);
    bufp->fullCData(oldp+17,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[0]),4);
    bufp->fullCData(oldp+18,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[1]),4);
    bufp->fullCData(oldp+19,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[2]),4);
    bufp->fullCData(oldp+20,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[3]),4);
    bufp->fullCData(oldp+21,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[4]),4);
    bufp->fullCData(oldp+22,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[0]),4);
    bufp->fullCData(oldp+23,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[1]),4);
    bufp->fullCData(oldp+24,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[2]),4);
    bufp->fullCData(oldp+25,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[3]),4);
    bufp->fullCData(oldp+26,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[4]),4);
    bufp->fullCData(oldp+27,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[0]),4);
    bufp->fullCData(oldp+28,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[1]),4);
    bufp->fullCData(oldp+29,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[2]),4);
    bufp->fullCData(oldp+30,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[3]),4);
    bufp->fullCData(oldp+31,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[4]),4);
    bufp->fullIData(oldp+32,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col),32);
    bufp->fullSData(oldp+33,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx),12);
    bufp->fullSData(oldp+34,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy),12);
    bufp->fullSData(oldp+35,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag),13);
    bufp->fullCData(oldp+36,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift),5);
    bufp->fullIData(oldp+37,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+38,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+39,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_x),23);
    bufp->fullSData(oldp+40,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p),15);
    bufp->fullSData(oldp+41,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__pixel_count),10);
    bufp->fullCData(oldp+42,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_idx),6);
    bufp->fullBit(oldp+43,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_reg));
    bufp->fullBit(oldp+44,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_reg));
    bufp->fullIData(oldp+45,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__current_row_sum_x),23);
    bufp->fullSData(oldp+46,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__current_row_sum_p),15);
    bufp->fullCData(oldp+47,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_pipe),5);
    bufp->fullCData(oldp+48,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_pipe),5);
    bufp->fullIData(oldp+49,(((0U == (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p))
                               ? 0U : vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_x)),23);
    bufp->fullSData(oldp+50,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT____Vcellinp__Udiv__denom),15);
    bufp->fullSData(oldp+51,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[0]),11);
    bufp->fullSData(oldp+52,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[1]),11);
    bufp->fullSData(oldp+53,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[2]),11);
    bufp->fullSData(oldp+54,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[3]),11);
    bufp->fullSData(oldp+55,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[4]),11);
    bufp->fullIData(oldp+56,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+57,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+58,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+59,(vlSelfRef.calc_centroid_tb__DOT__video_data),12);
    bufp->fullCData(oldp+60,(vlSelfRef.calc_centroid_tb__DOT__grey_data),4);
    bufp->fullCData(oldp+61,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                      >> 8U))),4);
    bufp->fullCData(oldp+62,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+63,((0xfU & (IData)(vlSelfRef.calc_centroid_tb__DOT__video_data))),4);
    bufp->fullCData(oldp+64,(vlSelfRef.calc_centroid_tb__DOT__U5__DOT__gray_temp),8);
    bufp->fullBit(oldp+65,(vlSelfRef.calc_centroid_tb__DOT__clk_video));
    bufp->fullBit(oldp+66,(vlSelfRef.calc_centroid_tb__DOT__sys_reset));
    bufp->fullBit(oldp+67,(vlSelfRef.calc_centroid_tb__DOT__vga_ready));
    bufp->fullIData(oldp+68,(vlSelfRef.calc_centroid_tb__DOT__i),32);
    bufp->fullIData(oldp+69,(vlSelfRef.calc_centroid_tb__DOT__ppm_file),32);
    bufp->fullIData(oldp+70,(vlSelfRef.calc_centroid_tb__DOT__px_cnt),32);
    bufp->fullIData(oldp+71,(vlSelfRef.calc_centroid_tb__DOT__unnamedblk1__DOT__val),32);
}
