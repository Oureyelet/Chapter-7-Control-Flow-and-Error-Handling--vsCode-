#ifndef Q_2
#define Q_2

#include <iostream>
#include <cassert>
/*
Question #2

A prime number is a natural number greater than 1 that is evenly divisible (with no remainder) 
only by 1 and itself. Complete the following program by writing the isPrime() function using a for loop.

#include <iostream>
#include <cassert>
 
bool isPrime(int x)
{
    // write this function using a for loop
}
 
int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(!isPrime(99));
    assert(isPrime(13417));
 
    std::cout << "Success!";
 
    return 0;
}
2(2/1=2...2/2=1) 4
3(3/1=3...3/3=1) 6
5(5/1=5...5/5=1) 8
*/

bool isPrime(int number)
{
    if(number < 2) 
        return false;
    if(number == 2) 
        return true;
    if(number % 2 == 0) 
        return false;
    for(int i{ 3 }; (i*i)<=number; i+=2)
    {
        if(number % i == 0 ) 
        return false;
    }
    return true;
}



#endif // end Q_2