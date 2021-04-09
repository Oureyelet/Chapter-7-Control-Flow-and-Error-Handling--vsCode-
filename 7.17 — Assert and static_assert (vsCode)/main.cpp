#include <iostream>
#include <cassert> // for assert()
#include <cmath> // for std::sqrt

void printDivision(int x, int y)
{
    if( x != 0 && y !=0)
        std::cout << static_cast<double>(x) / y << '\n';
    else
        std::cout << "Error: Could not divide by zero!" << '\n';
}

/*-----------------------------------------------------
                            Assertions
-----------------------------------------------------*/
double calculateTimeUntilObjectHitsGround(double initialHight, double gravity)
{
    assert(gravity > 0.0);// The object won't reach the ground unless there is positive gravity.

    if(initialHight <= 0.0)
    {
        // The object is already on the ground. Or buried.
        return 0.0;
    }
    return std::sqrt((2.0 * initialHight) / gravity);
}

void printDivision2(int x, int y)
{
    assert(x != 0 && y !=0 && "Could not divide by zero!");
    std::cout << static_cast<double>(x) / y << '\n';
}

int main()
{
    std::cout << "Hello World in April 2021!" << '\n';

    printDivision(5, 110);

    /*-----------------------------------------------------
        Preconditions, invariants, and postconditions
    -----------------------------------------------------*/
    /*-----------------------------------------------------
                            Assertions
    -----------------------------------------------------*//*
    In C++, runtime assertions are implemented via the assert preprocessor macro, 
    which lives in the <cassert> header.
    */
    std::cout << "Took " << calculateTimeUntilObjectHitsGround(100.0, 9.8) << " second(s)\n";

    /*
    Although 'assert();' are most often used to validate function parameters, they can be used 
    anywhere you would like to validate that something is true.
    */
    //Here we have a 'printDivision()' function with using assert(); 

    printDivision2(10, 110);

    /*-----------------------------------------------------
        Making your assert statements more descriptive
    -----------------------------------------------------*//*
    Fortunately, there’s a little trick you can use to make your assert statements 
    more descriptive. Simply add a string literal joined by a logical AND:
    */
    //assert(found && "Car could not be found in database");

    /*
    Here’s why this works: A string literal always evaluates to Boolean true. 
    So if found is false, false && true is false. If found is true, true && true is true. 
    Thus, logical AND-ing a string literal doesn’t impact the evaluation of the assert.

    However, when the assert triggers, the string literal will be included in the assert [error] message.
    That gives you some additional context as to what went wrong.
    */

    /*-----------------------------------------------------
                            NDEBUG
    -----------------------------------------------------*//*
    Many developers prefer use the asserts only active in debug builds.
    C++ comes with a way to turn off asserts in production code. 
    If the macro NDEBUG is defined, the assert macro gets disabled.
    */

    /*-----------------------------------------------------
                Some assert limitations and warnings
    -----------------------------------------------------*/
    /*
    The assert itself can have a bug. If this happens, the assert will either report an 
    error where none exists, or fail to report a bug where one does exist.
    */
    /*-----------------------------------------------------
                    Asserts vs error handling
    -----------------------------------------------------*/
    //Use assertions to document cases that should be logically impossible.

    /*-----------------------------------------------------
                        static_assert
    -----------------------------------------------------*/
    /*
    C++11 added another type of assert called static_assert. A static_assert is an assertion 
    that is checked at compile-time rather than at runtime, with a failing static_assert 
    causing a compile error.

    A static_assert takes the following form:

        static_assert(condition, diagnostic_message)

    If the condition is not true, the diagnostic message is printed. 
    Here’s an example of using static_assert to ensure types have a certain size:
    */
    static_assert(sizeof(long) == 8, "long must be 8 bytes");
    static_assert(sizeof(int) == 4, "long must be 4 bytes");

    /*
    Because static_assert is evaluated by the compiler, the condition must be able to be 
    evaluated at compile time. Also, unlike normal assert (which is evaluated at runtime), 
    static_assert can be placed anywhere in the code file (even in global space).
    */

        



    return 0;
}