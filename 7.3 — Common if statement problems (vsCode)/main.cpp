#include <iostream>

int main()
{
    std::cout << "Hello World" << '\n';

    /*---------------------------------------------------
     Nested if statements and the dangling else problem
    ---------------------------------------------------*/

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    if(x >= 10)
    {
        if(x <= 20)
        {
            std::cout << x << " is between 10 and 20" << '\n';
        }
        else// attached to inner if statement
        {
            std::cout << x << " is greater than 20" << '\n';
        }
    }
    else// attached to outer if statement
    {
        std::cout << x << " is less that 10" << '\n';
    }

    /*---------------------------------------------------
                Flattening nested if statements
    ---------------------------------------------------*/
    //For example, the above example can be flattened as follows:

    std::cout << "Enter a number: ";
    int y{};
    std::cin >> y;

    if(y < 10)
        std::cout << y << " is less that 10" << '\n';
    else if(y <= 20)
        std::cout << y << " is between 10 and 20" << '\n';
    else
        std::cout << y << " is greater than 20" << '\n';
        
    /*
    Here’s another example that uses logical operators to 
    check multiple conditions within a single if statement:
    */

    std::cout << "Enter an integer: ";
    int x1{};
    std::cin >> x1;

    std::cout << "Enter another integer: ";
    int y2{};
    std::cin >> y2;
    

    if(x1 > 0 && y2 > 0)
        std::cout << "Both numbers are positive" << '\n';
    else if(x1 > 0 || y2 > 0)
        std::cout << "One of the numbers is positive" << '\n';
    else
        std::cout << "Neither number is positive" << '\n';

    /*---------------------------------------------------
         Operator== vs Operator= inside the conditional
    ---------------------------------------------------*/
    /*
    Inside your conditional, you should be using operator== when testing for equality, 
    not operator= (which is assignment).
    */


    return 0;
}