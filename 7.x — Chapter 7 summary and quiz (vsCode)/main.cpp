#include <iostream>
#include "Question #1.h"
#include "Question #2.h"

/*
Warning: The quizzes start getting harder from this point forward, but you can do it. 
Let’s rock these quizzes!
*/

int main()
{
    std::cout << "Time for Quiz!" << '\n';

    /*--------------------------------
                Question #1
    --------------------------------*/
    std::cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    std::cin >> initialHeight;

    for(double count{ 0.0 }; calculateHeight(initialHeight, count) > 0; count +=  0.1)

    calculateAndPrintHeight(initialHeight, count);

    /*--------------------------------
                Question #2
    --------------------------------*/

    assert( !isPrime(0) );
    assert( !isPrime(1) );
    assert(  isPrime(2) );
    assert(  isPrime(3) );
    assert( !isPrime(4) );
    assert(  isPrime(5) );
    assert(  isPrime(7) );
    assert( !isPrime(9) );
    assert(  isPrime(11) );
    assert(  isPrime(13) );
    assert( !isPrime(15) );
    assert( !isPrime(16) );
    assert(  isPrime(17) );
    assert(  isPrime(19) );
    assert(  isPrime(97) );
    assert( !isPrime(99) );
    assert( !isPrime(99) );
    assert(  isPrime(13417) );
 
    std::cout << "Success!";


    std::cout << std::endl;
    return 0;
}