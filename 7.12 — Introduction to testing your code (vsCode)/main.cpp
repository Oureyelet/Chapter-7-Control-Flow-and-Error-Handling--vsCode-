#include <iostream>

void compare(int x, int y)
{
    if (x > y)
    {
        std::cout << x << " is greater than " << y << '\n'; //case 1
    }
    else if (x < y)
    {
        std::cout << x << " is less than " << y << '\n';//case 2
    }
    else
    {
        std::cout << x << " is equal to " << y << '\n';//case 3
    }
    
}

    /*--------------------------------------
                Informal testing
    --------------------------------------*/
    /*
    One way you can test code is to do informal testing as you write the program. 
    After writing a unit of code (a function, a class, or some other discrete “package” of code), 
    you can write some code to test the unit that was just added, and then erase the test once 
    the test passes. As an example, for the following isLowerVowel() function, you might write 
    the following code:
    */
    // We want to test the following function
    bool isLowerVowel(char c)
    {
        switch(c)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                return true;
            default:
                return false;
        }
    }

int main()
{
    std::cout << "Hello World\n";

    /*---------------------------
        The testing challenge
    ---------------------------*/
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;


    std::cout << "Enter another number: ";
    int y{};
    std::cin >> y;

    compare(x, y);

    /*--------------------------------------
        Test your programs in small pieces
    --------------------------------------*/
    /*
    Write your program in small, well defined units (functions or classes), compile often, 
    and test your code as your go.
    */

    /*--------------------------------------
                Informal testing
    --------------------------------------*/
    // So here's our temporary tests to validate it works
    std::cout << isLowerVowel('a') << '\n';// temporary test code, should produce 1
    std::cout << isLowerVowel('q') << '\n';// temporary test code, should produce 0
    
    return 0;
}