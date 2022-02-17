// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTEN2ONEMUX__SYMS_H_
#define VERILATED_VTEN2ONEMUX__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTen2OneMux.h"

// INCLUDE MODULE CLASSES
#include "VTen2OneMux___024root.h"

// SYMS CLASS (contains all model state)
class VTen2OneMux__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTen2OneMux* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTen2OneMux___024root          TOP;

    // CONSTRUCTORS
    VTen2OneMux__Syms(VerilatedContext* contextp, const char* namep, VTen2OneMux* modelp);
    ~VTen2OneMux__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
