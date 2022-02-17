// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTen2OneMux.h for the primary calling header

#include "verilated.h"

#include "VTen2OneMux___024root.h"

VL_INLINE_OPT void VTen2OneMux___024root___combo__TOP__1(VTen2OneMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->Output = ((8U & (IData)(vlSelf->select))
                       ? ((4U & (IData)(vlSelf->select))
                           ? 0U : ((2U & (IData)(vlSelf->select))
                                    ? 0U : ((1U & (IData)(vlSelf->select))
                                             ? (IData)(vlSelf->D9)
                                             : (IData)(vlSelf->D8))))
                       : ((4U & (IData)(vlSelf->select))
                           ? ((2U & (IData)(vlSelf->select))
                               ? ((1U & (IData)(vlSelf->select))
                                   ? (IData)(vlSelf->D7)
                                   : (IData)(vlSelf->D6))
                               : ((1U & (IData)(vlSelf->select))
                                   ? (IData)(vlSelf->D5)
                                   : (IData)(vlSelf->D4)))
                           : ((2U & (IData)(vlSelf->select))
                               ? ((1U & (IData)(vlSelf->select))
                                   ? (IData)(vlSelf->D3)
                                   : (IData)(vlSelf->D2))
                               : ((1U & (IData)(vlSelf->select))
                                   ? (IData)(vlSelf->D1)
                                   : (IData)(vlSelf->D0)))));
}

void VTen2OneMux___024root___eval(VTen2OneMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root___eval\n"); );
    // Body
    VTen2OneMux___024root___combo__TOP__1(vlSelf);
}

#ifdef VL_DEBUG
void VTen2OneMux___024root___eval_debug_assertions(VTen2OneMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->select & 0xf0U))) {
        Verilated::overWidthError("select");}
}
#endif  // VL_DEBUG
