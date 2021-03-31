#include <iostream>
#include "Question2.h"
#include "Question3.h"

int pow(int base, int exponent)
{
    int total { 1 };

    for (int count { 0 }; count < exponent; ++count)
    {
        total *= base;
    }
    return total;
}

int main()
{
    std::cout << "Hello World\n";

    /*
    The for statement looks pretty simple in abstract:

    for (init-statement; condition; end-expression)
        statement
    */

    /*
    The easiest way to initially understand how a for statement works is to convert it into an 
    equivalent while statement:

    { // note the block here
        init-statement; // used to define variables used in the loop
        while (condition)
        {
            statement; 
            end-expression; // used to modify the loop variable prior to reassessment of the condition
        }
    } // variables defined inside the loop go out of scope here
    */

    /*--------------------------------------------------------------------------
                                Evaluation of for statements
    --------------------------------------------------------------------------*/
    //Let’s take a look at a sample for loop and discuss how it works:

    for (int count { 1 }; count <= 10; ++count)
        std::cout << count << ' ';

    // /For the sake of example, let's convert the above for loop into an equivalent while loop:
    
    std::cout << '\n';
    
    {// the block here ensures block scope for count
        int count_2 { 1 };// our init-statement
        while (count_2 <= 10)// our condition
        {
            std::cout << count_2 << ' ';// our statement
            ++count_2;// our end-expression 
        }
    }
    std::cout << '\n';
    /*--------------------------------------------------------------------------
                                More for loop examples
    --------------------------------------------------------------------------*/
    //Here's an example of a function that uses a for loop to calculate integer exponents:

    std::cout << pow(2, 0) << '\n';

    //Although most for loops increment the loop variable by 1, we can decrement it as well:

    for (int count_3 { 10 }; count_3 >= 0; --count_3)
        std::cout << count_3 << ' ';

    std::cout << '\n';

    //Alternately, we can change the value of our loop variable by more than 1 with each iteration:

    for (int count_4 { 10 }; count_4 >= 0; count_4 -= 2)
        std::cout << count_4 << ' ';
    
    /*--------------------------------------------------------------------------
                                Omitted expressions
    --------------------------------------------------------------------------*/
    std::cout << '\n';
    /*
    It is possible to write for loops that omit any or all of the statements or expressions. 
    For example, in the following example, we'll omit the init-statement and end-expression, 
    leaving only the condition:
    */

    int count_6 { 0 };
    for ( ; count_6 < 10; )// no init-statement or end-expression
    {
        std::cout << count_6 << ' ';
        ++count_6;
    }

    /*--------------------------------------------------------------------------
                            For loops with multiple counters
    --------------------------------------------------------------------------*/
    std::cout << '\n';
    /*
    Although for loops typically iterate over only one variable, sometimes for loops need to 
    work with multiple variables. To assist with this, the programmer can define multiple variables 
    in the init-statement, and can make use of the comma operator to change the value of multiple 
    variables in the end-expression:
    */
    for (int x { 0 }, y { 9 }; x < 10; ++x, --y)
        std::cout << x << ' ' << y << '\n';
    /*
    This is about the only place in C++ (for statement) where defining multiple variables in the 
    same statement, and use of the comma operator is considered an acceptable practice.
    */

    /*--------------------------------------------------------------------------
                                 Nested for loops
    --------------------------------------------------------------------------*/
    /*
    Like other types of loops, for loops can be nested inside other loops. 
    In the following example, we're nesting a for loop inside another for loop:
    */
    for (char c{ 'a' }; c <= 'e'; ++c)// outer loop on letters
    {
        std::cout << c << ' ';// print our letter first

        for (int i{ 1 }; i < 6; ++i)// inner loop on all numbers
        {
            std::cout << i << ' ';
        }
        std::cout << '\n';
    }

    /*--------------------------------------------------------------------------
                                 Conclusion
    --------------------------------------------------------------------------*/
    /*
    For statements excel when you have a counter variable. If you do not have a counter, 
    a while statement is probably a better choice.
    */

    /*--------------------------------------------------------------------------
                                 Quiz time
    --------------------------------------------------------------------------*/

    /*
    Question #1

    Write a for loop that prints every even number from 0 to 20.
    */
    for (int number{ 2 }; number <= 20; number += 2)
        std::cout << number << ' ';
    
    std::cout << '\n';

    /*
    Question #2

    Write a function named sumTo() that takes an integer parameter named value, 
    and returns the sum of all the numbers from 1 to value.

    For example, sumTo(5) should return 15, which is 1 + 2 + 3 + 4 + 5.

    Hint: Use a non-loop variable to accumulate the sum as you iterate from 1 to the input value, 
    much like the pow() example above uses the total variable to accumulate the return 
    value each iteration.
    */

    std::cout << sumTo(5) << '\n';
    std::cout << sumTo2(5) << '\n';


    /*
    Question #3

    What's wrong with the following for loop?
	
    // Print all numbers from 9 to 0
    for (unsigned int count{ 9 }; count >= 0; --count)
    std::cout << count << ' ';
    */

    question3();

    return 0;
}