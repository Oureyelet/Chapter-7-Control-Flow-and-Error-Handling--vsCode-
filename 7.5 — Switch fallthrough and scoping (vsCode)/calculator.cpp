#include <iostream>
#include "first.h"

int main()
{
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