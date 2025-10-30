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
    CData/*0:0*/ calc_centroid_tb__DOT__centroid_ready;
    CData/*7:0*/ calc_centroid_tb__DOT__U5__DOT__gray_temp;
    CData/*6:0*/ calc_centroid_tb__DOT__U6__DOT__ready_shift;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h089f645b__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h8256e297__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h8b13eaf3__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h14cbc607__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h30510e2c__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_hfa9c3548__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_ha2cf1aa2__0;
    CData/*3:0*/ calc_centroid_tb__DOT__U6__DOT____Vlvbound_h3d11f6d6__0;
    CData/*5:0*/ calc_centroid_tb__DOT__U8__DOT__row_idx;
    CData/*5:0*/ calc_centroid_tb__DOT__U8__DOT__line_valid_pipe;
    CData/*5:0*/ calc_centroid_tb__DOT__U8__DOT__line_lost_pipe;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__calc_centroid_tb__DOT__clk_video__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__calc_centroid_tb__DOT__sys_reset__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ calc_centroid_tb__DOT__video_data;
    SData/*11:0*/ calc_centroid_tb__DOT__U6__DOT__gx;
    SData/*11:0*/ calc_centroid_tb__DOT__U6__DOT__gy;
    SData/*12:0*/ calc_centroid_tb__DOT__U6__DOT__mag;
    SData/*14:0*/ calc_centroid_tb__DOT__U8__DOT__sum_p;
    SData/*9:0*/ calc_centroid_tb__DOT__U8__DOT__pixel_count;
    SData/*14:0*/ calc_centroid_tb__DOT__U8__DOT__current_row_sum_p;
    SData/*14:0*/ calc_centroid_tb__DOT__U8__DOT____Vcellinp__Udiv__denom;
    SData/*10:0*/ calc_centroid_tb__DOT__U8__DOT__Udiv__DOT____Vlvbound_he67cc5ec__0;
    IData/*31:0*/ calc_centroid_tb__DOT__i;
    IData/*31:0*/ calc_centroid_tb__DOT__ppm_file;
    IData/*31:0*/ calc_centroid_tb__DOT__px_cnt;
    IData/*31:0*/ calc_centroid_tb__DOT__unnamedblk1__DOT__val;
    IData/*31:0*/ calc_centroid_tb__DOT__U6__DOT__col;
    IData/*17:0*/ calc_centroid_tb__DOT__U6__DOT__gx_s2;
    IData/*17:0*/ calc_centroid_tb__DOT__U6__DOT__gy_s2;
    IData/*18:0*/ calc_centroid_tb__DOT__U6__DOT__mag_s3;
    IData/*31:0*/ calc_centroid_tb__DOT__U6__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ calc_centroid_tb__DOT__U6__DOT__unnamedblk2__DOT__j;
    IData/*31:0*/ calc_centroid_tb__DOT__U6__DOT__unnamedblk3__DOT__i;
    IData/*22:0*/ calc_centroid_tb__DOT__U8__DOT__sum_x;
    IData/*22:0*/ calc_centroid_tb__DOT__U8__DOT__current_row_sum_x;
    IData/*31:0*/ calc_centroid_tb__DOT__U8__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__unnamedblk2__DOT__i;
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
    VlUnpacked<SData/*15:0*/, 25> calc_centroid_tb__DOT__U6__DOT__gx_s1;
    VlUnpacked<SData/*15:0*/, 25> calc_centroid_tb__DOT__U6__DOT__gy_s1;
    VlUnpacked<SData/*10:0*/, 64> calc_centroid_tb__DOT__U8__DOT__row_sum_x;
    VlUnpacked<SData/*9:0*/, 64> calc_centroid_tb__DOT__U8__DOT__row_sum_p;
    VlUnpacked<SData/*10:0*/, 6> calc_centroid_tb__DOT__U8__DOT__Udiv__DOT__div_pipe;
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
