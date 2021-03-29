#include <iostream>
#include <cmath> // for sqrt() function
#include "first.h"

int main()
{
    std::cout << "Hello World" << '\n';

    /*-----------------------------------------------------------
                goto statement and statement label
    ------------------------------------------------------------*/
    /*
     In this way, we can continually ask the user for input until he or she enters something valid.
    */
    double x {};
tryAgain: // this is a statement label
    std::cout << "Enter a non-negative number: ";
    std::cin >> x;

    if (x < 0.0)
        goto tryAgain; // this is the goto statement
    
    std::cout << "The quare root of " << x << " is " << sqrt(x) << '\n';

    /*-----------------------------------------------------------
                Statement labels have function scope
    ------------------------------------------------------------*/
    /*
     The goto statement and its corresponding statement label must appear in the same function.
     While the above example shows a goto statement that jumps backwards 
     (to a preceding point in the function), goto statements can also jump forward:
    */

    printCats(true);// jumps over the print statement and doesn't print anything
    printCats(false);// prints "cats"

    /*
    There are two primary limitations to jumping: You can only jump forward or backward 
    within a single function (you can’t jump out of one function and into another), 
    and if you jump forwards, you can’t jump forward over the initialization of any variable 
    that is still in scope at the location being jumped to, for example:
    */
    /*
    int main()
    {
        goto skip;   // error: this jump is illegal because...
        int x { 5 }; // this initialized variable is still in scope at statement label 'skip'
    skip:
        x += 3;      // what would this even evaluate to if x wasn't initialized?
        return 0;
    }
    
    /*-----------------------------------------------------------
                          Avoid using goto
    ------------------------------------------------------------*/
    /*
    Almost any code written using a goto statement can be more clearly written using 
    other constructs in C++, such as if statements and loops. 
    */

    /*
    Best practice:

    Avoid goto statements (unless the alternatives are significantly worse for code readability).
    */



    return 0;
}