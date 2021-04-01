#include <iostream>
#include "first.h"

int main()
{
    std::cout << "Hello World\n";

    /*-----------------------------------------
                       Break
    -----------------------------------------*/
    /*
    The break statement causes a while loop, do-while loop, for loop, or switch statement to end, 
    with execution continuing with the next statement after the loop or switch being broken out of.
    */

    /*-----------------------------------------
                Breaking a switch
    -----------------------------------------*/
    printMath(10, 5, '*');

    /*-----------------------------------------
                Breaking a loop
    -----------------------------------------*/
    /*
    In the context of a loop, a break statement can be used to end the loop early. 
    Execution continues with the next statement after the end of the loop.
    For example:
    */
    int sum{ 0 };

    // Allow the user to enter up to 10 numbers
    for (int count{ 0 }; count < 10; ++count)
    {
        std::cout << "Enter a number to add, or 0 to EXIT: ";
        int num{};
        std::cin >> num;

        // exit loop if user enters 0
        if (num == 0)
            break;// exit the loop now

        // otherwise add number to our sum
        sum += num;
    }

    // execution will continue here after the break
    std::cout << "The sum of all the numbers you entered is: " << sum << '\n';  

    /*-----------------------------------------
                Break vs return
    -----------------------------------------*/
    /*
    A break statement terminates the switch or loop, and execution continues at the first 
    statement beyond the switch or loop. A return statement terminates the entire function 
    that the loop is within, and execution continues at point where the function was called.
    */

    /*-----------------------------------------
                     Continue
    -----------------------------------------*/
    /*
    The continue statement provides a convenient way to end the current iteration of a loop 
    without terminating the entire loop.

    Here’s an example of using continue:
    */
    for (int count { 0 }; count < 10; ++count)
    {
        // if the number is divisible by 4, skip this iteration
        if ((count % 4) == 0)
        {
            continue;// go to next iteration
        }

        // If the number is not divisible by 4, keep going
        std::cout << count << ' ';

        // The continue statement jumps to here
    }

    /*---------------------------------------------
        The debate over use of break and continue
    ---------------------------------------------*/
    /*
    Best practice:

    Use break and continue when they simplify your loop logic.
    */
    /*
    Some developers take a middle ground, and only use early returns at the top of a 
    function to do parameter validation (catch bad arguments passed in), and then 
    a single return thereafter.
    */
   



    
    return 0;
}