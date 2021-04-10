#ifndef Q_1
#define Q_1

#include <iostream>
/*
Question #1
In the chapter 4 comprehensive quiz, we wrote a program to simulate a ball falling off of a tower. 
Because we didn’t have loops yet, the ball could only fall for 5 seconds.

Take the program below and modify it so that the ball falls for as many seconds as needed until 
it reaches the ground.

In constants.h:
	
#ifndef CONSTANTS_H
#define CONSTANTS_H
 
namespace myConstants
{
    const double gravity(9.8); // in meters/second squared
}
#endif

In your main code file:

#include <iostream>
#include "constants.h"
 
double calculateHeight(double initialHeight, int seconds)
{
    double distanceFallen = myConstants::gravity * seconds * seconds / 2;
    double heightNow = initialHeight - distanceFallen;
 
    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow < 0.0)
        return 0.0;
    else
        return heightNow;
}
 
void calculateAndPrintHeight(double initialHeight, int time)
{
    std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << "\n";
}
 
int main()
{
    using namespace std;
    cout << "Enter the initial height of the tower in meters: ";
    double initialHeight;
    cin >> initialHeight;
	
    calculateAndPrintHeight(initialHeight, 0);
    calculateAndPrintHeight(initialHeight, 1);
    calculateAndPrintHeight(initialHeight, 2);
    calculateAndPrintHeight(initialHeight, 3);
    calculateAndPrintHeight(initialHeight, 4);
    calculateAndPrintHeight(initialHeight, 5);
	
    return 0;
}
*/

namespace myConstants
{
    const double gravity {9.8}; // in meters/second squared
}

double calculateHeight(double initialHeight, double seconds)
{
    //int x = pow(seconds, 2);
    double distanceFallen = myConstants::gravity * seconds * seconds / 2;
    double heightNow = initialHeight - distanceFallen;
 
    // Check whether we've gone under the ground
    // If so, set the height to ground-level
    if (heightNow < 0.0)
    {
        std::cout << "At " << seconds <<" seconds, the ball is on the ground." << '\n' << std::endl;
        return 0.0;
    }
    else
        return heightNow;
}
 
void calculateAndPrintHeight(double initialHeight, double time)
{
    std::cout << "At " << time << " seconds, the ball is at height: " << calculateHeight(initialHeight, time) << "\n";
}

#endif // end Q_1