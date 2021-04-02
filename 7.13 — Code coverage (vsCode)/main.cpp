/*
In the previous lesson 7.12 -- Introduction to testing your code, we discussed how to 
write and preserve simple tests. In this lesson, we’ll talk about what kind of tests are 
useful to write to ensure your code is correct.
*/
#include <iostream>

    /*-------------------------------------
                Loop coverage
    --------------------------------------*/
    void spam(int timesToPrint)
    {
        for(int count { 0 }; count < timesToPrint; ++count)
        {
            std::cout << "Spam!" << ' ';
        }
            std::cout << '\n';
    }

int main()
{
    std::cout << "Hello World\n";

    /*-------------------------------------
            Statement coverage
    --------------------------------------*/

    /*-------------------------------------
                Branch coverage
    --------------------------------------*/
    /*
    Aim for 100% branch coverage of your code.
    */

    /*-------------------------------------
                Loop coverage
    --------------------------------------*/
    spam(0);
    spam(1);
    spam(2);
    /*
    Best practice:

    Use the 0, 1, 2 test to ensure your loops work correctly with different number of iterations.
    */

    /*-----------------------------------------
        Testing different categories of input
    -----------------------------------------*/
    /*
    Best practice:

    Test different categories of input values to make sure your unit handles them properly.
    */

    






    return 0;
}