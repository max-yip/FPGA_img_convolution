// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vedge_filter_tb__Syms.h"


VL_ATTR_COLD void Vedge_filter_tb___024root__trace_init_sub__TOP__0(Vedge_filter_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root__trace_init_sub__TOP__0\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("edge_filter_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"NPIX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"pixel_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+33,0,"pixel_grey",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"pixel_edge",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"grey_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"out_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+6,0,"gray8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+10,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+11,0,"first_in_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+12,0,"first_out_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+13,0,"in_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+14,0,"out_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("edge_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+35,0,"IMG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,0,"IMG_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+32,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+33,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+15,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"col",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("shift_top", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+18+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_mid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+21+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("shift_bot", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+24+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+27,0,"gx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+28,0,"gy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+29,0,"mag",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+30,0,"ready_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+31,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rgb_dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+32,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"pixel_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+33,0,"pixel_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+3,0,"in_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"out_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+9,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+34,0,"gray_temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vedge_filter_tb___024root__trace_init_top(Vedge_filter_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root__trace_init_top\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vedge_filter_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vedge_filter_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vedge_filter_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vedge_filter_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vedge_filter_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vedge_filter_tb___024root__trace_register(Vedge_filter_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root__trace_register\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vedge_filter_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vedge_filter_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vedge_filter_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vedge_filter_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vedge_filter_tb___024root__trace_const_0_sub_0(Vedge_filter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vedge_filter_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root__trace_const_0\n"); );
    // Init
    Vedge_filter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vedge_filter_tb___024root*>(voidSelf);
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vedge_filter_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vedge_filter_tb___024root__trace_const_0_sub_0(Vedge_filter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root__trace_const_0_sub_0\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+35,(0x280U),32);
    bufp->fullIData(oldp+36,(0x1e0U),32);
    bufp->fullIData(oldp+37,(0x4b000U),32);
}

VL_ATTR_COLD void Vedge_filter_tb___024root__trace_full_0_sub_0(Vedge_filter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vedge_filter_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root__trace_full_0\n"); );
    // Init
    Vedge_filter_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vedge_filter_tb___024root*>(voidSelf);
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vedge_filter_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vedge_filter_tb___024root__trace_full_0_sub_0(Vedge_filter_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vedge_filter_tb___024root__trace_full_0_sub_0\n"); );
    Vedge_filter_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.edge_filter_tb__DOT__rst));
    bufp->fullSData(oldp+2,(vlSelfRef.edge_filter_tb__DOT__pixel_in),12);
    bufp->fullBit(oldp+3,(vlSelfRef.edge_filter_tb__DOT__in_ready));
    bufp->fullIData(oldp+4,(vlSelfRef.edge_filter_tb__DOT__fd),32);
    bufp->fullIData(oldp+5,(vlSelfRef.edge_filter_tb__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelfRef.edge_filter_tb__DOT__gray8),32);
    bufp->fullCData(oldp+7,((0xfU & ((IData)(vlSelfRef.edge_filter_tb__DOT__pixel_in) 
                                     >> 8U))),4);
    bufp->fullCData(oldp+8,((0xfU & ((IData)(vlSelfRef.edge_filter_tb__DOT__pixel_in) 
                                     >> 4U))),4);
    bufp->fullCData(oldp+9,((0xfU & (IData)(vlSelfRef.edge_filter_tb__DOT__pixel_in))),4);
    bufp->fullIData(oldp+10,(vlSelfRef.edge_filter_tb__DOT__cycle_count),32);
    bufp->fullIData(oldp+11,(vlSelfRef.edge_filter_tb__DOT__first_in_cycle),32);
    bufp->fullIData(oldp+12,(vlSelfRef.edge_filter_tb__DOT__first_out_cycle),32);
    bufp->fullBit(oldp+13,(vlSelfRef.edge_filter_tb__DOT__in_seen));
    bufp->fullBit(oldp+14,(vlSelfRef.edge_filter_tb__DOT__out_seen));
    bufp->fullCData(oldp+15,((0xfU & (IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__mag))),4);
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__ready_shift) 
                                  >> 2U))));
    bufp->fullIData(oldp+17,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__col),32);
    bufp->fullCData(oldp+18,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[0]),4);
    bufp->fullCData(oldp+19,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[1]),4);
    bufp->fullCData(oldp+20,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_top[2]),4);
    bufp->fullCData(oldp+21,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[0]),4);
    bufp->fullCData(oldp+22,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[1]),4);
    bufp->fullCData(oldp+23,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_mid[2]),4);
    bufp->fullCData(oldp+24,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[0]),4);
    bufp->fullCData(oldp+25,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[1]),4);
    bufp->fullCData(oldp+26,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__shift_bot[2]),4);
    bufp->fullCData(oldp+27,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__gx),8);
    bufp->fullCData(oldp+28,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__gy),8);
    bufp->fullCData(oldp+29,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__mag),8);
    bufp->fullCData(oldp+30,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__ready_shift),3);
    bufp->fullIData(oldp+31,(vlSelfRef.edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+32,(vlSelfRef.edge_filter_tb__DOT__clk));
    bufp->fullCData(oldp+33,(vlSelfRef.edge_filter_tb__DOT__pixel_grey),4);
    bufp->fullCData(oldp+34,(vlSelfRef.edge_filter_tb__DOT__rgb_dut__DOT__gray_temp),8);
}
