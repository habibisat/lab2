// Verilator generated module include.
#include "Valu.h"

// C++ libraries.
#include "stdlib.h"
#include <iostream>

// Verilator libraries.
#include "verilated_vcd_c.h"

struct input_package 
{
    // 8-bit alu inputs
    unsigned int X : 8 = 0;
    unsigned int Y : 8 = 0;
};

struct output_package 
{
    // 9-bit alu output
    unsigned int Result : 9 = 0;
};

int main() 
{
    srand(1234);
    int time = 0;
    int i = 0;
    int failed = 0;

    Valu* design_under_test = new Valu;
    Verilated::traceEverOn(true);
    VerilatedVcdC* trace = new VerilatedVcdC;
    design_under_test->trace(trace, 99);
    trace->open("alu_wave.vcd");

    input_package inp;
    output_package out;

    while(i < 30)
    {
        // X, Y and OPcode generation
        inp.X = rand() % 100;
        inp.Y = rand() % 100;
        int op = rand()%2;

        // Result generation according to the OPcode
        if(!op) {
            out.Result = inp.X + inp.Y;
        } else {
            out.Result = inp.X - inp.Y;
        }

        // Dump test data into verilog file
        design_under_test->X = inp.X;
        design_under_test->Y = inp.Y;
        design_under_test->op = op;
        

        design_under_test->eval();
        trace->dump(time);        
        ++time;

        if(design_under_test->Result != out.Result) 
        {
            failed++;
            std::cout << "\nError occured: OPcode value = " << op << "; ";
            std::cout << " X = " << (uint16_t)inp.X << "; ";
            std::cout << " Y = " << (uint16_t)inp.Y << "; ";
            std::cout << "Verilog output = " << (uint16_t)design_under_test->Result << "; ";
            std::cout << "Testbench output = " << (uint16_t)out.Result << std::endl;
        }

        // incrementing the iterator
        i++;
    }

    trace->close();

    // how many tests have failed:
    std::cout << "\nFailed amount of tests = " << failed << std::endl;
    // how many tests have succeeded:
    std::cout << "\nSuccessful amount of tests = " << i - failed << std::endl;

    return 0;
}