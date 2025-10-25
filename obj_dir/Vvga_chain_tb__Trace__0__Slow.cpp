// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vvga_chain_tb__Syms.h"


VL_ATTR_COLD void Vvga_chain_tb___024root__trace_init_sub__TOP__0(Vvga_chain_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root__trace_init_sub__TOP__0\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("vga_chain_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+47,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+48,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+49,0,"NPIX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"tb_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"tb_pixel_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+44,0,"grey_pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"grey_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"edge_pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"edge_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"rgb_pixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+1,0,"rgb_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"hsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"vsync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"rout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"gout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"bout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+32,0,"VGA_BLANK_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"VGA_SYNC_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"vga_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+3,0,"pixel_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+8,0,"written_pixels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+9,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+10,0,"r8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"g8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+12,0,"b8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("edge_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+51,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+44,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+15,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("shift_top", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_mid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_bot", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+25,0,"gx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+26,0,"gy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+27,0,"mag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"ready_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("grey2rgb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+14,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+1,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rgb2grey", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+44,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+45,0,"gray_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("vga", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+42,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"pixel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+30,0,"hsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"vsync",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"r",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+40,0,"g",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+41,0,"b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+32,0,"VGA_BLANK_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"VGA_SYNC_N",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"HVisibleArea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,0,"HFrontPorch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,0,"HSyncPulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"HBackPorch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,0,"HWholeLine",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,0,"VVisibleArea",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"VFrontPorch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"VSyncPulse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,0,"VBackPorch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"VTotalLines",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"TotalPixels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"pixel_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+34,0,"line_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+35,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+36,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+37,0,"HDISPLAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"VDISPLAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vvga_chain_tb___024root__trace_init_top(Vvga_chain_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root__trace_init_top\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vvga_chain_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vvga_chain_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vvga_chain_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vvga_chain_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vvga_chain_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vvga_chain_tb___024root__trace_register(Vvga_chain_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root__trace_register\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vvga_chain_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vvga_chain_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vvga_chain_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vvga_chain_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vvga_chain_tb___024root__trace_const_0_sub_0(Vvga_chain_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vvga_chain_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root__trace_const_0\n"); );
    // Init
    Vvga_chain_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvga_chain_tb___024root*>(voidSelf);
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vvga_chain_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vvga_chain_tb___024root__trace_const_0_sub_0(Vvga_chain_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root__trace_const_0_sub_0\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+47,(0x280U),32);
    bufp->fullIData(oldp+48,(0x1e0U),32);
    bufp->fullIData(oldp+49,(0x4b000U),32);
    bufp->fullBit(oldp+50,(0U));
    bufp->fullIData(oldp+51,(0x280U),32);
    bufp->fullIData(oldp+52,(0x1e0U),32);
    bufp->fullIData(oldp+53,(0x10U),32);
    bufp->fullIData(oldp+54,(0x60U),32);
    bufp->fullIData(oldp+55,(0x30U),32);
    bufp->fullIData(oldp+56,(0x320U),32);
    bufp->fullIData(oldp+57,(0xaU),32);
    bufp->fullIData(oldp+58,(2U),32);
    bufp->fullIData(oldp+59,(0x21U),32);
    bufp->fullIData(oldp+60,(0x20dU),32);
    bufp->fullIData(oldp+61,(0x668a0U),32);
}

VL_ATTR_COLD void Vvga_chain_tb___024root__trace_full_0_sub_0(Vvga_chain_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vvga_chain_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root__trace_full_0\n"); );
    // Init
    Vvga_chain_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vvga_chain_tb___024root*>(voidSelf);
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vvga_chain_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vvga_chain_tb___024root__trace_full_0_sub_0(Vvga_chain_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_chain_tb___024root__trace_full_0_sub_0\n"); );
    Vvga_chain_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.vga_chain_tb__DOT__tb_in_ready));
    bufp->fullSData(oldp+2,(vlSelfRef.vga_chain_tb__DOT__tb_pixel_in),12);
    bufp->fullIData(oldp+3,(vlSelfRef.vga_chain_tb__DOT__pixel_idx),32);
    bufp->fullCData(oldp+4,((0xfU & ((IData)(vlSelfRef.vga_chain_tb__DOT__tb_pixel_in) 
                                     >> 8U))),4);
    bufp->fullCData(oldp+5,((0xfU & ((IData)(vlSelfRef.vga_chain_tb__DOT__tb_pixel_in) 
                                     >> 4U))),4);
    bufp->fullCData(oldp+6,((0xfU & (IData)(vlSelfRef.vga_chain_tb__DOT__tb_pixel_in))),4);
    bufp->fullIData(oldp+7,(vlSelfRef.vga_chain_tb__DOT__fd),32);
    bufp->fullIData(oldp+8,(vlSelfRef.vga_chain_tb__DOT__written_pixels),32);
    bufp->fullIData(oldp+9,(vlSelfRef.vga_chain_tb__DOT__cycle_count),32);
    bufp->fullCData(oldp+10,(vlSelfRef.vga_chain_tb__DOT__r8),8);
    bufp->fullCData(oldp+11,(vlSelfRef.vga_chain_tb__DOT__g8),8);
    bufp->fullCData(oldp+12,(vlSelfRef.vga_chain_tb__DOT__b8),8);
    bufp->fullCData(oldp+13,((0xfU & (IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag))),4);
    bufp->fullSData(oldp+14,((0xfffU & ((0xf00U & ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag) 
                                                   << 8U)) 
                                        | ((0xf0U & 
                                            ((IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag) 
                                             << 4U)) 
                                           | (0xfU 
                                              & (IData)(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag)))))),12);
    bufp->fullIData(oldp+15,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__col),32);
    bufp->fullCData(oldp+16,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[0]),4);
    bufp->fullCData(oldp+17,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[1]),4);
    bufp->fullCData(oldp+18,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_top[2]),4);
    bufp->fullCData(oldp+19,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[0]),4);
    bufp->fullCData(oldp+20,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[1]),4);
    bufp->fullCData(oldp+21,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_mid[2]),4);
    bufp->fullCData(oldp+22,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[0]),4);
    bufp->fullCData(oldp+23,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[1]),4);
    bufp->fullCData(oldp+24,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__shift_bot[2]),4);
    bufp->fullCData(oldp+25,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__gx),8);
    bufp->fullCData(oldp+26,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__gy),8);
    bufp->fullCData(oldp+27,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__mag),8);
    bufp->fullCData(oldp+28,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__ready_shift),3);
    bufp->fullIData(oldp+29,(vlSelfRef.vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+30,(vlSelfRef.vga_chain_tb__DOT__hsync));
    bufp->fullBit(oldp+31,((1U & (~ ((0x1eaU <= (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)) 
                                     & (0x1ecU > (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)))))));
    bufp->fullBit(oldp+32,((((0x8eU <= vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count) 
                             & (0x30dU >= vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)) 
                            & ((0x23U <= (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)) 
                               & (0x203U > (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count))))));
    bufp->fullIData(oldp+33,(vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count),21);
    bufp->fullSData(oldp+34,(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count),12);
    bufp->fullIData(oldp+35,(vlSelfRef.vga_chain_tb__DOT__vga__DOT__state),32);
    bufp->fullIData(oldp+36,(((0U == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
                               ? ((0x5fU == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                                   ? 1U : 0U) : ((1U 
                                                  == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
                                                  ? 
                                                 ((0x8fU 
                                                   == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                                                   ? 2U
                                                   : 1U)
                                                  : 
                                                 ((2U 
                                                   == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
                                                   ? 
                                                  ((0x30fU 
                                                    == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                                                    ? 3U
                                                    : 2U)
                                                   : 
                                                  ((3U 
                                                    == vlSelfRef.vga_chain_tb__DOT__vga__DOT__state)
                                                    ? 
                                                   ((0x31fU 
                                                     == vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count)
                                                     ? 0U
                                                     : 3U)
                                                    : vlSelfRef.vga_chain_tb__DOT__vga__DOT__state))))),32);
    bufp->fullBit(oldp+37,(((0x8eU <= vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count) 
                            & (0x30dU >= vlSelfRef.vga_chain_tb__DOT__vga__DOT__pixel_count))));
    bufp->fullBit(oldp+38,(((0x23U <= (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)) 
                            & (0x203U > (IData)(vlSelfRef.vga_chain_tb__DOT__vga__DOT__line_count)))));
    bufp->fullCData(oldp+39,(vlSelfRef.vga_chain_tb__DOT__rout),8);
    bufp->fullCData(oldp+40,(vlSelfRef.vga_chain_tb__DOT__gout),8);
    bufp->fullCData(oldp+41,(vlSelfRef.vga_chain_tb__DOT__bout),8);
    bufp->fullBit(oldp+42,(vlSelfRef.vga_chain_tb__DOT__clk));
    bufp->fullBit(oldp+43,(vlSelfRef.vga_chain_tb__DOT__rst));
    bufp->fullCData(oldp+44,(vlSelfRef.vga_chain_tb__DOT__grey_pixel),4);
    bufp->fullCData(oldp+45,(vlSelfRef.vga_chain_tb__DOT__rgb2grey__DOT__gray_temp),8);
    bufp->fullIData(oldp+46,(vlSelfRef.vga_chain_tb__DOT__unnamedblk1__DOT__i),32);
}
