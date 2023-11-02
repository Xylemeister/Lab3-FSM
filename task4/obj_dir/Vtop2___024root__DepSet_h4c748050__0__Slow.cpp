// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop2.h for the primary calling header

#include "verilated.h"

#include "Vtop2___024root.h"

VL_ATTR_COLD void Vtop2___024root___initial__TOP__0(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->top2__DOT__myg__DOT__mydelay__DOT__count = 0U;
}

VL_ATTR_COLD void Vtop2___024root___settle__TOP__0(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((1U == vlSelf->top2__DOT__myfsm__DOT__current) 
               | (2U == vlSelf->top2__DOT__myfsm__DOT__current)) 
              | (3U == vlSelf->top2__DOT__myfsm__DOT__current)) 
             | (4U == vlSelf->top2__DOT__myfsm__DOT__current)) 
            | (5U == vlSelf->top2__DOT__myfsm__DOT__current)) 
           | (6U == vlSelf->top2__DOT__myfsm__DOT__current)) 
          | (7U == vlSelf->top2__DOT__myfsm__DOT__current)) 
         | (8U == vlSelf->top2__DOT__myfsm__DOT__current))) {
        if ((1U == vlSelf->top2__DOT__myfsm__DOT__current)) {
            vlSelf->top2__DOT__myfsm__DOT__next = 2U;
            vlSelf->data_out = 0U;
        } else if ((2U == vlSelf->top2__DOT__myfsm__DOT__current)) {
            vlSelf->top2__DOT__myfsm__DOT__next = 3U;
            vlSelf->data_out = 1U;
        } else if ((3U == vlSelf->top2__DOT__myfsm__DOT__current)) {
            vlSelf->top2__DOT__myfsm__DOT__next = 4U;
            vlSelf->data_out = 3U;
        } else if ((4U == vlSelf->top2__DOT__myfsm__DOT__current)) {
            vlSelf->top2__DOT__myfsm__DOT__next = 5U;
            vlSelf->data_out = 7U;
        } else if ((5U == vlSelf->top2__DOT__myfsm__DOT__current)) {
            vlSelf->top2__DOT__myfsm__DOT__next = 6U;
            vlSelf->data_out = 0xfU;
        } else if ((6U == vlSelf->top2__DOT__myfsm__DOT__current)) {
            vlSelf->top2__DOT__myfsm__DOT__next = 7U;
            vlSelf->data_out = 0x1fU;
        } else if ((7U == vlSelf->top2__DOT__myfsm__DOT__current)) {
            vlSelf->top2__DOT__myfsm__DOT__next = 8U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->top2__DOT__myfsm__DOT__next = 9U;
            vlSelf->data_out = 0x7fU;
        }
    } else if ((9U == vlSelf->top2__DOT__myfsm__DOT__current)) {
        vlSelf->top2__DOT__myfsm__DOT__next = 0U;
        vlSelf->data_out = 0xffU;
    }
    vlSelf->cmd_delay = (9U == vlSelf->top2__DOT__myfsm__DOT__current);
    vlSelf->cmd_seq = (9U != vlSelf->top2__DOT__myfsm__DOT__current);
    vlSelf->top2__DOT__myg__DOT__mydelay__DOT__next_state 
        = ((0U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
            ? ((IData)(vlSelf->cmd_delay) ? 1U : vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
            : ((1U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
                ? ((0U == (IData)(vlSelf->top2__DOT__myg__DOT__mydelay__DOT__count))
                    ? 2U : vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
                : ((2U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
                    ? ((IData)(vlSelf->cmd_delay) ? 3U
                        : 0U) : ((3U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state)
                                  ? ((IData)(vlSelf->cmd_delay)
                                      ? vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state
                                      : 0U) : 0U))));
}

VL_ATTR_COLD void Vtop2___024root___eval_initial(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vtop2___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop2___024root___eval_settle(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___eval_settle\n"); );
    // Body
    Vtop2___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop2___024root___final(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___final\n"); );
}

VL_ATTR_COLD void Vtop2___024root___ctor_var_reset(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(1);
    vlSelf->cmd_seq = VL_RAND_RESET_I(1);
    vlSelf->cmd_delay = VL_RAND_RESET_I(1);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->top2__DOT__myg__DOT__data1 = VL_RAND_RESET_I(1);
    vlSelf->top2__DOT__myg__DOT__mylf__DOT__sreg = VL_RAND_RESET_I(7);
    vlSelf->top2__DOT__myg__DOT__mydelay__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state = 0;
    vlSelf->top2__DOT__myg__DOT__mydelay__DOT__next_state = 0;
    vlSelf->top2__DOT__myg__DOT__mytick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->top2__DOT__myfsm__DOT__current = 0;
    vlSelf->top2__DOT__myfsm__DOT__next = 0;
    vlSelf->__Vdly__top2__DOT__myg__DOT__mylf__DOT__sreg = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
