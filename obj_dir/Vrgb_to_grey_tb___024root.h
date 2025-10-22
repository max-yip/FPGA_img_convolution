// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrgb_to_grey_tb.h for the primary calling header

#ifndef VERILATED_VRGB_TO_GREY_TB___024ROOT_H_
#define VERILATED_VRGB_TO_GREY_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vrgb_to_grey_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrgb_to_grey_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ rgb_to_grey_tb__DOT__clk;
    CData/*0:0*/ rgb_to_grey_tb__DOT__rst;
    CData/*3:0*/ rgb_to_grey_tb__DOT__pixel_out;
    CData/*0:0*/ rgb_to_grey_tb__DOT__in_ready;
    CData/*0:0*/ rgb_to_grey_tb__DOT__out_ready;
    CData/*7:0*/ rgb_to_grey_tb__DOT__dut__DOT__gray_temp;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rgb_to_grey_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rgb_to_grey_tb__DOT__out_ready__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ rgb_to_grey_tb__DOT__pixel_in;
    IData/*31:0*/ rgb_to_grey_tb__DOT__fd;
    IData/*31:0*/ rgb_to_grey_tb__DOT__i;
    IData/*31:0*/ rgb_to_grey_tb__DOT__gray8;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*11:0*/, 307200> rgb_to_grey_tb__DOT__img_mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha4f4ea9a__0;
    VlTriggerScheduler __VtrigSched_h906a20f4__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrgb_to_grey_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrgb_to_grey_tb___024root(Vrgb_to_grey_tb__Syms* symsp, const char* v__name);
    ~Vrgb_to_grey_tb___024root();
    VL_UNCOPYABLE(Vrgb_to_grey_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
