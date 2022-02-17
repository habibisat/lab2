// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class Valu__Syms;
VL_MODULE(Valu___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(X,7,0);
    VL_IN8(Y,7,0);
    VL_IN8(op,0,0);
    VL_OUT16(Result,8,0);

    // INTERNAL VARIABLES
    Valu__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Valu___024root(const char* name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(Valu__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
