// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VreceiverTest.h for the primary calling header

#include "VreceiverTest__pch.h"
#include "VreceiverTest___024root.h"

VlCoroutine VreceiverTest___024root___eval_initial__TOP__Vtiming__0(VreceiverTest___024root* vlSelf);
VlCoroutine VreceiverTest___024root___eval_initial__TOP__Vtiming__1(VreceiverTest___024root* vlSelf);

void VreceiverTest___024root___eval_initial(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___eval_initial\n"); );
    // Body
    VreceiverTest___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VreceiverTest___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__receiverTest__DOT__clk__0 
        = vlSelf->receiverTest__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__receiverTest__DOT__dut__DOT__sample__0 
        = vlSelf->receiverTest__DOT__dut__DOT__sample;
}

VL_INLINE_OPT VlCoroutine VreceiverTest___024root___eval_initial__TOP__Vtiming__1(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x2710ULL, 
                                           nullptr, 
                                           "receiverTest.v", 
                                           20);
        vlSelf->receiverTest__DOT__clk = (1U & (~ (IData)(vlSelf->receiverTest__DOT__clk)));
    }
}

void VreceiverTest___024root___eval_act(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___eval_act\n"); );
}

VL_INLINE_OPT void VreceiverTest___024root___nba_sequent__TOP__0(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__receiverTest__DOT__dut__DOT__baud;
    __Vdly__receiverTest__DOT__dut__DOT__baud = 0;
    SData/*15:0*/ __Vdly__receiverTest__DOT__dut__DOT__dut__DOT__counter;
    __Vdly__receiverTest__DOT__dut__DOT__dut__DOT__counter = 0;
    // Body
    __Vdly__receiverTest__DOT__dut__DOT__dut__DOT__counter 
        = vlSelf->receiverTest__DOT__dut__DOT__dut__DOT__counter;
    __Vdly__receiverTest__DOT__dut__DOT__baud = vlSelf->receiverTest__DOT__dut__DOT__baud;
    if ((0x363U <= (IData)(vlSelf->receiverTest__DOT__dut__DOT__dut__DOT__counter))) {
        __Vdly__receiverTest__DOT__dut__DOT__baud = 
            (1U & (~ (IData)(vlSelf->receiverTest__DOT__dut__DOT__baud)));
        __Vdly__receiverTest__DOT__dut__DOT__dut__DOT__counter = 0U;
        vlSelf->receiverTest__DOT__dut__DOT__sample = 0U;
    } else if (((IData)(vlSelf->receiverTest__DOT__dut__DOT__baud) 
                & (0x1b2U <= (IData)(vlSelf->receiverTest__DOT__dut__DOT__dut__DOT__counter)))) {
        __Vdly__receiverTest__DOT__dut__DOT__dut__DOT__counter 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->receiverTest__DOT__dut__DOT__dut__DOT__counter)));
        vlSelf->receiverTest__DOT__dut__DOT__sample = 1U;
    } else {
        __Vdly__receiverTest__DOT__dut__DOT__dut__DOT__counter 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->receiverTest__DOT__dut__DOT__dut__DOT__counter)));
    }
    vlSelf->receiverTest__DOT__dut__DOT__baud = __Vdly__receiverTest__DOT__dut__DOT__baud;
    vlSelf->receiverTest__DOT__dut__DOT__dut__DOT__counter 
        = __Vdly__receiverTest__DOT__dut__DOT__dut__DOT__counter;
}

VL_INLINE_OPT void VreceiverTest___024root___nba_sequent__TOP__1(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vdly__receiverTest__DOT__dut__DOT__counter;
    __Vdly__receiverTest__DOT__dut__DOT__counter = 0;
    CData/*7:0*/ __Vdly__receiverTest__DOT__bus;
    __Vdly__receiverTest__DOT__bus = 0;
    // Body
    __Vdly__receiverTest__DOT__bus = vlSelf->receiverTest__DOT__bus;
    __Vdly__receiverTest__DOT__dut__DOT__counter = vlSelf->receiverTest__DOT__dut__DOT__counter;
    vlSelf->__Vdly__receiverTest__DOT__dut__DOT__nxt_state 
        = vlSelf->receiverTest__DOT__dut__DOT__nxt_state;
    vlSelf->__Vdly__receiverTest__DOT__dut__DOT__nxt_state = 0U;
    if ((0U == (IData)(vlSelf->receiverTest__DOT__dut__DOT__cur_state))) {
        __Vdly__receiverTest__DOT__bus = vlSelf->receiverTest__DOT__rx;
        __Vdly__receiverTest__DOT__dut__DOT__counter = 0U;
        if ((1U & (~ (IData)(vlSelf->receiverTest__DOT__rx)))) {
            vlSelf->__Vdly__receiverTest__DOT__dut__DOT__nxt_state = 4U;
        }
    } else {
        if ((4U != (IData)(vlSelf->receiverTest__DOT__dut__DOT__cur_state))) {
            if ((2U == (IData)(vlSelf->receiverTest__DOT__dut__DOT__cur_state))) {
                __Vdly__receiverTest__DOT__bus = ((0xfeU 
                                                   & ((IData)(vlSelf->receiverTest__DOT__bus) 
                                                      << 1U)) 
                                                  | (IData)(vlSelf->receiverTest__DOT__rx));
            }
        }
        if ((4U == (IData)(vlSelf->receiverTest__DOT__dut__DOT__cur_state))) {
            __Vdly__receiverTest__DOT__dut__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->receiverTest__DOT__dut__DOT__counter)));
            vlSelf->__Vdly__receiverTest__DOT__dut__DOT__nxt_state = 2U;
        } else if ((2U == (IData)(vlSelf->receiverTest__DOT__dut__DOT__cur_state))) {
            __Vdly__receiverTest__DOT__dut__DOT__counter 
                = (0xfU & ((IData)(1U) + (IData)(vlSelf->receiverTest__DOT__dut__DOT__counter)));
            if ((9U == (IData)(vlSelf->receiverTest__DOT__dut__DOT__counter))) {
                if (vlSelf->receiverTest__DOT__rx) {
                    vlSelf->__Vdly__receiverTest__DOT__dut__DOT__nxt_state = 5U;
                }
            }
        } else if ((5U == (IData)(vlSelf->receiverTest__DOT__dut__DOT__cur_state))) {
            vlSelf->__Vdly__receiverTest__DOT__dut__DOT__nxt_state = 0U;
            __Vdly__receiverTest__DOT__dut__DOT__counter = 0U;
        }
    }
    vlSelf->receiverTest__DOT__bus = __Vdly__receiverTest__DOT__bus;
    vlSelf->receiverTest__DOT__dut__DOT__counter = __Vdly__receiverTest__DOT__dut__DOT__counter;
}

VL_INLINE_OPT void VreceiverTest___024root___nba_sequent__TOP__2(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->receiverTest__DOT__dut__DOT__cur_state 
        = ((IData)(vlSelf->receiverTest__DOT__rstn)
            ? (IData)(vlSelf->receiverTest__DOT__dut__DOT__nxt_state)
            : 0U);
}

VL_INLINE_OPT void VreceiverTest___024root___nba_sequent__TOP__3(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->receiverTest__DOT__dut__DOT__nxt_state 
        = vlSelf->__Vdly__receiverTest__DOT__dut__DOT__nxt_state;
}

void VreceiverTest___024root___eval_nba(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VreceiverTest___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VreceiverTest___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VreceiverTest___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VreceiverTest___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void VreceiverTest___024root___timing_resume(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VreceiverTest___024root___eval_triggers__act(VreceiverTest___024root* vlSelf);

bool VreceiverTest___024root___eval_phase__act(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VreceiverTest___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VreceiverTest___024root___timing_resume(vlSelf);
        VreceiverTest___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VreceiverTest___024root___eval_phase__nba(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VreceiverTest___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VreceiverTest___024root___dump_triggers__nba(VreceiverTest___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VreceiverTest___024root___dump_triggers__act(VreceiverTest___024root* vlSelf);
#endif  // VL_DEBUG

void VreceiverTest___024root___eval(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VreceiverTest___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("receiverTest.v", 6, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VreceiverTest___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("receiverTest.v", 6, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VreceiverTest___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VreceiverTest___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VreceiverTest___024root___eval_debug_assertions(VreceiverTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
