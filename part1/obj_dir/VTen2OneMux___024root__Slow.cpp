// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTen2OneMux.h for the primary calling header

#include "verilated.h"

#include "VTen2OneMux__Syms.h"
#include "VTen2OneMux___024root.h"

void VTen2OneMux___024root___ctor_var_reset(VTen2OneMux___024root* vlSelf);

VTen2OneMux___024root::VTen2OneMux___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VTen2OneMux___024root___ctor_var_reset(this);
}

void VTen2OneMux___024root::__Vconfigure(VTen2OneMux__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VTen2OneMux___024root::~VTen2OneMux___024root() {
}
