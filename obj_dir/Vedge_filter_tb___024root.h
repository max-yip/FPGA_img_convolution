// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vedge_filter_tb.h for the primary calling header

#ifndef VERILATED_VEDGE_FILTER_TB___024ROOT_H_
#define VERILATED_VEDGE_FILTER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vedge_filter_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vedge_filter_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ edge_filter_tb__DOT__clk;
    CData/*0:0*/ edge_filter_tb__DOT__rst;
    CData/*3:0*/ edge_filter_tb__DOT__pixel_grey;
    CData/*0:0*/ edge_filter_tb__DOT__in_ready;
    CData/*0:0*/ edge_filter_tb__DOT__in_seen;
    CData/*0:0*/ edge_filter_tb__DOT__out_seen;
    CData/*7:0*/ edge_filter_tb__DOT__rgb_dut__DOT__gray_temp;
    CData/*7:0*/ edge_filter_tb__DOT__edge_dut__DOT__gx;
    CData/*7:0*/ edge_filter_tb__DOT__edge_dut__DOT__gy;
    CData/*7:0*/ edge_filter_tb__DOT__edge_dut__DOT__mag;
    CData/*2:0*/ edge_filter_tb__DOT__edge_dut__DOT__ready_shift;
    CData/*3:0*/ edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_h7c89ed01__0;
    CData/*3:0*/ edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_hc6643a1d__0;
    CData/*3:0*/ edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_h30510e2c__0;
    CData/*3:0*/ edge_filter_tb__DOT__edge_dut__DOT____Vlvbound_hfa9c3548__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__edge_filter_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__edge_filter_tb__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ edge_filter_tb__DOT__pixel_in;
    IData/*31:0*/ edge_filter_tb__DOT__fd;
    IData/*31:0*/ edge_filter_tb__DOT__i;
    IData/*31:0*/ edge_filter_tb__DOT__gray8;
    IData/*31:0*/ edge_filter_tb__DOT__cycle_count;
    IData/*31:0*/ edge_filter_tb__DOT__first_in_cycle;
    IData/*31:0*/ edge_filter_tb__DOT__first_out_cycle;
    IData/*31:0*/ edge_filter_tb__DOT__edge_dut__DOT__col;
    IData/*31:0*/ edge_filter_tb__DOT__edge_dut__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*11:0*/, 307200> edge_filter_tb__DOT__img_mem;
    VlUnpacked<CData/*3:0*/, 640> edge_filter_tb__DOT__edge_dut__DOT__line0;
    VlUnpacked<CData/*3:0*/, 640> edge_filter_tb__DOT__edge_dut__DOT__line1;
    VlUnpacked<CData/*3:0*/, 3> edge_filter_tb__DOT__edge_dut__DOT__shift_top;
    VlUnpacked<CData/*3:0*/, 3> edge_filter_tb__DOT__edge_dut__DOT__shift_mid;
    VlUnpacked<CData/*3:0*/, 3> edge_filter_tb__DOT__edge_dut__DOT__shift_bot;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 640>, false, CData/*3:0*/, 1> __VdlyCommitQueueedge_filter_tb__DOT__edge_dut__DOT__line0;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 640>, false, CData/*3:0*/, 1> __VdlyCommitQueueedge_filter_tb__DOT__edge_dut__DOT__line1;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h5b4003fc__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vedge_filter_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vedge_filter_tb___024root(Vedge_filter_tb__Syms* symsp, const char* v__name);
    ~Vedge_filter_tb___024root();
    VL_UNCOPYABLE(Vedge_filter_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
