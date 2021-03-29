#include <iostream>

int main()
{
    /*
    Question #2

    Write a program that prints out the letters a through z along with their ASCII codes. 
    Hint: to print characters as integers, you have to use a static_cast.
    */
/*
This was my answer but i did not i can print alphabet a throught z with just 'char 'a'' 
    int x { 97 };
    while (x <= 122)
    {
        std::cout << static_cast<char>(x) << ' ';
        ++x;
    }
*/
    char myChar{ 'a' };
    while (myChar <= 'z')
    {
        std::cout << myChar << ' ' << static_cast<int>(myChar) << '\n';
        ++myChar;
    }

    return 0;
}