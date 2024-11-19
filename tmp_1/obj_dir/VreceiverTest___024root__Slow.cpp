// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VreceiverTest.h for the primary calling header

#include "VreceiverTest__pch.h"
#include "VreceiverTest__Syms.h"
#include "VreceiverTest___024root.h"

void VreceiverTest___024root___ctor_var_reset(VreceiverTest___024root* vlSelf);

VreceiverTest___024root::VreceiverTest___024root(VreceiverTest__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VreceiverTest___024root___ctor_var_reset(this);
}

void VreceiverTest___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VreceiverTest___024root::~VreceiverTest___024root() {
}
