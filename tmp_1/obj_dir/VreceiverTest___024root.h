// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VreceiverTest.h for the primary calling header

#ifndef VERILATED_VRECEIVERTEST___024ROOT_H_
#define VERILATED_VRECEIVERTEST___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VreceiverTest__Syms;

class alignas(VL_CACHE_LINE_BYTES) VreceiverTest___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ receiverTest__DOT__clk;
    CData/*0:0*/ receiverTest__DOT__dut__DOT__sample;
    CData/*0:0*/ receiverTest__DOT__rstn;
    CData/*0:0*/ receiverTest__DOT__rx;
    CData/*7:0*/ receiverTest__DOT__bus;
    CData/*0:0*/ receiverTest__DOT__cur_state;
    CData/*0:0*/ receiverTest__DOT__dut__DOT__baud;
    CData/*2:0*/ receiverTest__DOT__dut__DOT__cur_state;
    CData/*2:0*/ receiverTest__DOT__dut__DOT__nxt_state;
    CData/*3:0*/ receiverTest__DOT__dut__DOT__counter;
    CData/*2:0*/ __Vdly__receiverTest__DOT__dut__DOT__nxt_state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__receiverTest__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__receiverTest__DOT__dut__DOT__sample__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ receiverTest__DOT__dut__DOT__dut__DOT__counter;
    IData/*31:0*/ receiverTest__DOT__send_byte__Vstatic__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VreceiverTest__Syms* const vlSymsp;

    // CONSTRUCTORS
    VreceiverTest___024root(VreceiverTest__Syms* symsp, const char* v__name);
    ~VreceiverTest___024root();
    VL_UNCOPYABLE(VreceiverTest___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
