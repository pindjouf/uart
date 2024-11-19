// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VreceiverTest.h for the primary calling header

#ifndef VERILATED_VRECEIVERTEST___024UNIT_H_
#define VERILATED_VRECEIVERTEST___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VreceiverTest__Syms;

class alignas(VL_CACHE_LINE_BYTES) VreceiverTest___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VreceiverTest__Syms* const vlSymsp;

    // CONSTRUCTORS
    VreceiverTest___024unit(VreceiverTest__Syms* symsp, const char* v__name);
    ~VreceiverTest___024unit();
    VL_UNCOPYABLE(VreceiverTest___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
