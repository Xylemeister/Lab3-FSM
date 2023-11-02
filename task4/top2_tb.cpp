#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop2.h"

#include "vbuddy.cpp" // include vbuddy code
#define MAX_SIM_CYC 100000

int main(int argc, char **argv, char **env)
{
    int simcyc; // simulation clock count
    int tick;   // each clk cycle has two ticks for two edges

    Verilated::commandArgs(argc, argv);
    Vtop2 *top = new Vtop2;
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("top2.vcd");
    if (vbdOpen() != 1)
        return (-1);
    vbdHeader("L3T4");
    vbdSetMode(1);

    top->clk = 1;
    top->rst = 0;
    top->trigger = vbdFlag();
    top->N = 60;

    for (simcyc = 0; simcyc < MAX_SIM_CYC; simcyc++)
    {
        for (tick = 0; tick < 2; tick++)
        {
            tfp->dump(2 * simcyc + tick);
            top->clk = !top->clk;
            top->eval();
        }

        top->rst= (simcyc < 2);
        top->N = 60;
        top->trigger = vbdFlag();
        vbdBar(top->data_out & 0xFF);
        if (Verilated::gotFinish() || (vbdGetkey() == 'q'))
            exit(0);
    }
    vbdClose(); // ++++
    tfp->close();
    exit(0);
}
