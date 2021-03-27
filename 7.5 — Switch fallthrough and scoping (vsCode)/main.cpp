#include <iostream>

int main()
{
    std::cout << "Hello World\n";

    /*------------------------------------------------
                        Fallthrough
    ------------------------------------------------*/

    switch (2)
    {
        case 1:// Does not match
            std::cout << 1 << '\n';// Skipped
        case 2:// Match!
            std::cout << 2 << '\n';// Execution begins here
        case 3:
            std::cout << 3 << '\n';// This is also executed
        case 4:
            std::cout << 4 << '\n';// This is also executed
        default:
            std::cout << 5 << '\n';// This is also executed
    }
    /*
    This is probably not what we wanted! 
    When execution flows from a statement underneath a label into 
    statements underneath a subsequent label, this is called fallthrough. 
    */

    /*------------------------------------------------
                The [[fallthrough]] attribute
    ------------------------------------------------*/
    /*
    Commenting intentional fallthrough is a common convention to tell other 
    developers that fallthrough is intended.
    */

    switch (2)
    {
        case 1:
            std::cout << 1 << '\n';
            break;
        case 2:
            std::cout << 2 << '\n';
            [[fallthrough]];
            /*
            C++17 adds a new attribute called [[fallthrough]] that can be used 
            in conjunction with a null statement to indicate that fallthough is intentional
            */
        case 3:
            std::cout << 3 << '\n';
            break;
    }

    /*
    Best practice:

    Use the [[fallthrough]] attribute (along with a null statement) to indicate intentional fallthrough.
    */

    

    return 0;
}