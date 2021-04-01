#include <iostream>
#include "cstdlib" // for std::exit(), std::abort()

    /*-------------------------------------
        Calling std::exit() explicitly
    --------------------------------------*/
    /*
    When std::exit() is called this way, you will need to include the cstdlib header.
    Here is an example of using std::exit() explicitly:
    */
    void cleanUp()
    {
        // code here to do any kind of cleanup required
        std::cout << "Cleanup!\n";
    }

int main()
{  
    std::cout << "Hello World\n";

    /*-------------------------------------
            The std::exit() function
    --------------------------------------*/
    /*
    std::exit() is a function that causes the program to terminate normally. 
    Normal termination means the program has exited in an expected way.
    */

    /*-------------------------------------
        Calling std::exit() explicitly
    --------------------------------------*/
    //std::atexit(cleanUp);// register cleanup() to be called automatically when std::exit() is called

    std::cout << 1 << '\n';

    //std::exit(0);// terminate and return status code 0 to operating system

    // The following statements never execute
    std::cout << 2 << '\n';

    /*-------------------------------------
        std::abort and std::terminate
    --------------------------------------*/
    //C++ contains two other halt-related functions.
    std::cout << 3 << '\n';
    std::abort();

    // The following statements never execute
    std::cout << 4 << '\n';

    /*-------------------------------------
        When should you use a halt?
    --------------------------------------*/
    //The short answer is “almost never”.
    /*
    Rule:

    Only use a halt if there is no safe way to return normally from the main function. 
    If you haven’t disabled exceptions, prefer using exceptions for handling errors safely.
    */

    


    return 0;
}