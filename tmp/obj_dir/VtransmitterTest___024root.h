// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtransmitterTest.h for the primary calling header

#ifndef VERILATED_VTRANSMITTERTEST___024ROOT_H_
#define VERILATED_VTRANSMITTERTEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VtransmitterTest__Syms;

class alignas(VL_CACHE_LINE_BYTES) VtransmitterTest___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ transmitterTest__DOT__clk;
    CData/*0:0*/ transmitterTest__DOT__baud;
    CData/*0:0*/ transmitterTest__DOT__rstn;
    CData/*7:0*/ transmitterTest__DOT__bus;
    CData/*0:0*/ transmitterTest__DOT__tx;
    CData/*2:0*/ transmitterTest__DOT__dut__DOT__cur_state;
    CData/*2:0*/ transmitterTest__DOT__dut__DOT__nxt_state;
    CData/*3:0*/ transmitterTest__DOT__dut__DOT__counter;
    CData/*0:0*/ transmitterTest__DOT__dut__DOT__dut__DOT__sample;
    CData/*2:0*/ __Vdly__transmitterTest__DOT__dut__DOT__nxt_state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__transmitterTest__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__transmitterTest__DOT__baud__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ transmitterTest__DOT__dut__DOT__shift_register;
    SData/*15:0*/ transmitterTest__DOT__dut__DOT__dut__DOT__counter;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VtransmitterTest__Syms* const vlSymsp;

    // CONSTRUCTORS
    VtransmitterTest___024root(VtransmitterTest__Syms* symsp, const char* v__name);
    ~VtransmitterTest___024root();
    VL_UNCOPYABLE(VtransmitterTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
