/*
@author: Kevin Longinett
@date: 6/10/2026
@purpose: calculates the voltage (V) of an object given the current (I) and the resistance (R) using the formula V = IR
 */
//include necessary libraries
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    double current = 10.0; // current in amps 
    double resistance = 2.0; // resistance in ohms
    double voltage = current * resistance; // calculate voltage using the formula V = IR
    cout << "The voltage of the object is: " << voltage << " volts" << endl;
    return 0;
}