// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__top__DOT__mytick__DOT__count;
    // Body
    __Vdly__top__DOT__mytick__DOT__count = vlSelf->top__DOT__mytick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->top__DOT__myf1__DOT__current = 0U;
        vlSelf->top__DOT__n1 = 0U;
        __Vdly__top__DOT__mytick__DOT__count = vlSelf->N;
    } else {
        if (vlSelf->top__DOT__n1) {
            vlSelf->top__DOT__myf1__DOT__current = vlSelf->top__DOT__myf1__DOT__next;
        }
        if (vlSelf->en) {
            if ((0U == (IData)(vlSelf->top__DOT__mytick__DOT__count))) {
                vlSelf->top__DOT__n1 = 1U;
                __Vdly__top__DOT__mytick__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__top__DOT__mytick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->top__DOT__mytick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->top__DOT__n1 = 0U;
            }
        }
    }
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
    vlSelf->top__DOT__mytick__DOT__count = __Vdly__top__DOT__mytick__DOT__count;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
