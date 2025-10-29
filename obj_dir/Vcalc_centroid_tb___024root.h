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
    CData/*4:0*/ calc_centroid_tb__DOT__U6__DOT__ready_shift;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h089f645b__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h8256e297__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h8b13eaf3__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h14cbc607__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h30510e2c__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_hfa9c3548__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_ha2cf1aa2__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h3d11f6d6__0;
    CData/*0:0*/ calc_centroid_tb__DOT__U8__DOT__line_valid_reg;
    CData/*0:0*/ calc_centroid_tb__DOT__U8__DOT__line_lost_reg;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__calc_centroid_tb__DOT__clk_video__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__calc_centroid_tb__DOT__sys_reset__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ calc_centroid_tb__DOT__video_data;
    SData/*11:0*/ calc_centroid_tb__DOT__U6__DOT__gx;
    SData/*11:0*/ calc_centroid_tb__DOT__U6__DOT__gy;
    SData/*12:0*/ calc_centroid_tb__DOT__U6__DOT__mag;
    SData/*10:0*/ calc_centroid_tb__DOT__U8__DOT__centroid_x_reg;
    SData/*9:0*/ calc_centroid_tb__DOT__U8__DOT__pixel_count;
    SData/*9:0*/ calc_centroid_tb__DOT__U8__DOT__row_count;
    SData/*9:0*/ calc_centroid_tb__DOT__U8__DOT__window_start_row;
    IData/*31:0*/ calc_centroid_tb__DOT__i;
    IData/*31:0*/ calc_centroid_tb__DOT__ppm_file;
    IData/*31:0*/ calc_centroid_tb__DOT__px_cnt;
    IData/*31:0*/ calc_centroid_tb__DOT__unnamedblk1__DOT__val;
    IData/*31:0*/ calc_centroid_tb__DOT__U6__DOT__col;
    IData/*31:0*/ calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ calc_centroid_tb__DOT__U6__DOT__unnamedblk2__DOT__j;
    IData/*24:0*/ calc_centroid_tb__DOT__U8__DOT__sum_x;
    IData/*19:0*/ calc_centroid_tb__DOT__U8__DOT__sum_p;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<SData/*11:0*/, 307200> calc_centroid_tb__DOT__image_mem;
    VlUnpacked<CData/*3:0*/, 640> calc_centroid_tb__DOT__U6__DOT__line0;
    VlUnpacked<CData/*3:0*/, 640> calc_centroid_tb__DOT__U6__DOT__line1;
    VlUnpacked<CData/*3:0*/, 640> calc_centroid_tb__DOT__U6__DOT__line2;
    VlUnpacked<CData/*3:0*/, 640> calc_centroid_tb__DOT__U6__DOT__line3;
    VlUnpacked<CData/*3:0*/, 5> calc_centroid_tb__DOT__U6__DOT__shift_0;
    VlUnpacked<CData/*3:0*/, 5> calc_centroid_tb__DOT__U6__DOT__shift_1;
    VlUnpacked<CData/*3:0*/, 5> calc_centroid_tb__DOT__U6__DOT__shift_2;
    VlUnpacked<CData/*3:0*/, 5> calc_centroid_tb__DOT__U6__DOT__shift_3;
    VlUnpacked<CData/*3:0*/, 5> calc_centroid_tb__DOT__U6__DOT__shift_4;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 640>, false, CData/*3:0*/, 1> __VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line0;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 640>, false, CData/*3:0*/, 1> __VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line1;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 640>, false, CData/*3:0*/, 1> __VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line2;
    VlNBACommitQueue<VlUnpacked<CData/*3:0*/, 640>, false, CData/*3:0*/, 1> __VdlyCommitQueuecalc_centroid_tb__DOT__U6__DOT__line3;
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
