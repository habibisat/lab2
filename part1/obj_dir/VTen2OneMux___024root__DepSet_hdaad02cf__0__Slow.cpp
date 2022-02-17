// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTen2OneMux.h for the primary calling header

#include "verilated.h"

#include "VTen2OneMux___024root.h"

VL_ATTR_COLD void VTen2OneMux___024root___eval_initial(VTen2OneMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root___eval_initial\n"); );
}

void VTen2OneMux___024root___combo__TOP__1(VTen2OneMux___024root* vlSelf);

VL_ATTR_COLD void VTen2OneMux___024root___eval_settle(VTen2OneMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root___eval_settle\n"); );
    // Body
    VTen2OneMux___024root___combo__TOP__1(vlSelf);
}

VL_ATTR_COLD void VTen2OneMux___024root___final(VTen2OneMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root___final\n"); );
}

VL_ATTR_COLD void VTen2OneMux___024root___ctor_var_reset(VTen2OneMux___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->D0 = VL_RAND_RESET_I(8);
    vlSelf->D1 = VL_RAND_RESET_I(8);
    vlSelf->D2 = VL_RAND_RESET_I(8);
    vlSelf->D3 = VL_RAND_RESET_I(8);
    vlSelf->D4 = VL_RAND_RESET_I(8);
    vlSelf->D5 = VL_RAND_RESET_I(8);
    vlSelf->D6 = VL_RAND_RESET_I(8);
    vlSelf->D7 = VL_RAND_RESET_I(8);
    vlSelf->D8 = VL_RAND_RESET_I(8);
    vlSelf->D9 = VL_RAND_RESET_I(8);
    vlSelf->select = VL_RAND_RESET_I(4);
    vlSelf->Output = VL_RAND_RESET_I(8);
}
