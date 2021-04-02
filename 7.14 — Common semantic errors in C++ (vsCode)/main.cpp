/*
In this lesson, we’ll cover a bunch of the most common types of semantic errors that 
occur in C++ (most of which have to do with flow control in some way).
*/
#include <iostream>

int main()
{
    std::cout << "Hello World\n";

    /*----------------------------------------------
                Conditional logic errors
    ----------------------------------------------*/
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    // oops, we used operator> instead of operator<
    for(int count { 0 }; count > x; ++count)
    {
        std::cout << count << ' ';
    }
        std::cout << '\n';

    /*----------------------------------------------
                    Integer division
    ----------------------------------------------*/
    int x_1 { 5 };
    int x_2 { 3 };
    std::cout << x_1 << " divided by " << x_2 << " is: " << x_1 / x_2 << '\n'; //you shold use: static_cast<float>(x_1) / x_2
    

    return 0;
}