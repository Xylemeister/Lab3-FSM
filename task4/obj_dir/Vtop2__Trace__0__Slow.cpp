// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop2__Syms.h"


VL_ATTR_COLD void Vtop2___024root__trace_init_sub__TOP__0(Vtop2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+10,"trigger", false,-1);
    tracep->declBit(c+11,"N", false,-1);
    tracep->declBit(c+12,"cmd_seq", false,-1);
    tracep->declBit(c+13,"cmd_delay", false,-1);
    tracep->declBus(c+14,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("top2 ");
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+10,"trigger", false,-1);
    tracep->declBit(c+11,"N", false,-1);
    tracep->declBit(c+12,"cmd_seq", false,-1);
    tracep->declBit(c+13,"cmd_delay", false,-1);
    tracep->declBus(c+14,"data_out", false,-1, 7,0);
    tracep->declBit(c+15,"en", false,-1);
    tracep->pushNamePrefix("myfsm ");
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+15,"en", false,-1);
    tracep->declBit(c+10,"trigger", false,-1);
    tracep->declBus(c+14,"out", false,-1, 7,0);
    tracep->declBit(c+12,"cmd_seq", false,-1);
    tracep->declBit(c+13,"cmd_delay", false,-1);
    tracep->declBus(c+1,"current", false,-1, 31,0);
    tracep->declBus(c+2,"next", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myg ");
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+12,"cmd_seq", false,-1);
    tracep->declBit(c+13,"cmd_delay", false,-1);
    tracep->declBit(c+11,"N", false,-1);
    tracep->declBit(c+15,"data_out", false,-1);
    tracep->declBit(c+3,"data1", false,-1);
    tracep->declBit(c+4,"data0", false,-1);
    tracep->declBus(c+16,"data2", false,-1, 6,0);
    tracep->pushNamePrefix("mydelay ");
    tracep->declBus(c+19,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+13,"trigger", false,-1);
    tracep->declBus(c+16,"n", false,-1, 6,0);
    tracep->declBit(c+4,"time_out", false,-1);
    tracep->declBus(c+5,"count", false,-1, 6,0);
    tracep->declBus(c+6,"current_state", false,-1, 31,0);
    tracep->declBus(c+17,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mylf ");
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBus(c+16,"data_out", false,-1, 7,1);
    tracep->declBus(c+16,"sreg", false,-1, 7,1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mymux ");
    tracep->declBit(c+3,"S1", false,-1);
    tracep->declBit(c+4,"S0", false,-1);
    tracep->declBit(c+12,"s", false,-1);
    tracep->declBit(c+15,"data", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mytick ");
    tracep->declBus(c+20,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+8,"clk", false,-1);
    tracep->declBit(c+9,"rst", false,-1);
    tracep->declBit(c+12,"en", false,-1);
    tracep->declBus(c+18,"N", false,-1, 15,0);
    tracep->declBit(c+3,"tick", false,-1);
    tracep->declBus(c+7,"count", false,-1, 15,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop2___024root__trace_init_top(Vtop2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root__trace_init_top\n"); );
    // Body
    Vtop2___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop2___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop2___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop2___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop2___024root__trace_register(Vtop2___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop2___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop2___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop2___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop2___024root__trace_full_sub_0(Vtop2___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop2___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root__trace_full_top_0\n"); );
    // Init
    Vtop2___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop2___024root*>(voidSelf);
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop2___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop2___024root__trace_full_sub_0(Vtop2___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top2__DOT__myfsm__DOT__current),32);
    bufp->fullIData(oldp+2,(vlSelf->top2__DOT__myfsm__DOT__next),32);
    bufp->fullBit(oldp+3,(vlSelf->top2__DOT__myg__DOT__data1));
    bufp->fullBit(oldp+4,(((0U != vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state) 
                           & ((1U != vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state) 
                              & (2U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)))));
    bufp->fullCData(oldp+5,(vlSelf->top2__DOT__myg__DOT__mydelay__DOT__count),7);
    bufp->fullIData(oldp+6,(vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state),32);
    bufp->fullSData(oldp+7,(vlSelf->top2__DOT__myg__DOT__mytick__DOT__count),16);
    bufp->fullBit(oldp+8,(vlSelf->clk));
    bufp->fullBit(oldp+9,(vlSelf->rst));
    bufp->fullBit(oldp+10,(vlSelf->trigger));
    bufp->fullBit(oldp+11,(vlSelf->N));
    bufp->fullBit(oldp+12,(vlSelf->cmd_seq));
    bufp->fullBit(oldp+13,(vlSelf->cmd_delay));
    bufp->fullCData(oldp+14,(vlSelf->data_out),8);
    bufp->fullBit(oldp+15,(((IData)(vlSelf->cmd_seq)
                             ? (IData)(vlSelf->top2__DOT__myg__DOT__data1)
                             : ((0U != vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state) 
                                & ((1U != vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state) 
                                   & (2U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state))))));
    bufp->fullCData(oldp+16,(vlSelf->top2__DOT__myg__DOT__mylf__DOT__sreg),7);
    bufp->fullIData(oldp+17,(((0U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
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
    bufp->fullSData(oldp+18,(vlSelf->N),16);
    bufp->fullIData(oldp+19,(7U),32);
    bufp->fullIData(oldp+20,(0x10U),32);
}
