// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvga_chain_tb.h for the primary calling header

#ifndef VERILATED_VVGA_CHAIN_TB___024ROOT_H_
#define VERILATED_VVGA_CHAIN_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vvga_chain_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvga_chain_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ vga_chain_tb__DOT__clk;
    CData/*0:0*/ vga_chain_tb__DOT__rst;
    CData/*0:0*/ vga_chain_tb__DOT__tb_in_ready;
    CData/*3:0*/ vga_chain_tb__DOT__grey_pixel;
    CData/*0:0*/ vga_chain_tb__DOT__hsync;
    CData/*7:0*/ vga_chain_tb__DOT__rout;
    CData/*7:0*/ vga_chain_tb__DOT__gout;
    CData/*7:0*/ vga_chain_tb__DOT__bout;
    CData/*7:0*/ vga_chain_tb__DOT__r8;
    CData/*7:0*/ vga_chain_tb__DOT__g8;
    CData/*7:0*/ vga_chain_tb__DOT__b8;
    CData/*7:0*/ vga_chain_tb__DOT__rgb2grey__DOT__gray_temp;
    CData/*7:0*/ vga_chain_tb__DOT__edge_dut__DOT__gx;
    CData/*7:0*/ vga_chain_tb__DOT__edge_dut__DOT__gy;
    CData/*7:0*/ vga_chain_tb__DOT__edge_dut__DOT__mag;
    CData/*2:0*/ vga_chain_tb__DOT__edge_dut__DOT__ready_shift;
    CData/*3:0*/ vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_h7c89ed01__0;
    CData/*3:0*/ vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_hc6643a1d__0;
    CData/*3:0*/ vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_h30510e2c__0;
    CData/*3:0*/ vga_chain_tb__DOT__edge_dut__DOT____Vlvbound_hfa9c3548__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__vga_chain_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__vga_chain_tb__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr_h202f897c__1;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ vga_chain_tb__DOT__tb_pixel_in;
    SData/*11:0*/ vga_chain_tb__DOT____Vlvbound_h115a5203__0;
    SData/*11:0*/ vga_chain_tb__DOT__vga__DOT__line_count;
    IData/*31:0*/ vga_chain_tb__DOT__fd;
    IData/*31:0*/ vga_chain_tb__DOT__pixel_idx;
    IData/*31:0*/ vga_chain_tb__DOT__written_pixels;
    IData/*31:0*/ vga_chain_tb__DOT__cycle_count;
    IData/*31:0*/ vga_chain_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ vga_chain_tb__DOT__edge_dut__DOT__col;
    IData/*31:0*/ vga_chain_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i;
    IData/*20:0*/ vga_chain_tb__DOT__vga__DOT__pixel_count;
    IData/*31:0*/ vga_chain_tb__DOT__vga__DOT__state;
    IData/*31:0*/ vga_chain_tb__DOT__vga__DOT__next_state;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*11:0*/, 307200> vga_chain_tb__DOT__img_mem;
    VlUnpacked<CData/*3:0*/, 640> vga_chain_tb__DOT__edge_dut__DOT__line0;
    VlUnpacked<CData/*3:0*/, 640> vga_chain_tb__DOT__edge_dut__DOT__line1;
    VlUnpacked<CData/*3:0*/, 3> vga_chain_tb__DOT__edge_dut__DOT__shift_top;
    VlUnpacked<CData/*3:0*/, 3> vga_chain_tb__DOT__edge_dut__DOT__shift_mid;
    VlUnpacked<CData/*3:0*/, 3> vga_chain_tb__DOT__edge_dut__DOT__shift_bot;
    VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 640>, false, CData/*3:0*/, 1> __VdlyCommitQueuevga_chain_tb__DOT__edge_dut__DOT__line0;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 640>, false, CData/*3:0*/, 1> __VdlyCommitQueuevga_chain_tb__DOT__edge_dut__DOT__line1;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h88180eb7__0;
    VlTriggerScheduler __VtrigSched_h85dfb695__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vvga_chain_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvga_chain_tb___024root(Vvga_chain_tb__Syms* symsp, const char* v__name);
    ~Vvga_chain_tb___024root();
    VL_UNCOPYABLE(Vvga_chain_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
