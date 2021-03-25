#include <iostream>
#include "first.h"

int main()
{
    std::cout << "Hello World" << '\n';

    printDigitName(2);

    /*
    C++ provides an alternative conditional statement called a switch statement 
    that is specialized for this purpose. Here is the same program as above using a switch:
    */

    wee::printDigitName(4);

    /*
    Best practice:

    Prefer switch statements over if-else chains when there is a choice.
    */

    /*----------------------------------------------------
                        Starting a switch
    -----------------------------------------------------*/
    /*
    The one restriction is that the condition must evaluate to an integral type.
    Expressions that evaluate to floating point types, strings, and other 
    non-integral types may not be used here.

    Following the conditional expression, we declare a block. 
    Inside the block, we use labels to define all of the values we want to test for equality. 
    There are two kinds of labels:
    */

    /*
    Case labels
    */

    /*
    The default label:
    The default label is optional, and there can only be one default label per switch statement.
    By convention, the default case is placed last in the switch block.
    */

   /*
    Best practice:

    Place the default case last in the switch block.
   */

    /*----------------------------------------------------
                       Taking a break
    -----------------------------------------------------*/
    /*
    In the above examples, we used return statements to stop execution of the statements after our labels. 
    However, this also exits the entire function.

    A break statement (declared using the break keyword) tells the compiler that we are done 
    executing statements within the switch, and that execution should continue with 
    the statement after the end of the switch block. This allows us to exit a switch statement 
    without exiting the entire function.

    Here’s a slightly modified example rewritten using break instead of return:
    */

    voo::printDigitName(3);



    return 0;
}