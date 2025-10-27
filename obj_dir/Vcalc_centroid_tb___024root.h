// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcalc_centroid_tb.h for the primary calling header

#ifndef VERILATED_VCALC_CENTROID_TB___024ROOT_H_
#define VERILATED_VCALC_CENTROID_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcalc_centroid_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcalc_centroid_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ calc_centroid_tb__DOT__clk_video;
    CData/*0:0*/ calc_centroid_tb__DOT__sys_reset;
    CData/*0:0*/ calc_centroid_tb__DOT__vga_ready;
    CData/*3:0*/ calc_centroid_tb__DOT__grey_data;
    CData/*7:0*/ calc_centroid_tb__DOT__U5__DOT__gray_temp;
    CData/*7:0*/ calc_centroid_tb__DOT__U6__DOT__gx;
    CData/*7:0*/ calc_centroid_tb__DOT__U6__DOT__gy;
    CData/*2:0*/ calc_centroid_tb__DOT__U6__DOT__ready_shift;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h7c89ed01__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_hc6643a1d__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h30510e2c__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_hfa9c3548__0;
    CData/*0:0*/ calc_centroid_tb__DOT__U8__DOT__row_active;
    CData/*5:0*/ calc_centroid_tb__DOT__U8__DOT__row_count;
    CData/*0:0*/ calc_centroid_tb__DOT__U8__DOT__line_valid_r;
    CData/*0:0*/ calc_centroid_tb__DOT__U8__DOT__line_lost_r;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__calc_centroid_tb__DOT__clk_video__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__calc_centroid_tb__DOT__sys_reset__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ calc_centroid_tb__DOT__video_data;
    SData/*8:0*/ calc_centroid_tb__DOT__U6__DOT__mag;
    SData/*9:0*/ calc_centroid_tb__DOT__U8__DOT__x_cnt;
    SData/*8:0*/ calc_centroid_tb__DOT__U8__DOT__y_cnt;
    SData/*9:0*/ calc_centroid_tb__DOT__U8__DOT__first_pixel;
    SData/*9:0*/ calc_centroid_tb__DOT__U8__DOT__last_pixel;
    SData/*9:0*/ calc_centroid_tb__DOT__U8__DOT__centroid_x_r;
    IData/*31:0*/ calc_centroid_tb__DOT__i;
    IData/*31:0*/ calc_centroid_tb__DOT__ppm_file;
    IData/*31:0*/ calc_centroid_tb__DOT__px_cnt;
    IData/*31:0*/ calc_centroid_tb__DOT__unnamedblk1__DOT__val;
    IData/*31:0*/ calc_centroid_tb__DOT__U6__DOT__col;
    IData/*31:0*/ calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i;
    IData/*16:0*/ calc_centroid_tb__DOT__U8__DOT__sum_midpoints;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*11:0*/, 307200> calc_centroid_tb__DOT__image_mem;
    VlUnpacked<CData/*3:0*/, 640> calc_centroid_tb__DOT__U6__DOT__line0;
    VlUnpacked<CData/*3:0*/, 640> calc_centroid_tb__DOT__U6__DOT__line1;
    VlUnpacked<CData/*3:0*/, 3> calc_centroid_tb__DOT__U6__DOT__shift_top;
    VlUnpacked<CData/*3:0*/, 3> calc_centroid_tb__DOT__U6__DOT__shift_mid;
    VlUnpacked<CData/*3:0*/, 3> calc_centroid_tb__DOT__U6__DOT__shift_bot;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 640>, false, CData/*3:0*/, 1> __VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line0;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 640>, false, CData/*3:0*/, 1> __VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line1;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcalc_centroid_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcalc_centroid_tb___024root(Vcalc_centroid_tb__Syms* symsp, const char* v__name);
    ~Vcalc_centroid_tb___024root();
    VL_UNCOPYABLE(Vcalc_centroid_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
