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
    tracep->declBus(c+124,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"TOTAL_PIXELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+117,0,"clk_video",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"sys_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"video_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+119,0,"vga_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+120,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+112,0,"grey_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"grey_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"edge_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"edge_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"centroid_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+4,0,"line_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"line_lost",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"rgb_grey_pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+2,0,"rgb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"centroid_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"ppm_file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+122,0,"px_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("U5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+112,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+113,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+114,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+115,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+116,0,"gray_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("U6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+127,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+128,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("shift_0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+13+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+18+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+23+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+28+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+33,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+129,0,"gx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+130,0,"gy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+131,0,"mag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+34,0,"uns_mag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+35,0,"ready_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("gx_s1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gy_s1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+61+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+86,0,"gx_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+87,0,"gy_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+88,0,"mag_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+89,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("U8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+127,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+128,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+132,0,"ROI_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+133,0,"THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+134,0,"DIV_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+7,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"centroid_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+4,0,"line_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"line_lost",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+92,0,"sum_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+93,0,"sum_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+3,0,"centroid_x_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+94,0,"pixel_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+95,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+96,0,"current_row_sum_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+97,0,"current_row_sum_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+98,0,"line_valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+99,0,"line_lost_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("Udiv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+118,0,"aclr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"numer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+101,0,"denom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+3,0,"quotient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+135,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("div_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+102+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+110,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("U9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+2,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
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
    bufp->fullIData(oldp+124,(0x280U),32);
    bufp->fullIData(oldp+125,(0x1e0U),32);
    bufp->fullIData(oldp+126,(0x4b000U),32);
    bufp->fullIData(oldp+127,(0x280U),32);
    bufp->fullIData(oldp+128,(0x1e0U),32);
    bufp->fullSData(oldp+129,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx),12);
    bufp->fullSData(oldp+130,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy),12);
    bufp->fullSData(oldp+131,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag),13);
    bufp->fullIData(oldp+132,(0x40U),32);
    bufp->fullIData(oldp+133,(0U),32);
    bufp->fullIData(oldp+134,(6U),32);
    bufp->fullIData(oldp+135,(6U),32);
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
    bufp->fullCData(oldp+1,((0xfU & (vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s3 
                                     >> 8U))),4);
    bufp->fullBit(oldp+2,((1U & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift) 
                                 >> 6U))));
    bufp->fullSData(oldp+3,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe
                            [5U]),11);
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_pipe) 
                                 >> 5U))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_pipe) 
                                 >> 5U))));
    bufp->fullSData(oldp+6,((0xfffU & ((0xf00U & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s3) 
                                       | ((0xf0U & 
                                           (vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s3 
                                            >> 4U)) 
                                          | (0xfU & 
                                             (vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s3 
                                              >> 8U)))))),12);
    bufp->fullBit(oldp+7,(vlSelfRef.calc_centroid_tb__DOT__centroid_ready));
    bufp->fullCData(oldp+8,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[0]),4);
    bufp->fullCData(oldp+9,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[1]),4);
    bufp->fullCData(oldp+10,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[2]),4);
    bufp->fullCData(oldp+11,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[3]),4);
    bufp->fullCData(oldp+12,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_0[4]),4);
    bufp->fullCData(oldp+13,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[0]),4);
    bufp->fullCData(oldp+14,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[1]),4);
    bufp->fullCData(oldp+15,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[2]),4);
    bufp->fullCData(oldp+16,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[3]),4);
    bufp->fullCData(oldp+17,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_1[4]),4);
    bufp->fullCData(oldp+18,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[0]),4);
    bufp->fullCData(oldp+19,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[1]),4);
    bufp->fullCData(oldp+20,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[2]),4);
    bufp->fullCData(oldp+21,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[3]),4);
    bufp->fullCData(oldp+22,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_2[4]),4);
    bufp->fullCData(oldp+23,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[0]),4);
    bufp->fullCData(oldp+24,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[1]),4);
    bufp->fullCData(oldp+25,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[2]),4);
    bufp->fullCData(oldp+26,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[3]),4);
    bufp->fullCData(oldp+27,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_3[4]),4);
    bufp->fullCData(oldp+28,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[0]),4);
    bufp->fullCData(oldp+29,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[1]),4);
    bufp->fullCData(oldp+30,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[2]),4);
    bufp->fullCData(oldp+31,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[3]),4);
    bufp->fullCData(oldp+32,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__shift_4[4]),4);
    bufp->fullIData(oldp+33,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col),32);
    bufp->fullSData(oldp+34,((0x1fffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s3)),13);
    bufp->fullCData(oldp+35,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__ready_shift),7);
    bufp->fullSData(oldp+36,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[0]),16);
    bufp->fullSData(oldp+37,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[1]),16);
    bufp->fullSData(oldp+38,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[2]),16);
    bufp->fullSData(oldp+39,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[3]),16);
    bufp->fullSData(oldp+40,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[4]),16);
    bufp->fullSData(oldp+41,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[5]),16);
    bufp->fullSData(oldp+42,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[6]),16);
    bufp->fullSData(oldp+43,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[7]),16);
    bufp->fullSData(oldp+44,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[8]),16);
    bufp->fullSData(oldp+45,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[9]),16);
    bufp->fullSData(oldp+46,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[10]),16);
    bufp->fullSData(oldp+47,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[11]),16);
    bufp->fullSData(oldp+48,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[12]),16);
    bufp->fullSData(oldp+49,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[13]),16);
    bufp->fullSData(oldp+50,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[14]),16);
    bufp->fullSData(oldp+51,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[15]),16);
    bufp->fullSData(oldp+52,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[16]),16);
    bufp->fullSData(oldp+53,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[17]),16);
    bufp->fullSData(oldp+54,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[18]),16);
    bufp->fullSData(oldp+55,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[19]),16);
    bufp->fullSData(oldp+56,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[20]),16);
    bufp->fullSData(oldp+57,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[21]),16);
    bufp->fullSData(oldp+58,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[22]),16);
    bufp->fullSData(oldp+59,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[23]),16);
    bufp->fullSData(oldp+60,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1[24]),16);
    bufp->fullSData(oldp+61,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[0]),16);
    bufp->fullSData(oldp+62,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[1]),16);
    bufp->fullSData(oldp+63,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[2]),16);
    bufp->fullSData(oldp+64,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[3]),16);
    bufp->fullSData(oldp+65,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[4]),16);
    bufp->fullSData(oldp+66,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[5]),16);
    bufp->fullSData(oldp+67,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[6]),16);
    bufp->fullSData(oldp+68,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[7]),16);
    bufp->fullSData(oldp+69,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[8]),16);
    bufp->fullSData(oldp+70,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[9]),16);
    bufp->fullSData(oldp+71,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[10]),16);
    bufp->fullSData(oldp+72,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[11]),16);
    bufp->fullSData(oldp+73,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[12]),16);
    bufp->fullSData(oldp+74,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[13]),16);
    bufp->fullSData(oldp+75,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[14]),16);
    bufp->fullSData(oldp+76,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[15]),16);
    bufp->fullSData(oldp+77,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[16]),16);
    bufp->fullSData(oldp+78,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[17]),16);
    bufp->fullSData(oldp+79,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[18]),16);
    bufp->fullSData(oldp+80,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[19]),16);
    bufp->fullSData(oldp+81,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[20]),16);
    bufp->fullSData(oldp+82,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[21]),16);
    bufp->fullSData(oldp+83,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[22]),16);
    bufp->fullSData(oldp+84,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[23]),16);
    bufp->fullSData(oldp+85,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1[24]),16);
    bufp->fullIData(oldp+86,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s2),18);
    bufp->fullIData(oldp+87,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s2),18);
    bufp->fullIData(oldp+88,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s3),19);
    bufp->fullIData(oldp+89,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+90,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+91,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+92,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_x),23);
    bufp->fullSData(oldp+93,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p),15);
    bufp->fullSData(oldp+94,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__pixel_count),10);
    bufp->fullCData(oldp+95,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_idx),6);
    bufp->fullIData(oldp+96,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__current_row_sum_x),23);
    bufp->fullSData(oldp+97,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__current_row_sum_p),15);
    bufp->fullCData(oldp+98,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_pipe),6);
    bufp->fullCData(oldp+99,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_pipe),6);
    bufp->fullIData(oldp+100,(((0U == (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p))
                                ? 0U : vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_x)),23);
    bufp->fullSData(oldp+101,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT____Vcellinp__Udiv__denom),15);
    bufp->fullSData(oldp+102,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[0]),11);
    bufp->fullSData(oldp+103,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[1]),11);
    bufp->fullSData(oldp+104,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[2]),11);
    bufp->fullSData(oldp+105,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[3]),11);
    bufp->fullSData(oldp+106,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[4]),11);
    bufp->fullSData(oldp+107,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[5]),11);
    bufp->fullIData(oldp+108,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+109,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+110,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+111,(vlSelfRef.calc_centroid_tb__DOT__video_data),12);
    bufp->fullCData(oldp+112,(vlSelfRef.calc_centroid_tb__DOT__grey_data),4);
    bufp->fullCData(oldp+113,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+114,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+115,((0xfU & (IData)(vlSelfRef.calc_centroid_tb__DOT__video_data))),4);
    bufp->fullCData(oldp+116,(vlSelfRef.calc_centroid_tb__DOT__U5__DOT__gray_temp),8);
    bufp->fullBit(oldp+117,(vlSelfRef.calc_centroid_tb__DOT__clk_video));
    bufp->fullBit(oldp+118,(vlSelfRef.calc_centroid_tb__DOT__sys_reset));
    bufp->fullBit(oldp+119,(vlSelfRef.calc_centroid_tb__DOT__vga_ready));
    bufp->fullIData(oldp+120,(vlSelfRef.calc_centroid_tb__DOT__i),32);
    bufp->fullIData(oldp+121,(vlSelfRef.calc_centroid_tb__DOT__ppm_file),32);
    bufp->fullIData(oldp+122,(vlSelfRef.calc_centroid_tb__DOT__px_cnt),32);
    bufp->fullIData(oldp+123,(vlSelfRef.calc_centroid_tb__DOT__unnamedblk1__DOT__val),32);
}
