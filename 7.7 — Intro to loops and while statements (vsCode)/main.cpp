#include <iostream>

int main()
{
    /*-------------------------------------------------
                    Introduction to loops
    --------------------------------------------------*/
    /*
    And now the real fun begins -- in the next set of lessons, we’ll cover loops. 
    Loops are control flow constructs that allow a piece of code to execute repeatedly 
    until some condition is met. Loops add a significant amount of flexibility into your 
    programming toolkit, allowing you to do many things that would otherwise be difficult.

    For example, let’s say you wanted to print all the numbers between 1 and 10. Without loops, 
    you might try something like this:
    */

    std::cout << "1 2 3 4 5 6 7 8 9 10" << ' ';
    std::cout << "Done !" << '\n';

    /*
    While that’s doable, it becomes increasingly less so as you want to print more numbers: 
    what if you wanted to print all the numbers between 1 and 1000? That would be quite a bit of typing! 
    But such a program is writable in this way because we know at compile time how many 
    numbers we want to print.

    Now, let’s change the parameters a bit. What if we wanted to ask the user to enter a number 
    and then print all the numbers between 1 and the number the user entered? The number the user 
    will enter isn’t knowable at compile-time. So how might we go about solving this?
    */

    /*-------------------------------------------------
                    While statements
    --------------------------------------------------*/
    /*
    The while statement (also called a while loop) is the simplest of the three loop types that C++ 
    provides, and it has a definition very similar to that of an if statement:

    while (condition)
        statement;
    */

    /*
    Let’s take a look at a simple while loop that prints all the numbers from 1 to 10:
    */
    int count { 1 };
    while (count <= 10)
    {
        std::cout << count << ' ';
        ++count;
    }
    
    std::cout << "Done !" << '\n';

    /*-------------------------------------------------
     While statements that evaluate to false initially
    --------------------------------------------------*/
    /*
    The condition 15 <= 10 evaluates to false, so the associated statement is skipped. 
    The program continues, and the only thing printed is done!.
    */

    /*-------------------------------------------------
                        Infinite loops
    --------------------------------------------------*/
    /*
    If we delete increment 'count' because count is never incremented in this program, 
    count <= 10 will always be true. Consequently, the loop will never terminate, and the 
    program will print "1 1 1 1 1"... forever.
    */

    /*-------------------------------------------------
                 Intentional infinite loops
    --------------------------------------------------*/
    while (true)//infinity loop
    {
        std::cout << "Loop again (y/n)? ";
        char c{};
        std::cin >> c;

        if (c == 'n')
            break;
    }
    /*
    Best practice:

    Favor while(true) for intentional infinite loops.
    */

    /*-------------------------------------------------
                     Loop variables
    --------------------------------------------------*/
    /*
    Some developers prefer loop variable names like iii, jjj, or kkk. 
    Because these names are more unique, this makes searching for loop variables much easier, 
    and helps them stand out as loop variables. An even better idea is to use "real" variable names, 
    such as count, or a name that gives more detail about what you're counting (e.g. userCount).
    */

    /*-------------------------------------------------
                Loop variables should be signed
    --------------------------------------------------*/
    /*
    Loop variables should almost always be signed, as unsigned integers can lead to unexpected issues. 
    Consider the following code:
    */

    /*here was unssigned int for example*/ int count_2 { 10 };

    // count from 10 down to 0
    while (count_2 >= 0)
    {
        if(count_2 == 0)
        {
            std::cout << "Done !" << '\n';
        }
        else
        {
            std::cout << count_2 << ' ';
        }

        --count_2;
    }

    /*
    Best practice:

    Loop variables should be of type (signed) int.
    */

    /*-------------------------------------------------
                Doing something every N iterations
    --------------------------------------------------*/
    /*
    Each time a loop executes, it is called an iteration.

    Often, we want to do something every 2nd, 3rd, or 4th iteration, such as print a newline. 
    This can easily be done by using the modulus operator on our counter:
    */

    // Iterate through every number between 1 and 50
    int count_3 { 1 };
    while (count_3 <= 50)
    {
        // print the number (pad numbers under 10 with a leading 0 for formatting purposes)
        if (count_3 < 10)
        {
            std::cout << '0';
        }

        std::cout << count_3 << ' ';

        // if the loop variable is divisible by 10, print a newline
        if (count_3 % 5 == 0)
        {
            std::cout << '\n';
        }
        // increment the loop counter_3
        ++count_3;
    }

    /*-------------------------------------------------
                        Nested loops
    --------------------------------------------------*/
    // Loop between 1 and 10
    int outer { 1 };
    while (outer <= 10)
    {   
        // loop between 1 and outer
        int inner { 1 };
        while (inner <= outer)
        {
            std::cout << inner << ' ';
            ++inner;
        }

        // print a newline at the end of each row
        std::cout << '\n';
        ++outer;
    }

    /*-------------------------------------------------
                        Quiz time
    --------------------------------------------------*/

    //go see Question 2.cpp
    

    return 0;
}