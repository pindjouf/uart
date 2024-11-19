// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtransmitterTest.h for the primary calling header

#include "VtransmitterTest__pch.h"
#include "VtransmitterTest___024root.h"

VlCoroutine VtransmitterTest___024root___eval_initial__TOP__Vtiming__0(VtransmitterTest___024root* vlSelf);
VlCoroutine VtransmitterTest___024root___eval_initial__TOP__Vtiming__1(VtransmitterTest___024root* vlSelf);

void VtransmitterTest___024root___eval_initial(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___eval_initial\n"); );
    // Body
    VtransmitterTest___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VtransmitterTest___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__transmitterTest__DOT__clk__0 
        = vlSelf->transmitterTest__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__transmitterTest__DOT__baud__0 
        = vlSelf->transmitterTest__DOT__baud;
}

VL_INLINE_OPT VlCoroutine VtransmitterTest___024root___eval_initial__TOP__Vtiming__1(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x2710ULL, 
                                           nullptr, 
                                           "transmitterTest.v", 
                                           18);
        vlSelf->transmitterTest__DOT__clk = (1U & (~ (IData)(vlSelf->transmitterTest__DOT__clk)));
    }
}

void VtransmitterTest___024root___eval_act(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___eval_act\n"); );
}

VL_INLINE_OPT void VtransmitterTest___024root___nba_sequent__TOP__0(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__transmitterTest__DOT__dut__DOT__dut__DOT__counter;
    __Vdly__transmitterTest__DOT__dut__DOT__dut__DOT__counter = 0;
    // Body
    __Vdly__transmitterTest__DOT__dut__DOT__dut__DOT__counter 
        = vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__counter;
    if ((0x363U <= (IData)(vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__counter))) {
        vlSelf->transmitterTest__DOT__baud = (1U & 
                                              (~ (IData)(vlSelf->transmitterTest__DOT__baud)));
        __Vdly__transmitterTest__DOT__dut__DOT__dut__DOT__counter = 0U;
        vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__sample = 0U;
    } else if ((0x1b2U <= (IData)(vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__counter))) {
        __Vdly__transmitterTest__DOT__dut__DOT__dut__DOT__counter 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__counter)));
        vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__sample = 1U;
    } else {
        __Vdly__transmitterTest__DOT__dut__DOT__dut__DOT__counter 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__counter)));
    }
    vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__counter 
        = __Vdly__transmitterTest__DOT__dut__DOT__dut__DOT__counter;
}

VL_INLINE_OPT void VtransmitterTest___024root___nba_sequent__TOP__1(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*9:0*/ __Vdly__transmitterTest__DOT__dut__DOT__shift_register;
    __Vdly__transmitterTest__DOT__dut__DOT__shift_register = 0;
    CData/*3:0*/ __Vdly__transmitterTest__DOT__dut__DOT__counter;
    __Vdly__transmitterTest__DOT__dut__DOT__counter = 0;
    // Body
    vlSelf->__Vdly__transmitterTest__DOT__dut__DOT__nxt_state 
        = vlSelf->transmitterTest__DOT__dut__DOT__nxt_state;
    __Vdly__transmitterTest__DOT__dut__DOT__counter 
        = vlSelf->transmitterTest__DOT__dut__DOT__counter;
    __Vdly__transmitterTest__DOT__dut__DOT__shift_register 
        = vlSelf->transmitterTest__DOT__dut__DOT__shift_register;
    if ((0U == (IData)(vlSelf->transmitterTest__DOT__dut__DOT__cur_state))) {
        __Vdly__transmitterTest__DOT__dut__DOT__counter = 0U;
        vlSelf->__Vdly__transmitterTest__DOT__dut__DOT__nxt_state = 1U;
        vlSelf->transmitterTest__DOT__tx = 1U;
        __Vdly__transmitterTest__DOT__dut__DOT__shift_register = 0x3ffU;
    } else if ((1U == (IData)(vlSelf->transmitterTest__DOT__dut__DOT__cur_state))) {
        __Vdly__transmitterTest__DOT__dut__DOT__counter = 0U;
        vlSelf->__Vdly__transmitterTest__DOT__dut__DOT__nxt_state = 2U;
        __Vdly__transmitterTest__DOT__dut__DOT__shift_register 
            = (1U | ((IData)(vlSelf->transmitterTest__DOT__bus) 
                     << 1U));
    } else if ((2U == (IData)(vlSelf->transmitterTest__DOT__dut__DOT__cur_state))) {
        __Vdly__transmitterTest__DOT__dut__DOT__counter 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->transmitterTest__DOT__dut__DOT__counter)));
        vlSelf->__Vdly__transmitterTest__DOT__dut__DOT__nxt_state 
            = ((9U == (IData)(vlSelf->transmitterTest__DOT__dut__DOT__counter))
                ? 3U : 2U);
        vlSelf->transmitterTest__DOT__tx = (1U & (IData)(vlSelf->transmitterTest__DOT__dut__DOT__shift_register));
        __Vdly__transmitterTest__DOT__dut__DOT__shift_register 
            = (0x3ffU & VL_SHIFTR_III(10,10,32, (IData)(vlSelf->transmitterTest__DOT__dut__DOT__shift_register), 1U));
    } else if ((3U == (IData)(vlSelf->transmitterTest__DOT__dut__DOT__cur_state))) {
        __Vdly__transmitterTest__DOT__dut__DOT__counter = 0U;
        vlSelf->__Vdly__transmitterTest__DOT__dut__DOT__nxt_state = 0U;
        vlSelf->transmitterTest__DOT__tx = 1U;
    }
    vlSelf->transmitterTest__DOT__dut__DOT__counter 
        = __Vdly__transmitterTest__DOT__dut__DOT__counter;
    vlSelf->transmitterTest__DOT__dut__DOT__shift_register 
        = __Vdly__transmitterTest__DOT__dut__DOT__shift_register;
}

VL_INLINE_OPT void VtransmitterTest___024root___nba_sequent__TOP__2(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->transmitterTest__DOT__dut__DOT__cur_state 
        = ((IData)(vlSelf->transmitterTest__DOT__rstn)
            ? (IData)(vlSelf->transmitterTest__DOT__dut__DOT__nxt_state)
            : 0U);
}

VL_INLINE_OPT void VtransmitterTest___024root___nba_sequent__TOP__3(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___nba_sequent__TOP__3\n"); );
    // Body
    vlSelf->transmitterTest__DOT__dut__DOT__nxt_state 
        = vlSelf->__Vdly__transmitterTest__DOT__dut__DOT__nxt_state;
}

void VtransmitterTest___024root___eval_nba(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VtransmitterTest___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VtransmitterTest___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VtransmitterTest___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VtransmitterTest___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void VtransmitterTest___024root___timing_resume(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void VtransmitterTest___024root___eval_triggers__act(VtransmitterTest___024root* vlSelf);

bool VtransmitterTest___024root___eval_phase__act(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VtransmitterTest___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VtransmitterTest___024root___timing_resume(vlSelf);
        VtransmitterTest___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VtransmitterTest___024root___eval_phase__nba(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VtransmitterTest___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtransmitterTest___024root___dump_triggers__nba(VtransmitterTest___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VtransmitterTest___024root___dump_triggers__act(VtransmitterTest___024root* vlSelf);
#endif  // VL_DEBUG

void VtransmitterTest___024root___eval(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VtransmitterTest___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("transmitterTest.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VtransmitterTest___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("transmitterTest.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VtransmitterTest___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VtransmitterTest___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VtransmitterTest___024root___eval_debug_assertions(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
