// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VreceiverTest__Syms.h"


VL_ATTR_COLD void VreceiverTest___024root__trace_init_sub__TOP__0(VreceiverTest___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("receiverTest", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+12,0,"cur_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+8,0,"send_byte__Vstatic__i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"rx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"baud",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"sample",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"bus",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"cur_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"nxt_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+4,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"baud",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"sample",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"SYSTEM_CLOCK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"BAUD_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"DIVIDER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+3,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VreceiverTest___024root__trace_init_top(VreceiverTest___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root__trace_init_top\n"); );
    // Body
    VreceiverTest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VreceiverTest___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VreceiverTest___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VreceiverTest___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VreceiverTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VreceiverTest___024root__trace_register(VreceiverTest___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VreceiverTest___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VreceiverTest___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VreceiverTest___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VreceiverTest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VreceiverTest___024root__trace_const_0_sub_0(VreceiverTest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VreceiverTest___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root__trace_const_0\n"); );
    // Init
    VreceiverTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VreceiverTest___024root*>(voidSelf);
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VreceiverTest___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VreceiverTest___024root__trace_const_0_sub_0(VreceiverTest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+12,(vlSelf->receiverTest__DOT__cur_state));
    bufp->fullIData(oldp+13,(0x5f5e100U),32);
    bufp->fullIData(oldp+14,(0x1c200U),32);
    bufp->fullIData(oldp+15,(0x364U),32);
}

VL_ATTR_COLD void VreceiverTest___024root__trace_full_0_sub_0(VreceiverTest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VreceiverTest___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root__trace_full_0\n"); );
    // Init
    VreceiverTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VreceiverTest___024root*>(voidSelf);
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VreceiverTest___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VreceiverTest___024root__trace_full_0_sub_0(VreceiverTest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VreceiverTest___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->receiverTest__DOT__dut__DOT__baud));
    bufp->fullBit(oldp+2,(vlSelf->receiverTest__DOT__dut__DOT__sample));
    bufp->fullSData(oldp+3,(vlSelf->receiverTest__DOT__dut__DOT__dut__DOT__counter),16);
    bufp->fullBit(oldp+4,(vlSelf->receiverTest__DOT__clk));
    bufp->fullBit(oldp+5,(vlSelf->receiverTest__DOT__rstn));
    bufp->fullBit(oldp+6,(vlSelf->receiverTest__DOT__rx));
    bufp->fullCData(oldp+7,(vlSelf->receiverTest__DOT__bus),8);
    bufp->fullIData(oldp+8,(vlSelf->receiverTest__DOT__send_byte__Vstatic__i),32);
    bufp->fullCData(oldp+9,(vlSelf->receiverTest__DOT__dut__DOT__cur_state),3);
    bufp->fullCData(oldp+10,(vlSelf->receiverTest__DOT__dut__DOT__nxt_state),3);
    bufp->fullCData(oldp+11,(vlSelf->receiverTest__DOT__dut__DOT__counter),4);
}
