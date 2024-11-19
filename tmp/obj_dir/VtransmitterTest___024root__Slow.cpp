// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtransmitterTest.h for the primary calling header

#include "VtransmitterTest__pch.h"
#include "VtransmitterTest__Syms.h"
#include "VtransmitterTest___024root.h"

void VtransmitterTest___024root___ctor_var_reset(VtransmitterTest___024root* vlSelf);

VtransmitterTest___024root::VtransmitterTest___024root(VtransmitterTest__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VtransmitterTest___024root___ctor_var_reset(this);
}

void VtransmitterTest___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VtransmitterTest___024root::~VtransmitterTest___024root() {
}
