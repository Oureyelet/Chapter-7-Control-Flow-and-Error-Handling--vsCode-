#include <iostream>

int main()
{
    std::cout << "Hello World" << '\n';

    /*---------------------------------------------------------
                       Quick if-statement recap
    ---------------------------------------------------------*/
    /*
    if (condition)
        true_statement;

    or with an optional else statement:

    if (condition)
        true_statement;
    else
        false_statement;
    */
    /*
    If the condition evaluates to true, the true_statement executes. 
    If the condition evaluates to false and the optional else statement exists, 
    the false_statement executes.
    */
    //Here is a simple program that uses an if statement with the optional else statement:

    std::cout << "Enter a number: ";
    double x{};
    std::cin >> x;

    if( x > 10 )
    {
        std::cout << x << " is greater than 10" << '\n';
    }
    else
    {
        std::cout << x << " is not greater than 10" << '\n';
    }

    /*---------------------------------------------------------
             If or else with multiple conditional statements
    ---------------------------------------------------------*/
    //if you want to execute multiple statements based on some condition. 
    //To do so, we can use a compound statement (block).

    /*---------------------------------------------------------
             To block or not to block single statements
    ---------------------------------------------------------*/
    /*
    Best practice:

    Consider putting single statements associated with an if or else in blocks.
    */

    /*---------------------------------------------------------
                        Implicit blocks
    ---------------------------------------------------------*/
    /*
    if (condition)
        true_statement;
    else
        false_statement;

is actually the equivalent of:

    if (condition)
    {
        true_statement;
    }
    else
    {
        false_statement;
    }
    */



    return 0;
}