// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VtransmitterTest__Syms.h"


void VtransmitterTest___024root__trace_chg_0_sub_0(VtransmitterTest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VtransmitterTest___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root__trace_chg_0\n"); );
    // Init
    VtransmitterTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtransmitterTest___024root*>(voidSelf);
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VtransmitterTest___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VtransmitterTest___024root__trace_chg_0_sub_0(VtransmitterTest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->transmitterTest__DOT__baud));
        bufp->chgBit(oldp+1,(vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__sample));
        bufp->chgSData(oldp+2,(vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__counter),16);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+3,(vlSelf->transmitterTest__DOT__tx));
        bufp->chgSData(oldp+4,(vlSelf->transmitterTest__DOT__dut__DOT__shift_register),10);
        bufp->chgCData(oldp+5,(vlSelf->transmitterTest__DOT__dut__DOT__counter),4);
    }
    bufp->chgBit(oldp+6,(vlSelf->transmitterTest__DOT__clk));
    bufp->chgBit(oldp+7,(vlSelf->transmitterTest__DOT__rstn));
    bufp->chgCData(oldp+8,(vlSelf->transmitterTest__DOT__bus),8);
    bufp->chgCData(oldp+9,(vlSelf->transmitterTest__DOT__dut__DOT__cur_state),3);
    bufp->chgCData(oldp+10,(vlSelf->transmitterTest__DOT__dut__DOT__nxt_state),3);
}

void VtransmitterTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root__trace_cleanup\n"); );
    // Init
    VtransmitterTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtransmitterTest___024root*>(voidSelf);
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
