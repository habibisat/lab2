// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTen2OneMux.h"
#include "VTen2OneMux__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTen2OneMux::VTen2OneMux(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VTen2OneMux__Syms(_vcontextp__, _vcname__, this)}
    , D0{vlSymsp->TOP.D0}
    , D1{vlSymsp->TOP.D1}
    , D2{vlSymsp->TOP.D2}
    , D3{vlSymsp->TOP.D3}
    , D4{vlSymsp->TOP.D4}
    , D5{vlSymsp->TOP.D5}
    , D6{vlSymsp->TOP.D6}
    , D7{vlSymsp->TOP.D7}
    , D8{vlSymsp->TOP.D8}
    , D9{vlSymsp->TOP.D9}
    , select{vlSymsp->TOP.select}
    , Output{vlSymsp->TOP.Output}
    , rootp{&(vlSymsp->TOP)}
{
}

VTen2OneMux::VTen2OneMux(const char* _vcname__)
    : VTen2OneMux(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VTen2OneMux::~VTen2OneMux() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VTen2OneMux___024root___eval_initial(VTen2OneMux___024root* vlSelf);
void VTen2OneMux___024root___eval_settle(VTen2OneMux___024root* vlSelf);
void VTen2OneMux___024root___eval(VTen2OneMux___024root* vlSelf);
#ifdef VL_DEBUG
void VTen2OneMux___024root___eval_debug_assertions(VTen2OneMux___024root* vlSelf);
#endif  // VL_DEBUG
void VTen2OneMux___024root___final(VTen2OneMux___024root* vlSelf);

static void _eval_initial_loop(VTen2OneMux__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VTen2OneMux___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VTen2OneMux___024root___eval_settle(&(vlSymsp->TOP));
        VTen2OneMux___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VTen2OneMux::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTen2OneMux::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTen2OneMux___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VTen2OneMux___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VTen2OneMux::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VTen2OneMux::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VTen2OneMux::final() {
    VTen2OneMux___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VTen2OneMux___024root__trace_init_top(VTen2OneMux___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTen2OneMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTen2OneMux___024root*>(voidSelf);
    VTen2OneMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTen2OneMux___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTen2OneMux___024root__trace_register(VTen2OneMux___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTen2OneMux::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTen2OneMux___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
