// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop2.h for the primary calling header

#ifndef VERILATED_VTOP2___024ROOT_H_
#define VERILATED_VTOP2___024ROOT_H_  // guard

#include "verilated.h"

class Vtop2__Syms;

class Vtop2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(trigger,0,0);
    VL_IN8(N,0,0);
    VL_OUT8(cmd_seq,0,0);
    VL_OUT8(cmd_delay,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ top2__DOT__myg__DOT__data1;
    CData/*6:0*/ top2__DOT__myg__DOT__mylf__DOT__sreg;
    CData/*6:0*/ top2__DOT__myg__DOT__mydelay__DOT__count;
    CData/*6:0*/ __Vdly__top2__DOT__myg__DOT__mylf__DOT__sreg;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;
    SData/*15:0*/ top2__DOT__myg__DOT__mytick__DOT__count;
    IData/*31:0*/ top2__DOT__myg__DOT__mydelay__DOT__current_state;
    IData/*31:0*/ top2__DOT__myg__DOT__mydelay__DOT__next_state;
    IData/*31:0*/ top2__DOT__myfsm__DOT__current;
    IData/*31:0*/ top2__DOT__myfsm__DOT__next;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop2___024root(Vtop2__Syms* symsp, const char* name);
    ~Vtop2___024root();
    VL_UNCOPYABLE(Vtop2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
