// Verilator generated module include.
#include "VTen2OneMux.h"

// C++ libraries.
#include "stdlib.h"
#include <iostream>

// Verilator libraries.
#include "verilated_vcd_c.h"

struct input_package 
{
    // 8-bit input channels
    unsigned int D0 : 8;
    unsigned int D1 : 8;
    unsigned int D2 : 8;
    unsigned int D3 : 8;
    unsigned int D4 : 8;
    unsigned int D5 : 8;
    unsigned int D6 : 8;
    unsigned int D7 : 8;
    unsigned int D8 : 8;
    unsigned int D9 : 8;
    
    // 4 control switches
    unsigned int select : 4;
};

struct output_package {
    // 8-bit output channel
    unsigned int Output : 8;
};


int main() 
{
    srand(1234);
    int time = 0;
    int i = 0;
    int failed = 0;

    input_package inp;
    output_package out;

    VTen2OneMux* design_under_test = new VTen2OneMux;
    Verilated::traceEverOn(true);
    VerilatedVcdC* trace = new VerilatedVcdC;
    design_under_test->trace(trace, 99);
    trace->open("Ten2OneMux_wave.vcd");
    
    while(i < 100)
    {
        // generate input package for 8-bit inputs
        inp.D0 = rand() % 256;
        inp.D1 = rand() % 256;
        inp.D2 = rand() % 256;
        inp.D3 = rand() % 256;
        inp.D4 = rand() % 256;
        inp.D5 = rand() % 256;
        inp.D6 = rand() % 256;
        inp.D7 = rand() % 256;
        inp.D8 = rand() % 256;
        inp.D9 = rand() % 256;
        
        //randomize a value for selector from 0 to 9:
        inp.select = rand() % 10;
        
        //select the channel to broadcast according to the selector value
        switch (inp.select){
            case 0:
                out.Output = inp.D0;
                break;
            case 1:
                out.Output = inp.D1;
                break;
            case 2:
                out.Output = inp.D2;
                break;
            case 3:
                out.Output = inp.D3;
                break;
            case 4:
                out.Output = inp.D4;
                break;
            case 5:
                out.Output = inp.D5;
                break;
            case 6:
                out.Output = inp.D6;
                break;
            case 7:
                out.Output = inp.D7;
                break;
            case 8:
                out.Output = inp.D8;
                break;
            case 9:
                out.Output = inp.D9;
                break;
        }

        //feed data
        design_under_test->D0 = inp.D0;
        design_under_test->D1 = inp.D1;
        design_under_test->D2 = inp.D2;
        design_under_test->D3 = inp.D3;
        design_under_test->D4 = inp.D4;
        design_under_test->D5 = inp.D5;
        design_under_test->D6 = inp.D6;
        design_under_test->D7 = inp.D7;
        design_under_test->D8 = inp.D8;
        design_under_test->D9 = inp.D9;
        design_under_test->select = inp.select;
        
        design_under_test->eval();
        trace->dump(time);
        ++time;

        // Error detection in case testbench output doesn't correspond to that of verilog
        if(design_under_test->Output != out.Output) {
            failed++;
            std::cout << "\nError occured: \nSelector value = " << inp.select << "; ";
            std::cout << "inp.D0 = " << (uint16_t)inp.D0 << "; ";
            std::cout << "inp.D1 = " << (uint16_t)inp.D1 << "; ";
            std::cout << "inp.D2 = " << (uint16_t)inp.D2 << "; ";
            std::cout << "inp.D3 = " << (uint16_t)inp.D3 << "; ";
            std::cout << "inp.D4 = " << (uint16_t)inp.D4 << "; ";
            std::cout << "inp.D5 = " << (uint16_t)inp.D5 << "; ";
            std::cout << "inp.D6 = " << (uint16_t)inp.D6 << "; ";
            std::cout << "inp.D7 = " << (uint16_t)inp.D7 << "; ";
            std::cout << "inp.D8 = " << (uint16_t)inp.D8 << "; ";
            std::cout << "inp.D9 = " << (uint16_t)inp.D9 << "; ";
            std::cout << "Verilog output = " << (uint16_t)design_under_test->Output << "; ";
            std::cout << "Testbench output = " << (uint16_t)out.Output << std::endl;
        }

        //incrementing the iterator
        i++;
    }

    trace->close();

    // how many tests have failed:
    std::cout << "\nFailed amount of tests = " << failed << std::endl;
    // how many tests have succeeded:
    std::cout << "\nSuccessful amount of tests = " << i - failed << std::endl;

    return 0;
    
}