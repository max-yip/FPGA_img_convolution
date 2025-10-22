// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrgb_to_grey_tb.h for the primary calling header

#include "Vrgb_to_grey_tb__pch.h"
#include "Vrgb_to_grey_tb__Syms.h"
#include "Vrgb_to_grey_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrgb_to_grey_tb___024root___dump_triggers__stl(Vrgb_to_grey_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrgb_to_grey_tb___024root___eval_triggers__stl(Vrgb_to_grey_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrgb_to_grey_tb___024root___eval_triggers__stl\n"); );
    Vrgb_to_grey_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrgb_to_grey_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
