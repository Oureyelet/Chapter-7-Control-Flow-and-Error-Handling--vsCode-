#include <iostream>

int main()
{
    std::cout << "Hello World" << '\n';

    /*
    Since a while loop evaluates the condition up front, it’s an awkward choice. 
    We could solve the issue like this:
    */
    int selection { 0 };// selection must be declared outside while loop so we can use it later
    while (selection != 1 && selection != 2 && selection != 3 && selection != 4)
    {
        std::cout << "1) Addition\n";
        std::cout << "2) Subtraction\n";
        std::cout << "3) Multiplication\n";
        std::cout << "4) Division\n";
        std::cout << "Please make a selection:";
        std::cin >> selection;
    }
    // do something with selection here
    // such as a switch statement
    std::cout << "Your select option #" << selection << '\n';


    /*---------------------------------------------------
                      Do while statements
    ---------------------------------------------------*/
    /*
    To help solve problems like the above, C++ offers the do-while statement:

    do
        statement
    while (condition);
    
    A do while statement is a looping construct that works just like a while loop, 
    except the statement always executes at least once. 
    After the statement has been executed, the do-while loop checks the condition. 
    If the condition evaluates to true, the path of execution jumps back to the top of the do-while loop 
    and executes it again.
    */
    //Here is our example above using a do-while loop instead of a while loop:
    int selection_2 {};// selection must be declared outside of the do-while so we can use it later
    do
    {
        std::cout << "1) Addition\n";
        std::cout << "2) Subtraction\n";
        std::cout << "3) Multiplication\n";
        std::cout << "4) Division\n";
        std::cout << "Please make a selection:";
        std::cin >> selection_2;

    } 
    while (selection_2 != 1 && selection_2 != 2 && selection_2 != 3 && selection_2 != 4);
    
    std::cout << "You selected option #" << selection_2 << '\n';

    //In practice, do-while loops aren’t commonly used.
    /*
    Best practice:

    Favor while loops over do-while when given an equal choice.
    */


    return 0;
}