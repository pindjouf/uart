// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VreceiverTest__Syms.h"


void VreceiverTest___024root__trace_chg_0_sub_0(VreceiverTest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VreceiverTest___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root__trace_chg_0\n"); );
    // Init
    VreceiverTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VreceiverTest___024root*>(voidSelf);
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VreceiverTest___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VreceiverTest___024root__trace_chg_0_sub_0(VreceiverTest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->receiverTest__DOT__dut__DOT__baud));
        bufp->chgBit(oldp+1,(vlSelf->receiverTest__DOT__dut__DOT__sample));
        bufp->chgSData(oldp+2,(vlSelf->receiverTest__DOT__dut__DOT__dut__DOT__counter),16);
    }
    bufp->chgBit(oldp+3,(vlSelf->receiverTest__DOT__clk));
    bufp->chgBit(oldp+4,(vlSelf->receiverTest__DOT__rstn));
    bufp->chgBit(oldp+5,(vlSelf->receiverTest__DOT__rx));
    bufp->chgCData(oldp+6,(vlSelf->receiverTest__DOT__bus),8);
    bufp->chgIData(oldp+7,(vlSelf->receiverTest__DOT__send_byte__Vstatic__i),32);
    bufp->chgCData(oldp+8,(vlSelf->receiverTest__DOT__dut__DOT__cur_state),3);
    bufp->chgCData(oldp+9,(vlSelf->receiverTest__DOT__dut__DOT__nxt_state),3);
    bufp->chgCData(oldp+10,(vlSelf->receiverTest__DOT__dut__DOT__counter),4);
}

void VreceiverTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root__trace_cleanup\n"); );
    // Init
    VreceiverTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VreceiverTest___024root*>(voidSelf);
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
