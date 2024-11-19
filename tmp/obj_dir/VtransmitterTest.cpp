// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VtransmitterTest__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VtransmitterTest::VtransmitterTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VtransmitterTest__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VtransmitterTest::VtransmitterTest(const char* _vcname__)
    : VtransmitterTest(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VtransmitterTest::~VtransmitterTest() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VtransmitterTest___024root___eval_debug_assertions(VtransmitterTest___024root* vlSelf);
#endif  // VL_DEBUG
void VtransmitterTest___024root___eval_static(VtransmitterTest___024root* vlSelf);
void VtransmitterTest___024root___eval_initial(VtransmitterTest___024root* vlSelf);
void VtransmitterTest___024root___eval_settle(VtransmitterTest___024root* vlSelf);
void VtransmitterTest___024root___eval(VtransmitterTest___024root* vlSelf);

void VtransmitterTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VtransmitterTest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VtransmitterTest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VtransmitterTest___024root___eval_static(&(vlSymsp->TOP));
        VtransmitterTest___024root___eval_initial(&(vlSymsp->TOP));
        VtransmitterTest___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VtransmitterTest___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VtransmitterTest::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VtransmitterTest::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VtransmitterTest::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VtransmitterTest::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VtransmitterTest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VtransmitterTest___024root___eval_final(VtransmitterTest___024root* vlSelf);

VL_ATTR_COLD void VtransmitterTest::final() {
    VtransmitterTest___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VtransmitterTest::hierName() const { return vlSymsp->name(); }
const char* VtransmitterTest::modelName() const { return "VtransmitterTest"; }
unsigned VtransmitterTest::threads() const { return 1; }
void VtransmitterTest::prepareClone() const { contextp()->prepareClone(); }
void VtransmitterTest::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VtransmitterTest::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VtransmitterTest___024root__trace_decl_types(VerilatedVcd* tracep);

void VtransmitterTest___024root__trace_init_top(VtransmitterTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VtransmitterTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VtransmitterTest___024root*>(voidSelf);
    VtransmitterTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VtransmitterTest___024root__trace_decl_types(tracep);
    VtransmitterTest___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VtransmitterTest___024root__trace_register(VtransmitterTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VtransmitterTest::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VtransmitterTest::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VtransmitterTest___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
