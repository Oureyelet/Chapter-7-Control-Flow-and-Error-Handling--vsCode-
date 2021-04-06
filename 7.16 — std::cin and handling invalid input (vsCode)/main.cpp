#include <iostream>
#include <string>// For std::string and std::getline
#include <iomanip> // For std::ws
#include "calculator.h"
#include "Error case 1.h"
/*
In this lesson, we’ll take a look specifically at ways the user can enter invalid text input 
via std::cin, and show you some different ways to handle those cases.
*/

int main()
{
    std::cout << "I'll display everything you write on the screen: ";
    std::string c{};
    std::getline(std::cin >> std::ws, c);
    std::cout << c << '\n';

    /*-----------------------------------------------------------
                std::cin, buffers, and extraction
    -----------------------------------------------------------*/
    /*-----------------------------------------------------------
                        Validating input
    -----------------------------------------------------------*/
    /*-----------------------------------------------------------
                        A sample program
    -----------------------------------------------------------*/
    double x{ getDouble() };
    char operation{ getOperator() };
    double y{ getDouble() };

    printResult(x, operation, y);

    /*-----------------------------------------------------------
                    Types of invalid text input
    -----------------------------------------------------------*//*
    We can generally separate input text errors into four types:

    -Input extraction succeeds but the input is meaningless to the program 
    (e.g. entering ‘k’ as your mathematical operator).

    -Input extraction succeeds but the user enters additional input 
    (e.g. entering ‘*q hello’ as your mathematical operator).

    -Input extraction fails (e.g. trying to enter ‘q’ into a numeric input).

    -Input extraction succeeds but the user overflows a numeric value.

    Thus, to make our programs robust, whenever we ask the user for input, we ideally 
    should determine whether each of the above can possibly occur, and if so, write code to 
    handle those cases.

    Let’s dig into each of these cases, and how to handle them using std::cin.
    */

    /*--------------------------------------------------------------
        Error case 1: Extraction succeeds but input is meaningless
    --------------------------------------------------------------*/
    double x_1{ getDouble1() };
    char operation_1{ getOperator1() };
    double y_1{ getDouble1() };

    printResult1(x_1, operation_1, y_1);






    return 0;
}