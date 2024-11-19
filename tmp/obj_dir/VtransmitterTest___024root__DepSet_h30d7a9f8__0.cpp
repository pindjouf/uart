// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtransmitterTest.h for the primary calling header

#include "VtransmitterTest__pch.h"
#include "VtransmitterTest__Syms.h"
#include "VtransmitterTest___024root.h"

VL_INLINE_OPT VlCoroutine VtransmitterTest___024root___eval_initial__TOP__Vtiming__0(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__0__data;
    __Vtask_transmitterTest__DOT__send_byte__0__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__1__data;
    __Vtask_transmitterTest__DOT__send_byte__1__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__2__data;
    __Vtask_transmitterTest__DOT__send_byte__2__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__3__data;
    __Vtask_transmitterTest__DOT__send_byte__3__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__4__data;
    __Vtask_transmitterTest__DOT__send_byte__4__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__5__data;
    __Vtask_transmitterTest__DOT__send_byte__5__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__6__data;
    __Vtask_transmitterTest__DOT__send_byte__6__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__7__data;
    __Vtask_transmitterTest__DOT__send_byte__7__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__8__data;
    __Vtask_transmitterTest__DOT__send_byte__8__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__9__data;
    __Vtask_transmitterTest__DOT__send_byte__9__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__10__data;
    __Vtask_transmitterTest__DOT__send_byte__10__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__11__data;
    __Vtask_transmitterTest__DOT__send_byte__11__data = 0;
    CData/*7:0*/ __Vtask_transmitterTest__DOT__send_byte__12__data;
    __Vtask_transmitterTest__DOT__send_byte__12__data = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x44756d70U;
    __Vtemp_1[2U] = 0x7478U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelf->transmitterTest__DOT__clk = 0U;
    vlSelf->transmitterTest__DOT__rstn = 0U;
    vlSelf->transmitterTest__DOT__bus = 0U;
    co_await vlSelf->__VdlySched.delay(0x108bd70ULL, 
                                       nullptr, "transmitterTest.v", 
                                       39);
    vlSelf->transmitterTest__DOT__rstn = 1U;
    __Vtask_transmitterTest__DOT__send_byte__0__data = 0x48U;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__0__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__0__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__1__data = 0x65U;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__1__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__1__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__2__data = 0x6cU;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__2__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__2__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__3__data = 0x6cU;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__3__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__3__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__4__data = 0x6fU;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__4__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__4__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__5__data = 0x2cU;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__5__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__5__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__6__data = 0x20U;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__6__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__6__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__7__data = 0x57U;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__7__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__7__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__8__data = 0x6fU;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__8__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__8__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__9__data = 0x72U;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__9__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__9__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__10__data = 0x6cU;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__10__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__10__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__11__data = 0x64U;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__11__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__11__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    __Vtask_transmitterTest__DOT__send_byte__12__data = 0x21U;
    vlSelf->transmitterTest__DOT__bus = __Vtask_transmitterTest__DOT__send_byte__12__data;
    co_await vlSelf->__VdlySched.delay(0x14b27640ULL, 
                                       nullptr, "transmitterTest.v", 
                                       23);
    VL_WRITEF_NX("Transferred byte: 0x%x, Bus value: %b\n",0,
                 8,__Vtask_transmitterTest__DOT__send_byte__12__data,
                 8,(IData)(vlSelf->transmitterTest__DOT__bus));
    co_await vlSelf->__VdlySched.delay(0x1dcd6500ULL, 
                                       nullptr, "transmitterTest.v", 
                                       56);
    VL_FINISH_MT("transmitterTest.v", 57, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtransmitterTest___024root___dump_triggers__act(VtransmitterTest___024root* vlSelf);
#endif  // VL_DEBUG

void VtransmitterTest___024root___eval_triggers__act(VtransmitterTest___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtransmitterTest___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->transmitterTest__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__transmitterTest__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->transmitterTest__DOT__baud) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__transmitterTest__DOT__baud__0))));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__transmitterTest__DOT__clk__0 
        = vlSelf->transmitterTest__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__transmitterTest__DOT__baud__0 
        = vlSelf->transmitterTest__DOT__baud;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VtransmitterTest___024root___dump_triggers__act(vlSelf);
    }
#endif
}
