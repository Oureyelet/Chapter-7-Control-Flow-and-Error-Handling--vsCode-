#ifndef CAL_H1
#define CAL_H1

#include <iostream>

double getDouble1()
{
    std::cout << "Enter a double number: ";
    double x{};
    std::cin >> x;
    return x;
}

char getOperator1()
{
        while(true)// Loop until user enters a valid input
        {
            std::cout << "Enter one of the following: +, -, *, or /: ";
            char operation{};
            std::cin >> operation;

            // Check whether the user entered meaningful input
            switch(operation)
            {
                case '+':
                case '-':
                case '*':
                case '/':
                    return operation;// return it to the caller
                default:// otherwise tell the user what went wrong
                    std::cout << "Oops, that input is invalid.  Please try again.\n";
            }
        }// and try again
}

void printResult1(double x, char operation, double y)
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

#endif // end CAL_H1

