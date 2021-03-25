#include <iostream>

int main()
{
    std::cout << "Hello World\n";

    /*-----------------------------------------------
            Categories of flow control statements
    -----------------------------------------------*/
/*
Category                    Meaning                                                   Implementated in C++ by
------------------------------------------------------------------------------------------------------------------------
Conditional statements      Conditional statements cause a sequence of code to        If, switch
                            execute only if some condition is met.

Jumps                       Jumps tell the CPU to start executing the statements      Goto
                            at some other location.

Function calls              Function calls are jumps to some other location,          Function calls
                            and then back to the starting point. 	    

Loops                       Loops tell the program to repeatedly execute some         While, do-while, for, ranged-for
                            sequence of code zero or more times, until some 
                            condition is met. 	

Halts                       Halts tell the program to quit running. 	              std::exit(), std::abort()

Exceptions                  Exceptions are a special kind of flow control             try, throw, catch
                            structure designed for error handling.
*/

    return 0;
}