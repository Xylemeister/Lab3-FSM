// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop2__Syms.h"


void Vtop2___024root__trace_chg_sub_0(Vtop2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop2___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root__trace_chg_top_0\n"); );
    // Init
    Vtop2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop2___024root*>(voidSelf);
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop2___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop2___024root__trace_chg_sub_0(Vtop2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top2__DOT__myfsm__DOT__current),32);
        bufp->chgIData(oldp+1,(vlSelf->top2__DOT__myfsm__DOT__next),32);
        bufp->chgBit(oldp+2,(vlSelf->top2__DOT__myg__DOT__data1));
        bufp->chgBit(oldp+3,(((0U != vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state) 
                              & ((1U != vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state) 
                                 & (2U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)))));
        bufp->chgCData(oldp+4,(vlSelf->top2__DOT__myg__DOT__mydelay__DOT__count),7);
        bufp->chgIData(oldp+5,(vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state),32);
        bufp->chgSData(oldp+6,(vlSelf->top2__DOT__myg__DOT__mytick__DOT__count),16);
    }
    bufp->chgBit(oldp+7,(vlSelf->clk));
    bufp->chgBit(oldp+8,(vlSelf->rst));
    bufp->chgBit(oldp+9,(vlSelf->trigger));
    bufp->chgBit(oldp+10,(vlSelf->N));
    bufp->chgBit(oldp+11,(vlSelf->cmd_seq));
    bufp->chgBit(oldp+12,(vlSelf->cmd_delay));
    bufp->chgCData(oldp+13,(vlSelf->data_out),8);
    bufp->chgBit(oldp+14,(((IData)(vlSelf->cmd_seq)
                            ? (IData)(vlSelf->top2__DOT__myg__DOT__data1)
                            : ((0U != vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state) 
                               & ((1U != vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state) 
                                  & (2U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state))))));
    bufp->chgCData(oldp+15,(vlSelf->top2__DOT__myg__DOT__mylf__DOT__sreg),7);
    bufp->chgIData(oldp+16,(((0U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
                              ? ((IData)(vlSelf->cmd_delay)
                                  ? 1U : vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
                              : ((1U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
                                  ? ((0U == (IData)(vlSelf->top2__DOT__myg__DOT__mydelay__DOT__count))
                                      ? 2U : vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
                                  : ((2U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
                                      ? ((IData)(vlSelf->cmd_delay)
                                          ? 3U : 0U)
                                      : ((3U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
                                          ? ((IData)(vlSelf->cmd_delay)
                                              ? vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state
                                              : 0U)
                                          : 0U))))),32);
    bufp->chgSData(oldp+17,(vlSelf->N),16);
}

void Vtop2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root__trace_cleanup\n"); );
    // Init
    Vtop2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop2___024root*>(voidSelf);
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
