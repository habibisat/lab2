// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTen2OneMux__Syms.h"


void VTen2OneMux___024root__trace_chg_sub_0(VTen2OneMux___024root* vlSelf, VerilatedVcd* tracep);

void VTen2OneMux___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root__trace_chg_top_0\n"); );
    // Init
    VTen2OneMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTen2OneMux___024root*>(voidSelf);
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VTen2OneMux___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VTen2OneMux___024root__trace_chg_sub_0(VTen2OneMux___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgCData(oldp+0,(vlSelf->D0),8);
    tracep->chgCData(oldp+1,(vlSelf->D1),8);
    tracep->chgCData(oldp+2,(vlSelf->D2),8);
    tracep->chgCData(oldp+3,(vlSelf->D3),8);
    tracep->chgCData(oldp+4,(vlSelf->D4),8);
    tracep->chgCData(oldp+5,(vlSelf->D5),8);
    tracep->chgCData(oldp+6,(vlSelf->D6),8);
    tracep->chgCData(oldp+7,(vlSelf->D7),8);
    tracep->chgCData(oldp+8,(vlSelf->D8),8);
    tracep->chgCData(oldp+9,(vlSelf->D9),8);
    tracep->chgCData(oldp+10,(vlSelf->select),4);
    tracep->chgCData(oldp+11,(vlSelf->Output),8);
}

void VTen2OneMux___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root__trace_cleanup\n"); );
    // Init
    VTen2OneMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTen2OneMux___024root*>(voidSelf);
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
