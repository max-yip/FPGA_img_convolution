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
    tracep->declBus(c+139,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+140,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+141,0,"TOTAL_PIXELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+132,0,"clk_video",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"sys_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"video_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+134,0,"vga_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+135,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+127,0,"grey_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+134,0,"grey_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"edge_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+2,0,"edge_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"centroid_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+4,0,"line_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"line_lost",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"rgb_grey_pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+2,0,"rgb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"centroid_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"ppm_file",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+137,0,"px_cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("U5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+127,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+134,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+129,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+130,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+131,0,"gray_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("U6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+143,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+127,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+134,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
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
    tracep->declBus(c+144,0,"gx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+145,0,"gy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+146,0,"mag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+33,0,"uns_mag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+147,0,"WIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+34,0,"valid_s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"valid_s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"valid_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"valid_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+37,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("gx_s1_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+38+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 20,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gy_s1_ext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 25; ++i) {
        tracep->declBus(c+63+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 20,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gx_s2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+88+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 21,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gy_s2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 21,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+98,0,"gx_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+99,0,"gy_s3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+100,0,"abs_gx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+101,0,"abs_gy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+102,0,"mag_s4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 23,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+103,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+105,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+106,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("U8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+142,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+143,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+148,0,"ROI_HEIGHT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+149,0,"THRESHOLD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+150,0,"DIV_LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+7,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"centroid_x",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+4,0,"line_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"line_lost",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+107,0,"sum_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+108,0,"sum_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+3,0,"centroid_x_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+109,0,"pixel_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+110,0,"row_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+111,0,"current_row_sum_x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+112,0,"current_row_sum_p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+113,0,"line_valid_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+114,0,"line_lost_pipe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("Udiv", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+133,0,"aclr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+132,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"numer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 22,0);
    tracep->declBus(c+116,0,"denom",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+3,0,"quotient",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+151,0,"LATENCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("div_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+117+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+124,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+125,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("U9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+132,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+2,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+138,0,"val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
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
    bufp->fullIData(oldp+139,(0x280U),32);
    bufp->fullIData(oldp+140,(0x1e0U),32);
    bufp->fullIData(oldp+141,(0x4b000U),32);
    bufp->fullIData(oldp+142,(0x280U),32);
    bufp->fullIData(oldp+143,(0x1e0U),32);
    bufp->fullSData(oldp+144,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx),12);
    bufp->fullSData(oldp+145,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy),12);
    bufp->fullSData(oldp+146,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag),13);
    bufp->fullIData(oldp+147,(5U),32);
    bufp->fullIData(oldp+148,(0x40U),32);
    bufp->fullIData(oldp+149,(0U),32);
    bufp->fullIData(oldp+150,(6U),32);
    bufp->fullIData(oldp+151,(6U),32);
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
    bufp->fullCData(oldp+1,((0xfU & (vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s4 
                                     >> 8U))),4);
    bufp->fullBit(oldp+2,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__valid_s4));
    bufp->fullSData(oldp+3,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe
                            [5U]),11);
    bufp->fullBit(oldp+4,((1U & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_pipe) 
                                 >> 5U))));
    bufp->fullBit(oldp+5,((1U & ((IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_pipe) 
                                 >> 5U))));
    bufp->fullSData(oldp+6,((0xfffU & ((0xf00U & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s4) 
                                       | ((0xf0U & 
                                           (vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s4 
                                            >> 4U)) 
                                          | (0xfU & 
                                             (vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s4 
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
    bufp->fullSData(oldp+33,((0x1fffU & vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s4)),13);
    bufp->fullBit(oldp+34,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__valid_s1));
    bufp->fullBit(oldp+35,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__valid_s2));
    bufp->fullBit(oldp+36,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__valid_s3));
    bufp->fullSData(oldp+37,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__col),10);
    bufp->fullIData(oldp+38,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[0]),21);
    bufp->fullIData(oldp+39,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[1]),21);
    bufp->fullIData(oldp+40,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[2]),21);
    bufp->fullIData(oldp+41,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[3]),21);
    bufp->fullIData(oldp+42,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[4]),21);
    bufp->fullIData(oldp+43,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[5]),21);
    bufp->fullIData(oldp+44,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[6]),21);
    bufp->fullIData(oldp+45,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[7]),21);
    bufp->fullIData(oldp+46,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[8]),21);
    bufp->fullIData(oldp+47,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[9]),21);
    bufp->fullIData(oldp+48,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[10]),21);
    bufp->fullIData(oldp+49,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[11]),21);
    bufp->fullIData(oldp+50,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[12]),21);
    bufp->fullIData(oldp+51,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[13]),21);
    bufp->fullIData(oldp+52,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[14]),21);
    bufp->fullIData(oldp+53,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[15]),21);
    bufp->fullIData(oldp+54,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[16]),21);
    bufp->fullIData(oldp+55,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[17]),21);
    bufp->fullIData(oldp+56,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[18]),21);
    bufp->fullIData(oldp+57,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[19]),21);
    bufp->fullIData(oldp+58,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[20]),21);
    bufp->fullIData(oldp+59,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[21]),21);
    bufp->fullIData(oldp+60,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[22]),21);
    bufp->fullIData(oldp+61,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[23]),21);
    bufp->fullIData(oldp+62,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s1_ext[24]),21);
    bufp->fullIData(oldp+63,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[0]),21);
    bufp->fullIData(oldp+64,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[1]),21);
    bufp->fullIData(oldp+65,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[2]),21);
    bufp->fullIData(oldp+66,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[3]),21);
    bufp->fullIData(oldp+67,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[4]),21);
    bufp->fullIData(oldp+68,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[5]),21);
    bufp->fullIData(oldp+69,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[6]),21);
    bufp->fullIData(oldp+70,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[7]),21);
    bufp->fullIData(oldp+71,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[8]),21);
    bufp->fullIData(oldp+72,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[9]),21);
    bufp->fullIData(oldp+73,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[10]),21);
    bufp->fullIData(oldp+74,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[11]),21);
    bufp->fullIData(oldp+75,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[12]),21);
    bufp->fullIData(oldp+76,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[13]),21);
    bufp->fullIData(oldp+77,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[14]),21);
    bufp->fullIData(oldp+78,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[15]),21);
    bufp->fullIData(oldp+79,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[16]),21);
    bufp->fullIData(oldp+80,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[17]),21);
    bufp->fullIData(oldp+81,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[18]),21);
    bufp->fullIData(oldp+82,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[19]),21);
    bufp->fullIData(oldp+83,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[20]),21);
    bufp->fullIData(oldp+84,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[21]),21);
    bufp->fullIData(oldp+85,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[22]),21);
    bufp->fullIData(oldp+86,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[23]),21);
    bufp->fullIData(oldp+87,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s1_ext[24]),21);
    bufp->fullIData(oldp+88,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s2[0]),22);
    bufp->fullIData(oldp+89,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s2[1]),22);
    bufp->fullIData(oldp+90,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s2[2]),22);
    bufp->fullIData(oldp+91,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s2[3]),22);
    bufp->fullIData(oldp+92,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s2[4]),22);
    bufp->fullIData(oldp+93,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s2[0]),22);
    bufp->fullIData(oldp+94,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s2[1]),22);
    bufp->fullIData(oldp+95,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s2[2]),22);
    bufp->fullIData(oldp+96,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s2[3]),22);
    bufp->fullIData(oldp+97,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s2[4]),22);
    bufp->fullIData(oldp+98,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gx_s3),23);
    bufp->fullIData(oldp+99,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__gy_s3),23);
    bufp->fullIData(oldp+100,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__abs_gx),23);
    bufp->fullIData(oldp+101,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__abs_gy),23);
    bufp->fullIData(oldp+102,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__mag_s4),24);
    bufp->fullIData(oldp+103,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+104,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+105,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+106,(vlSelfRef.calc_centroid_tb__DOT__U6__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+107,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_x),23);
    bufp->fullSData(oldp+108,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p),15);
    bufp->fullSData(oldp+109,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__pixel_count),10);
    bufp->fullCData(oldp+110,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__row_idx),6);
    bufp->fullIData(oldp+111,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__current_row_sum_x),23);
    bufp->fullSData(oldp+112,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__current_row_sum_p),15);
    bufp->fullCData(oldp+113,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_valid_pipe),6);
    bufp->fullCData(oldp+114,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__line_lost_pipe),6);
    bufp->fullIData(oldp+115,(((0U == (IData)(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_p))
                                ? 0U : vlSelfRef.calc_centroid_tb__DOT__U8__DOT__sum_x)),23);
    bufp->fullSData(oldp+116,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT____Vcellinp__Udiv__denom),15);
    bufp->fullSData(oldp+117,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[0]),11);
    bufp->fullSData(oldp+118,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[1]),11);
    bufp->fullSData(oldp+119,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[2]),11);
    bufp->fullSData(oldp+120,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[3]),11);
    bufp->fullSData(oldp+121,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[4]),11);
    bufp->fullSData(oldp+122,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe[5]),11);
    bufp->fullIData(oldp+123,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+124,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+125,(vlSelfRef.calc_centroid_tb__DOT__U8__DOT__unnamedblk1__DOT__i),32);
    bufp->fullSData(oldp+126,(vlSelfRef.calc_centroid_tb__DOT__video_data),12);
    bufp->fullCData(oldp+127,(vlSelfRef.calc_centroid_tb__DOT__grey_data),4);
    bufp->fullCData(oldp+128,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+129,((0xfU & ((IData)(vlSelfRef.calc_centroid_tb__DOT__video_data) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+130,((0xfU & (IData)(vlSelfRef.calc_centroid_tb__DOT__video_data))),4);
    bufp->fullCData(oldp+131,(vlSelfRef.calc_centroid_tb__DOT__U5__DOT__gray_temp),8);
    bufp->fullBit(oldp+132,(vlSelfRef.calc_centroid_tb__DOT__clk_video));
    bufp->fullBit(oldp+133,(vlSelfRef.calc_centroid_tb__DOT__sys_reset));
    bufp->fullBit(oldp+134,(vlSelfRef.calc_centroid_tb__DOT__vga_ready));
    bufp->fullIData(oldp+135,(vlSelfRef.calc_centroid_tb__DOT__i),32);
    bufp->fullIData(oldp+136,(vlSelfRef.calc_centroid_tb__DOT__ppm_file),32);
    bufp->fullIData(oldp+137,(vlSelfRef.calc_centroid_tb__DOT__px_cnt),32);
    bufp->fullIData(oldp+138,(vlSelfRef.calc_centroid_tb__DOT__unnamedblk1__DOT__val),32);
}
