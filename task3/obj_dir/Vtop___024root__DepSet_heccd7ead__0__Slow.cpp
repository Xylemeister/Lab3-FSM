// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    if (((((((((0U == vlSelf->top__DOT__myf1__DOT__current) 
               | (1U == vlSelf->top__DOT__myf1__DOT__current)) 
              | (2U == vlSelf->top__DOT__myf1__DOT__current)) 
             | (3U == vlSelf->top__DOT__myf1__DOT__current)) 
            | (4U == vlSelf->top__DOT__myf1__DOT__current)) 
           | (5U == vlSelf->top__DOT__myf1__DOT__current)) 
          | (6U == vlSelf->top__DOT__myf1__DOT__current)) 
         | (7U == vlSelf->top__DOT__myf1__DOT__current))) {
        if ((0U == vlSelf->top__DOT__myf1__DOT__current)) {
            vlSelf->top__DOT__myf1__DOT__next = 1U;
            vlSelf->out = 0U;
        } else if ((1U == vlSelf->top__DOT__myf1__DOT__current)) {
            vlSelf->top__DOT__myf1__DOT__next = 2U;
            vlSelf->out = 1U;
        } else if ((2U == vlSelf->top__DOT__myf1__DOT__current)) {
            vlSelf->top__DOT__myf1__DOT__next = 3U;
            vlSelf->out = 3U;
        } else if ((3U == vlSelf->top__DOT__myf1__DOT__current)) {
            vlSelf->top__DOT__myf1__DOT__next = 4U;
            vlSelf->out = 7U;
        } else if ((4U == vlSelf->top__DOT__myf1__DOT__current)) {
            vlSelf->top__DOT__myf1__DOT__next = 5U;
            vlSelf->out = 0xfU;
        } else if ((5U == vlSelf->top__DOT__myf1__DOT__current)) {
            vlSelf->top__DOT__myf1__DOT__next = 6U;
            vlSelf->out = 0x1fU;
        } else if ((6U == vlSelf->top__DOT__myf1__DOT__current)) {
            vlSelf->top__DOT__myf1__DOT__next = 7U;
            vlSelf->out = 0x3fU;
        } else {
            vlSelf->top__DOT__myf1__DOT__next = 8U;
            vlSelf->out = 0x7fU;
        }
    } else {
        vlSelf->top__DOT__myf1__DOT__next = 0U;
        if ((8U == vlSelf->top__DOT__myf1__DOT__current)) {
            vlSelf->out = 0xffU;
        }
    }
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__n1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mytick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__myf1__DOT__current = 0;
    vlSelf->top__DOT__myf1__DOT__next = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}