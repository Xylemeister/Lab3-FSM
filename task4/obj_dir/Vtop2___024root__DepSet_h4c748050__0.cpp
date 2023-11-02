// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop2.h for the primary calling header

#include "verilated.h"

#include "Vtop2___024root.h"

VL_INLINE_OPT void Vtop2___024root___sequent__TOP__0(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__top2__DOT__myg__DOT__mylf__DOT__sreg 
        = vlSelf->top2__DOT__myg__DOT__mylf__DOT__sreg;
    vlSelf->__Vdly__top2__DOT__myg__DOT__mylf__DOT__sreg 
        = ((IData)(vlSelf->rst) ? 1U : ((0x7eU & ((IData)(vlSelf->top2__DOT__myg__DOT__mylf__DOT__sreg) 
                                                  << 1U)) 
                                        | (1U & VL_REDXOR_8(
                                                            (0x44U 
                                                             & (IData)(vlSelf->top2__DOT__myg__DOT__mylf__DOT__sreg))))));
}

VL_INLINE_OPT void Vtop2___024root___sequent__TOP__1(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___sequent__TOP__1\n"); );
    // Init
    SData/*15:0*/ __Vdly__top2__DOT__myg__DOT__mytick__DOT__count;
    // Body
    __Vdly__top2__DOT__myg__DOT__mytick__DOT__count 
        = vlSelf->top2__DOT__myg__DOT__mytick__DOT__count;
    vlSelf->top2__DOT__myg__DOT__mydelay__DOT__count 
        = (0x7fU & ((((IData)(vlSelf->rst) | (IData)(vlSelf->cmd_delay)) 
                     | (0U == (IData)(vlSelf->top2__DOT__myg__DOT__mydelay__DOT__count)))
                     ? ((IData)(vlSelf->top2__DOT__myg__DOT__mylf__DOT__sreg) 
                        - (IData)(1U)) : ((IData)(vlSelf->top2__DOT__myg__DOT__mydelay__DOT__count) 
                                          - (IData)(1U))));
    if (vlSelf->rst) {
        vlSelf->top2__DOT__myfsm__DOT__current = 1U;
    }
    if (vlSelf->trigger) {
        if (((IData)(vlSelf->cmd_seq) ? (IData)(vlSelf->top2__DOT__myg__DOT__data1)
              : ((0U != vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state) 
                 & ((1U != vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state) 
                    & (2U == vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state))))) {
            vlSelf->top2__DOT__myfsm__DOT__current 
                = vlSelf->top2__DOT__myfsm__DOT__next;
        }
    }
    if (vlSelf->rst) {
        vlSelf->top2__DOT__myg__DOT__data1 = 0U;
        __Vdly__top2__DOT__myg__DOT__mytick__DOT__count 
            = vlSelf->N;
        vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state = 0U;
    } else {
        if (vlSelf->cmd_seq) {
            if ((0U == (IData)(vlSelf->top2__DOT__myg__DOT__mytick__DOT__count))) {
                vlSelf->top2__DOT__myg__DOT__data1 = 1U;
                __Vdly__top2__DOT__myg__DOT__mytick__DOT__count 
                    = vlSelf->N;
            } else {
                __Vdly__top2__DOT__myg__DOT__mytick__DOT__count 
                    = (0xffffU & ((IData)(vlSelf->top2__DOT__myg__DOT__mytick__DOT__count) 
                                  - (IData)(1U)));
                vlSelf->top2__DOT__myg__DOT__data1 = 0U;
            }
        }
        vlSelf->top2__DOT__myg__DOT__mydelay__DOT__current_state 
            = vlSelf->top2__DOT__myg__DOT__mydelay__DOT__next_state;
    }
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
    vlSelf->top2__DOT__myg__DOT__mytick__DOT__count 
        = __Vdly__top2__DOT__myg__DOT__mytick__DOT__count;
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

VL_INLINE_OPT void Vtop2___024root___sequent__TOP__2(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->top2__DOT__myg__DOT__mylf__DOT__sreg = vlSelf->__Vdly__top2__DOT__myg__DOT__mylf__DOT__sreg;
}

void Vtop2___024root___eval(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop2___024root___sequent__TOP__0(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop2___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vtop2___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vtop2___024root___eval_debug_assertions(Vtop2___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop2___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
    if (VL_UNLIKELY((vlSelf->N & 0xfeU))) {
        Verilated::overWidthError("N");}
}
#endif  // VL_DEBUG
