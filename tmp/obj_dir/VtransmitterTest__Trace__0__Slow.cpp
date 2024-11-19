// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VtransmitterTest__Syms.h"


VL_ATTR_COLD void VtransmitterTest___024root__trace_init_sub__TOP__0(VtransmitterTest___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("transmitterTest", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rstn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"baud",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"tx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"rstn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"bus",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1,0,"baud",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"tx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"cur_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+11,0,"nxt_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+5,0,"shift_register",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+6,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+7,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"baud",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"sample",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"SYSTEM_CLOCK_FREQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"BAUD_RATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"DIVIDER",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+3,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VtransmitterTest___024root__trace_init_top(VtransmitterTest___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root__trace_init_top\n"); );
    // Body
    VtransmitterTest___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VtransmitterTest___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VtransmitterTest___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VtransmitterTest___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VtransmitterTest___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VtransmitterTest___024root__trace_register(VtransmitterTest___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VtransmitterTest___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VtransmitterTest___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VtransmitterTest___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VtransmitterTest___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VtransmitterTest___024root__trace_const_0_sub_0(VtransmitterTest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VtransmitterTest___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root__trace_const_0\n"); );
    // Init
    VtransmitterTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtransmitterTest___024root*>(voidSelf);
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VtransmitterTest___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VtransmitterTest___024root__trace_const_0_sub_0(VtransmitterTest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+12,(0x5f5e100U),32);
    bufp->fullIData(oldp+13,(0x1c200U),32);
    bufp->fullIData(oldp+14,(0x364U),32);
}

VL_ATTR_COLD void VtransmitterTest___024root__trace_full_0_sub_0(VtransmitterTest___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VtransmitterTest___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root__trace_full_0\n"); );
    // Init
    VtransmitterTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtransmitterTest___024root*>(voidSelf);
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VtransmitterTest___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VtransmitterTest___024root__trace_full_0_sub_0(VtransmitterTest___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->transmitterTest__DOT__baud));
    bufp->fullBit(oldp+2,(vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__sample));
    bufp->fullSData(oldp+3,(vlSelf->transmitterTest__DOT__dut__DOT__dut__DOT__counter),16);
    bufp->fullBit(oldp+4,(vlSelf->transmitterTest__DOT__tx));
    bufp->fullSData(oldp+5,(vlSelf->transmitterTest__DOT__dut__DOT__shift_register),10);
    bufp->fullCData(oldp+6,(vlSelf->transmitterTest__DOT__dut__DOT__counter),4);
    bufp->fullBit(oldp+7,(vlSelf->transmitterTest__DOT__clk));
    bufp->fullBit(oldp+8,(vlSelf->transmitterTest__DOT__rstn));
    bufp->fullCData(oldp+9,(vlSelf->transmitterTest__DOT__bus),8);
    bufp->fullCData(oldp+10,(vlSelf->transmitterTest__DOT__dut__DOT__cur_state),3);
    bufp->fullCData(oldp+11,(vlSelf->transmitterTest__DOT__dut__DOT__nxt_state),3);
}
