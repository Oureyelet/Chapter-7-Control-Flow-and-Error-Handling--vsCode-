#ifndef CAL_H3
#define CAL_H3

#include <iostream>
#include <limits> // for std::numeric_limits

void ignoreLine3()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble3()
{
    while(true)// Loop until user enters a valid input
    {
        std::cout << "[Error case 3] Enter a double number: ";
        double x{};
        std::cin >> x;

        if( std::cin.fail() )// has a previous extraction failed?
        {
            // yep, so let's handle the failure
            std::cin.clear(); // put us back in 'normal' operation mode
            ignoreLine3(); // and remove the bad input
            std::cout << "[Error case 3] Oops, that input is invalid.  Please try again.\n";
        }
        else// else our extraction succeeded
        {
            ignoreLine3();
            return x;// so return the value we extracted
        }
    }
}

char getOperator3()
{
        while(true)// Loop until user enters a valid input
        {
            std::cout << "[Error case 3] Enter one of the following: +, -, *, or /: ";
            char operation{};
            std::cin >> operation;
            ignoreLine3();

            // Check whether the user entered meaningful input
            switch(operation)
            {
                case '+':
                case '-':
                case '*':
                case '/':
                    return operation;// return it to the caller
                default:// otherwise tell the user what went wrong
                    std::cout << "[Error case 3] Oops, that input is invalid.  Please try again.\n";
            }
        }// and try again
}

void printResult3(double x, char operation, double y)
{
    switch (operation)
    {
    case '+':
        std::cout << x << " + " << y << " is " << x + y << '\n';
        break;
    case '-':
        std::cout << x << " - " << y << " is " << x - y << '\n';
        break;
    case '*':
        std::cout << x << " * " << y << " is " << x * y << '\n';
        break;
    case '/':
        std::cout << x << " / " << y << " is " << x / y << '\n';
        break;
    }
}

#endif // end CAL_H3