// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTen2OneMux__Syms.h"
#include "VTen2OneMux.h"
#include "VTen2OneMux___024root.h"

// FUNCTIONS
VTen2OneMux__Syms::~VTen2OneMux__Syms()
{
}

VTen2OneMux__Syms::VTen2OneMux__Syms(VerilatedContext* contextp, const char* namep,VTen2OneMux* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
