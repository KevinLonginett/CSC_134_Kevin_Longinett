/*
@author: Kevin Longinett
@date: 6/10/2026
@purpose: calculates the force (F) of an object given the mass (m) and the acceleration (a) using the formula F = ma
 */
//include necessary libraries
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    double mass = 10.0; // mass in kilograms
    double acceleration = 9.81; // acceleration in meters per second squared
    double force = mass * acceleration; // calculate force using the formula F = ma
    cout << "The force of the object is: " << force << " newtons" << endl;
    return 0;
}