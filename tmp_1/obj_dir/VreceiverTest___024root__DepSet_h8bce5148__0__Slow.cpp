// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VreceiverTest.h for the primary calling header

#include "VreceiverTest__pch.h"
#include "VreceiverTest___024root.h"

VL_ATTR_COLD void VreceiverTest___024root___eval_static(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___eval_static\n"); );
}

VL_ATTR_COLD void VreceiverTest___024root___eval_final(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___eval_final\n"); );
}

VL_ATTR_COLD void VreceiverTest___024root___eval_settle(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VreceiverTest___024root___dump_triggers__act(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge receiverTest.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge receiverTest.dut.sample)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VreceiverTest___024root___dump_triggers__nba(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge receiverTest.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge receiverTest.dut.sample)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VreceiverTest___024root___ctor_var_reset(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->receiverTest__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->receiverTest__DOT__rstn = VL_RAND_RESET_I(1);
    vlSelf->receiverTest__DOT__rx = VL_RAND_RESET_I(1);
    vlSelf->receiverTest__DOT__bus = VL_RAND_RESET_I(8);
    vlSelf->receiverTest__DOT__cur_state = VL_RAND_RESET_I(1);
    vlSelf->receiverTest__DOT__send_byte__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->receiverTest__DOT__dut__DOT__baud = VL_RAND_RESET_I(1);
    vlSelf->receiverTest__DOT__dut__DOT__sample = VL_RAND_RESET_I(1);
    vlSelf->receiverTest__DOT__dut__DOT__cur_state = VL_RAND_RESET_I(3);
    vlSelf->receiverTest__DOT__dut__DOT__nxt_state = VL_RAND_RESET_I(3);
    vlSelf->receiverTest__DOT__dut__DOT__counter = VL_RAND_RESET_I(4);
    vlSelf->receiverTest__DOT__dut__DOT__dut__DOT__counter = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__receiverTest__DOT__dut__DOT__nxt_state = VL_RAND_RESET_I(3);
    vlSelf->__Vtrigprevexpr___TOP__receiverTest__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__receiverTest__DOT__dut__DOT__sample__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
