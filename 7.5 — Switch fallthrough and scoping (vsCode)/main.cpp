#include <iostream>
#include "first.h"

int main()
{
    std::cout << "Hello World\n";

    /*------------------------------------------------
                        Fallthrough
    ------------------------------------------------*/
    switch (2)
    {
        case 1:// Does not match
            std::cout << 1 << '\n';// Skipped
        case 2:// Match!
            std::cout << 2 << '\n';// Execution begins here
        case 3:
            std::cout << 3 << '\n';// This is also executed
        case 4:
            std::cout << 4 << '\n';// This is also executed
        default:
            std::cout << 5 << '\n';// This is also executed
    }
    /*
    This is probably not what we wanted! 
    When execution flows from a statement underneath a label into 
    statements underneath a subsequent label, this is called fallthrough. 
    */

    /*------------------------------------------------
                The [[fallthrough]] attribute
    ------------------------------------------------*/
    /*
    Commenting intentional fallthrough is a common convention to tell other 
    developers that fallthrough is intended.
    */
    switch (2)
    {
        case 1:
            std::cout << 1 << '\n';
            break;
        case 2:
            std::cout << 2 << '\n';
            [[fallthrough]];
            /*
            C++17 adds a new attribute called [[fallthrough]] that can be used 
            in conjunction with a null statement to indicate that fallthough is intentional
            */
        case 3:
            std::cout << 3 << '\n';
            break;
    }

    /*
    Best practice:

    Use the [[fallthrough]] attribute (along with a null statement) to indicate intentional fallthrough.
    */

    /*------------------------------------------------
                Sequential case labels
    ------------------------------------------------*/
    std::cout << "Enter the vowel: ";
    char x{};
    std::cin >> x;
    std::cout << std::boolalpha;
    std::cout << isVowel(x) << '\n';
    std::cout << woo::isVowel(x) << '\n';

    /*------------------------------------------------
                Switch case scoping
    ------------------------------------------------*/
    std::cout << "Choose a number for calculate: ";
    int y{};
    std::cin >> y;

    switch (2-y)
    {
        case 1:
            std::cout << "First line oon this scope" << '\n';
            std::cout << "Second line oon this scope" << '\n';
            std::cout << "Third line oon this scope" << '\n';
            break;
        default:
            std::cout << "This is first default case" << '\n';
            std::cout << "This is second default case" << '\n';
            std::cout << "This is third default case" << '\n';
            break;
    }
    /*
    With if statements, you can only have a single statement after the if-condition, 
    and that statement is considered to be implicitly inside a block.

    With switch statements (like in the above example ^ ), the statements after labels are all scoped to the the switch block. 
    No implicit blocks are created.
    */

    /*-------------------------------------------------------------------
        Variable declaration and initialization inside case statements
    -------------------------------------------------------------------*/
    /*
    You can declare (but not initialize) variables inside the switch, 
    both before and after the case labels:
    */
    
    switch (1)
    {
        int a;// okay: declaration is allowed before the case labels
      //int b{ 5 };// illegal: initialization is not allowed before the case labels

        case 1:
        {// note addition of block here
        /*
        If a case needs to define and/or initialize a new variable, best practice 
        is to do so inside a block underneath the case statement:
        */
            int y1{};// okay but bad practice: declaration is allowed within a case.
            //y1 = 4;// okay: assignment is allowed
            break;
        }
        case 2:
            //y1 = 5;// okay: y was declared above, so we can use it here too
            break;

        case 3:
            //int z{ 5 };// illegal: initialization is not allowed within a case
            break;
    }
    /*
    All statements inside the switch are part of the same scope.
    Initialization of variables is disallowed and will cause a compile error.
    */
    /*
    Rule:

    If defining variables used in a case statement, do so in a block inside the case 
    (or before the switch if appropriate)
    */

    /*-------------------------------------------------------------------
                                    Quiz time
    -------------------------------------------------------------------*/
    /*
    Write a function called calculate() that takes two integers and a char representing 
    one of the following mathematical operations: +, -, *, /, or % (modulus). 
    Use a switch statement to perform the appropriate mathematical operation on the integers, 
    and return the result. If an invalid operator is passed into the function, 
    the function should print an error. For the division operator, do an integer division.

    Hint: “operator” is a keyword, variables can’t be named “operator”.
    */

    std::cout << "Enter first integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
    char c{};
    std::cin >> c;
    
    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
    {
        std::cout << x << c << y << '=' << calculate(x, y, c) << '\n'; 
    }
    else
    {
        std::cout << "Error ! Invalid mathematical operator." << '\n';
    } 


    return 0;
}