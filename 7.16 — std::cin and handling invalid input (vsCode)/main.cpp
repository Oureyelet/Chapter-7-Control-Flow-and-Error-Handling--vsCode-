#include <iostream>
#include <string>// For std::string and std::getline
#include <iomanip> // For std::ws
#include "calculator.h"
#include "Error case 1.h"
#include "Error case 2.h"
#include "Error case 3.h"
#include <limits> // for std::numeric_limits
#include <cstdint> // for Error case 4
/*
In this lesson, we’ll take a look specifically at ways the user can enter invalid text input 
via std::cin, and show you some different ways to handle those cases. We will start from clear
calculator program then we gonna put some solution for fix it.
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

    /*--------------------------------------------------------------
        Error case 2: Extraction succeeds but with extraneous input
    --------------------------------------------------------------*/
    double x_2{ getDouble2() };
    char operation_2{ getOperator2() };
    double y_2{ getDouble2() };

    printResult1(x_2, operation_2, y_2);
    /*
    Now our program will work as expected, even if we enter “5*7” for the first input -- the 5 will 
    be extracted, and the rest of the characters will be removed from the input buffer. Since the 
    input buffer is now empty, the user will be properly asked for input the next time an extraction 
    operation is performed!
    */

    /*--------------------------------------------------------------
                    Error case 3: Extraction fails
    --------------------------------------------------------------*/
    double x_3{ getDouble3() };
    char operation_3{ getOperator3() };
    double y_3{ getDouble3() };

    printResult1(x_3, operation_3, y_3);

    /*--------------------------
            Conclusion
    --------------------------*//*
    As you write your programs, consider how users will misuse your program, especially around 
    text input. For each point of text input, consider:

    -Could extraction fail?
    -Could the user enter more input than expected?
    -Could the user enter meaningless input?
    -Could the user overflow an input?

    You can use if statements and boolean logic to test whether input is expected and meaningful.

    The following code will clear any extraneous input:

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    The following code will test for and fix failed extractions or overflow:

    if (std::cin.fail()) // has a previous extraction failed or overflowed?
    {
        // yep, so let's handle the failure
        std::cin.clear(); // put us back in 'normal' operation mode
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and remove the bad input
    }

    Finally, use loops to ask the user to re-enter input if the original input was invalid.
    */
    return 0;
}