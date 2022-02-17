// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTen2OneMux.h for the primary calling header

#ifndef VERILATED_VTEN2ONEMUX___024ROOT_H_
#define VERILATED_VTEN2ONEMUX___024ROOT_H_  // guard

#include "verilated.h"

class VTen2OneMux__Syms;
VL_MODULE(VTen2OneMux___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(D0,7,0);
    VL_IN8(D1,7,0);
    VL_IN8(D2,7,0);
    VL_IN8(D3,7,0);
    VL_IN8(D4,7,0);
    VL_IN8(D5,7,0);
    VL_IN8(D6,7,0);
    VL_IN8(D7,7,0);
    VL_IN8(D8,7,0);
    VL_IN8(D9,7,0);
    VL_IN8(select,3,0);
    VL_OUT8(Output,7,0);

    // INTERNAL VARIABLES
    VTen2OneMux__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VTen2OneMux___024root(const char* name);
    ~VTen2OneMux___024root();
    VL_UNCOPYABLE(VTen2OneMux___024root);

    // INTERNAL METHODS
    void __Vconfigure(VTen2OneMux__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
