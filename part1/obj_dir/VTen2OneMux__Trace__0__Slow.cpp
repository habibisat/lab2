// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTen2OneMux__Syms.h"


VL_ATTR_COLD void VTen2OneMux___024root__trace_init_sub__TOP__0(VTen2OneMux___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"D0", false,-1, 7,0);
    tracep->declBus(c+2,"D1", false,-1, 7,0);
    tracep->declBus(c+3,"D2", false,-1, 7,0);
    tracep->declBus(c+4,"D3", false,-1, 7,0);
    tracep->declBus(c+5,"D4", false,-1, 7,0);
    tracep->declBus(c+6,"D5", false,-1, 7,0);
    tracep->declBus(c+7,"D6", false,-1, 7,0);
    tracep->declBus(c+8,"D7", false,-1, 7,0);
    tracep->declBus(c+9,"D8", false,-1, 7,0);
    tracep->declBus(c+10,"D9", false,-1, 7,0);
    tracep->declBus(c+11,"select", false,-1, 3,0);
    tracep->declBus(c+12,"Output", false,-1, 7,0);
    tracep->pushNamePrefix("Ten2OneMux ");
    tracep->declBus(c+1,"D0", false,-1, 7,0);
    tracep->declBus(c+2,"D1", false,-1, 7,0);
    tracep->declBus(c+3,"D2", false,-1, 7,0);
    tracep->declBus(c+4,"D3", false,-1, 7,0);
    tracep->declBus(c+5,"D4", false,-1, 7,0);
    tracep->declBus(c+6,"D5", false,-1, 7,0);
    tracep->declBus(c+7,"D6", false,-1, 7,0);
    tracep->declBus(c+8,"D7", false,-1, 7,0);
    tracep->declBus(c+9,"D8", false,-1, 7,0);
    tracep->declBus(c+10,"D9", false,-1, 7,0);
    tracep->declBus(c+11,"select", false,-1, 3,0);
    tracep->declBus(c+12,"Output", false,-1, 7,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VTen2OneMux___024root__trace_init_top(VTen2OneMux___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root__trace_init_top\n"); );
    // Body
    VTen2OneMux___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VTen2OneMux___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTen2OneMux___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VTen2OneMux___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VTen2OneMux___024root__trace_register(VTen2OneMux___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VTen2OneMux___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VTen2OneMux___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VTen2OneMux___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VTen2OneMux___024root__trace_full_sub_0(VTen2OneMux___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTen2OneMux___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root__trace_full_top_0\n"); );
    // Init
    VTen2OneMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTen2OneMux___024root*>(voidSelf);
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VTen2OneMux___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VTen2OneMux___024root__trace_full_sub_0(VTen2OneMux___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTen2OneMux___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->D0),8);
    tracep->fullCData(oldp+2,(vlSelf->D1),8);
    tracep->fullCData(oldp+3,(vlSelf->D2),8);
    tracep->fullCData(oldp+4,(vlSelf->D3),8);
    tracep->fullCData(oldp+5,(vlSelf->D4),8);
    tracep->fullCData(oldp+6,(vlSelf->D5),8);
    tracep->fullCData(oldp+7,(vlSelf->D6),8);
    tracep->fullCData(oldp+8,(vlSelf->D7),8);
    tracep->fullCData(oldp+9,(vlSelf->D8),8);
    tracep->fullCData(oldp+10,(vlSelf->D9),8);
    tracep->fullCData(oldp+11,(vlSelf->select),4);
    tracep->fullCData(oldp+12,(vlSelf->Output),8);
}
