#ifndef CAL_H2
#define CAL_H2

#include <limits> // for std::numeric_limits

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

double getDouble2()
{
    std::cout << "[Error case 2] Enter a double number: ";
    double x{};
    std::cin >> x;
    ignoreLine();
    return x;
}

char getOperator2()
{
        while(true)// Loop until user enters a valid input
        {
            std::cout << "[Error case 2] Enter one of the following: +, -, *, or /: ";
            char operation{};
            std::cin >> operation;
            ignoreLine();

            // Check whether the user entered meaningful input
            switch(operation)
            {
                case '+':
                case '-':
                case '*':
                case '/':
                    return operation;// return it to the caller
                default:// otherwise tell the user what went wrong
                    std::cout << "[Error case 2] Oops, that input is invalid.  Please try again.\n";
            }
        }// and try again
}

void printResult2(double x, char operation, double y)
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

#endif // end CAL_H2