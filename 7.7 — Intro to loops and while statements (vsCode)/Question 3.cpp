#include <iostream>

int main()
{
    /*
    Question #3

    Invert the nested loops example so it prints the following:

    5 4 3 2 1
    4 3 2 1
    3 2 1
    2 1
    1
    */
    int count_out { 5 };
    while (count_out >= 1)
    {
        int count_in { count_out };
        while (count_in >= 1)
        {
            std::cout << count_in-- << ' ';
        }

        std::cout << '\n';

        --count_out;  
    }

    return 0;
}