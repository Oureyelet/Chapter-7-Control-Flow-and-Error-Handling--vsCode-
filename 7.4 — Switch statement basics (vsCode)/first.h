#include <iostream>

#ifndef FISRT_H
#define FISRT_H

void printDigitName(int x)
{
    if(x == 1)
        std::cout << "One\n";
    else if(x == 2)
        std::cout << "Two\n";
    else if(x == 3)
        std::cout << "Three\n";
    else
        std::cout << "Unknown\n";
}

    /*
    C++ provides an alternative conditional statement called a switch statement 
    that is specialized for this purpose. Here is the same program as above using a switch:
    */
namespace wee//i created my own namespace 'wee' for possibility same name function 'printDigitName'
{
    void printDigitName(int x)
    {
        switch (x)
        {
            case 1:
                std::cout << "One\n";
                return;
            case 2:
                std::cout << "Two\n";
                return;
            case 3:
                std::cout << "Three\n";
                return;
            default:
                std::cout << "Unknown\n";
        }
    }
}

    /*----------------------------------------------------
                       Taking a break
    -----------------------------------------------------*/
    /*
    In the above examples, we used return statements to stop execution of the statements after our labels. 
    However, this also exits the entire function.

    A break statement (declared using the break keyword) tells the compiler that we are done 
    executing statements within the switch, and that execution should continue with 
    the statement after the end of the switch block. This allows us to exit a switch statement 
    without exiting the entire function.

    Here’s a slightly modified example rewritten using break instead of return:
    */

namespace voo
{
    void printDigitName(int x)
    {
        switch (x)// x evaluates to 3
        {
            case 1:
                std::cout << "One\n";
                break;
            case 2:
                std::cout << "Two\n";
                break;
            case 3:
                std::cout << "Three\n";// execution starts here
                break;// jump to the end of the switch block
            default:
                std::cout << "Unknown\n";
                break;
        }
        // execution continues here
        std::cout << "I am still here\n";
    }
}

#endif /// end FISRT_H