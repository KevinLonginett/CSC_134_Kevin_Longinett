/*
@author: Kevin Longinett
@date: 6/10/2026
@purpose: calculates the velocity (v) of an object given the distance (x) and the time (t) using the formula v = x/t
 */
//include necessary libraries
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    double distance = 400.0; // distance in miles
    double time = 4.0; // time in hours
    double velocity = distance / time; // calculate velocity using the formula v = x/t
    cout << "The velocity of the object is: " << velocity << " miles per hour" << endl;
    return 0;
}