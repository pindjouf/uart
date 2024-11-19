// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VreceiverTest__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VreceiverTest::VreceiverTest(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VreceiverTest__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VreceiverTest::VreceiverTest(const char* _vcname__)
    : VreceiverTest(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VreceiverTest::~VreceiverTest() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VreceiverTest___024root___eval_debug_assertions(VreceiverTest___024root* vlSelf);
#endif  // VL_DEBUG
void VreceiverTest___024root___eval_static(VreceiverTest___024root* vlSelf);
void VreceiverTest___024root___eval_initial(VreceiverTest___024root* vlSelf);
void VreceiverTest___024root___eval_settle(VreceiverTest___024root* vlSelf);
void VreceiverTest___024root___eval(VreceiverTest___024root* vlSelf);

void VreceiverTest::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VreceiverTest::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VreceiverTest___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VreceiverTest___024root___eval_static(&(vlSymsp->TOP));
        VreceiverTest___024root___eval_initial(&(vlSymsp->TOP));
        VreceiverTest___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VreceiverTest___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void VreceiverTest::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step VreceiverTest::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool VreceiverTest::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t VreceiverTest::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* VreceiverTest::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VreceiverTest___024root___eval_final(VreceiverTest___024root* vlSelf);

VL_ATTR_COLD void VreceiverTest::final() {
    VreceiverTest___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VreceiverTest::hierName() const { return vlSymsp->name(); }
const char* VreceiverTest::modelName() const { return "VreceiverTest"; }
unsigned VreceiverTest::threads() const { return 1; }
void VreceiverTest::prepareClone() const { contextp()->prepareClone(); }
void VreceiverTest::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VreceiverTest::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VreceiverTest___024root__trace_decl_types(VerilatedVcd* tracep);

void VreceiverTest___024root__trace_init_top(VreceiverTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VreceiverTest___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VreceiverTest___024root*>(voidSelf);
    VreceiverTest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VreceiverTest___024root__trace_decl_types(tracep);
    VreceiverTest___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VreceiverTest___024root__trace_register(VreceiverTest___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VreceiverTest::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VreceiverTest::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VreceiverTest___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
