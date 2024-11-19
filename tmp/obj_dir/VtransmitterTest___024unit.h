// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtransmitterTest.h for the primary calling header

#ifndef VERILATED_VTRANSMITTERTEST___024UNIT_H_
#define VERILATED_VTRANSMITTERTEST___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class VtransmitterTest__Syms;

class alignas(VL_CACHE_LINE_BYTES) VtransmitterTest___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VtransmitterTest__Syms* const vlSymsp;

    // CONSTRUCTORS
    VtransmitterTest___024unit(VtransmitterTest__Syms* symsp, const char* v__name);
    ~VtransmitterTest___024unit();
    VL_UNCOPYABLE(VtransmitterTest___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
