#include <iostream>

int sumTo(int value)
{
    return value*(value+1)/2;
}

int sumTo2(int value)
{
    int x { 1 };

    for (int count { 0 }; count < value+1; ++count)
    {
        x += value;
    }
    return x/2;
}