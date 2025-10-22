// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vrgb_to_grey_tb__Syms.h"


VL_ATTR_COLD void Vrgb_to_grey_tb___024root__trace_init_sub__TOP__0(Vrgb_to_grey_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root__trace_init_sub__TOP__0\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("rgb_to_grey_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"NPIX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"pixel_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+11,0,"pixel_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"gray8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+10,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+11,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,0,"gray_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrgb_to_grey_tb___024root__trace_init_top(Vrgb_to_grey_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root__trace_init_top\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrgb_to_grey_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vrgb_to_grey_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vrgb_to_grey_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrgb_to_grey_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vrgb_to_grey_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vrgb_to_grey_tb___024root__trace_register(Vrgb_to_grey_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root__trace_register\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vrgb_to_grey_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vrgb_to_grey_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vrgb_to_grey_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vrgb_to_grey_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vrgb_to_grey_tb___024root__trace_const_0_sub_0(Vrgb_to_grey_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrgb_to_grey_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root__trace_const_0\n"); );
    // Init
    Vrgb_to_grey_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrgb_to_grey_tb___024root*>(voidSelf);
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrgb_to_grey_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrgb_to_grey_tb___024root__trace_const_0_sub_0(Vrgb_to_grey_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root__trace_const_0_sub_0\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+13,(0x280U),32);
    bufp->fullIData(oldp+14,(0x1e0U),32);
    bufp->fullIData(oldp+15,(0x4b000U),32);
}

VL_ATTR_COLD void Vrgb_to_grey_tb___024root__trace_full_0_sub_0(Vrgb_to_grey_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vrgb_to_grey_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root__trace_full_0\n"); );
    // Init
    Vrgb_to_grey_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrgb_to_grey_tb___024root*>(voidSelf);
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vrgb_to_grey_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vrgb_to_grey_tb___024root__trace_full_0_sub_0(Vrgb_to_grey_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root__trace_full_0_sub_0\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.rgb_to_grey_tb__DOT__rst));
    bufp->fullSData(oldp+2,(vlSelfRef.rgb_to_grey_tb__DOT__pixel_in),12);
    bufp->fullBit(oldp+3,(vlSelfRef.rgb_to_grey_tb__DOT__in_ready));
    bufp->fullIData(oldp+4,(vlSelfRef.rgb_to_grey_tb__DOT__fd),32);
    bufp->fullIData(oldp+5,(vlSelfRef.rgb_to_grey_tb__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelfRef.rgb_to_grey_tb__DOT__gray8),32);
    bufp->fullCData(oldp+7,((0xfU & ((IData)(vlSelfRef.rgb_to_grey_tb__DOT__pixel_in) 
                                     >> 8U))),4);
    bufp->fullCData(oldp+8,((0xfU & ((IData)(vlSelfRef.rgb_to_grey_tb__DOT__pixel_in) 
                                     >> 4U))),4);
    bufp->fullCData(oldp+9,((0xfU & (IData)(vlSelfRef.rgb_to_grey_tb__DOT__pixel_in))),4);
    bufp->fullBit(oldp+10,(vlSelfRef.rgb_to_grey_tb__DOT__clk));
    bufp->fullCData(oldp+11,(vlSelfRef.rgb_to_grey_tb__DOT__pixel_out),4);
    bufp->fullCData(oldp+12,(vlSelfRef.rgb_to_grey_tb__DOT__dut__DOT__gray_temp),8);
}
