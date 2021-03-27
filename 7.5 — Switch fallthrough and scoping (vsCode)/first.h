#include <iostream>

#ifndef FIRST_H
#define FIRST_H

bool isVowel(char c)
{
    return (c=='a' || c=='e' || c=='i' || c=='o' || 
    c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}

//You can do something similar using switch statements by placing multiple case labels in sequence:

namespace woo
{
    bool isVowel(char c)
    {
        switch (c)
        {
            case 'a': // if c is 'a'
            case 'e': // or if c is 'e'
            case 'i': // or if c is 'i'
            case 'o': // or if c is 'o'
            case 'u': // or if c is 'u'
            case 'A': // or if c is 'A'
            case 'E': // or if c is 'E'
            case 'I': // or if c is 'I'
            case 'O': // or if c is 'O'
            case 'U': // or if c is 'U'
                return true;
            default:
                return false;
        }
    }
}

int calculate(int x, int y, char c)
{
    switch (c)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '%':
            return x % y;
    }
}

#endif // end FIRST_H