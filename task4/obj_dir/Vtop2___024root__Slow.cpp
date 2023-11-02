// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop2.h for the primary calling header

#include "verilated.h"

#include "Vtop2__Syms.h"
#include "Vtop2___024root.h"

void Vtop2___024root___ctor_var_reset(Vtop2___024root* vlSelf);

Vtop2___024root::Vtop2___024root(Vtop2__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtop2___024root___ctor_var_reset(this);
}

void Vtop2___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtop2___024root::~Vtop2___024root() {
}
