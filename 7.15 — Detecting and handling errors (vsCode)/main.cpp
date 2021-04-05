/*
In this lesson, we’ll talk about error handling strategies (what to do when things go wrong) 
inside a function. In the subsequent lessons, we’ll talk about validating user input, and then 
introduce a useful tool to help document and validate assumptions.
*/
/*
Many new programmers write code and then only test the happy path: only the cases where there 
are no errors. But you should also be planning for and testing your sad paths, where things can 
and will go wrong.
*/
#include <iostream>

void printDivision(int x, int y)
{
    if(y != 0 && x != 0)
        std::cout << static_cast<double>(x) / y << '\n';
    else
        std::cerr << "Error: Could not divide by zero\n";
/*
When printing information for debugging purposes, use std::cerr instead of std::cout. 
One reason for this is that std::cout may be buffered, which means there may be a pause between 
when you ask std::cout to output information and when it actually does. If you output using std::cout 
and then your program crashes immediately afterward, std::cout may or may not have 
actually output yet. This can mislead you about where the issue is. On the other hand, 
std::cerr is unbuffered, which means anything you send to it will output immediately. 
This helps ensure all debug output appears as soon as possible (at the cost of some 
performance, which we usually don’t care about when debugging).
*/
}

double reciprocal(double x)
{
    if(x == 0.0)
    {
        return 0.0;
    }

    return 1.0 / x;    
}

int main()
{
    std::cout << "Hello World\n";

    /*-------------------------------------------------
                Handling errors in functions
    -------------------------------------------------*//*
    There are 4 general strategies that can be used:

    -Handle the error within the function
    -Pass the error back to the caller to deal with
    -Halt the program
    -Throw an exception
    */

    /*-------------------------------------------------
            Handling the error within the function
    -------------------------------------------------*/
    //In such case, printing an error message can be helpful:
    printDivision(110, 0);

    /*-------------------------------------------------
            Passing errors back to the caller
    -------------------------------------------------*/
    // The reciprocal of x is 1/x, returns 0.0 if x=0
    std::cout << reciprocal(5) << '\n';

    /*-------------------------------------------------
                    Fatal errors
    -------------------------------------------------*/
    /*
    If the error is so bad that the program can not continue to operate properly, 
    this is called a non-recoverable error (also called a fatal error). 
    */




    return 0;
}