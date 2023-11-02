// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop2.h"
#include "Vtop2__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop2::Vtop2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop2__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , trigger{vlSymsp->TOP.trigger}
    , N{vlSymsp->TOP.N}
    , cmd_seq{vlSymsp->TOP.cmd_seq}
    , cmd_delay{vlSymsp->TOP.cmd_delay}
    , data_out{vlSymsp->TOP.data_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop2::Vtop2(const char* _vcname__)
    : Vtop2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtop2::~Vtop2() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtop2___024root___eval_initial(Vtop2___024root* vlSelf);
void Vtop2___024root___eval_settle(Vtop2___024root* vlSelf);
void Vtop2___024root___eval(Vtop2___024root* vlSelf);
#ifdef VL_DEBUG
void Vtop2___024root___eval_debug_assertions(Vtop2___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop2___024root___final(Vtop2___024root* vlSelf);

static void _eval_initial_loop(Vtop2__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop2___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop2___024root___eval_settle(&(vlSymsp->TOP));
        Vtop2___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtop2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop2___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtop2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtop2::final() {
    Vtop2___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop2::hierName() const { return vlSymsp->name(); }
const char* Vtop2::modelName() const { return "Vtop2"; }
unsigned Vtop2::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtop2::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop2___024root__trace_init_top(Vtop2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop2___024root*>(voidSelf);
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop2___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop2___024root__trace_register(Vtop2___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop2::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop2___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
