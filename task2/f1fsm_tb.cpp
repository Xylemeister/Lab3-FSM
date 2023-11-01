#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vf1fsm.h"
#include "vbuddy.cpp"
#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env)
{
    int symcyc;
    int tick;

    Verilated::commandArgs(argc, argv);
    Vf1fsm *top = new Vf1fsm;
    Verilated::traceEverOn(true);
    VerilatedVcdC *tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("f1fsm.vcd");

    if (vbdOpen() != 1)
        return (-1);
    vbdHeader("Lab3 Task2");
    vbdSetMode(1);

    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    for (symcyc = 0; symcyc < MAX_SIM_CYC; symcyc++)
    {

        for (tick = 0; tick < 2; tick++)
        {
            tfp->dump(2 * symcyc + tick);
            top->clk = !top->clk;
            top->eval();
        }

        top -> rst = (symcyc < 2);
        top-> en = vbdFlag();
        vbdBar(top->out & 0xFF);
        if((Verilated:: gotFinish()) || (vbdGetkey()== 'q')) exit(0);

    }
    vbdClose();
    tfp->close();
    exit(0);
}