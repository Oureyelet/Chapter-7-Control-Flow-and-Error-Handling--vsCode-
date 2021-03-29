#include <iostream>

int main()
{
    /*
    Question #4

    Now make the numbers print like this:

            1
          2 1
        3 2 1
      4 3 2 1
    5 4 3 2 1

    Hint: Figure out how to make it print like this first:

    X X X X 1
    X X X 2 1
    X X 3 2 1
    X 4 3 2 1
    5 4 3 2 1

    */
    int count_out { 5 };
    while (count_out >= 1)
    {
        int count_in { 1 };
        while (count_in >= 1)
        {
            std::cout << count_in-- << ' ';
        }

        std::cout << '\n';

        --count_out;  
    }

    return 0;
}