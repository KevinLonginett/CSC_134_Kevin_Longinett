/*
@author: Kevin Longinett
@date: 6/19/2026
@purpose: This program calculates the average of three integers.
*/

//include the directives we need for this program
#include <iostream>
using namespace std;

int main() {

    int num1, num2, num3; // stores the three integers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3; // reads the three integers 
    double average = (num1 + num2 + num3) / 3.0; // calculates the average
    cout << "The average of the three numbers is: " << average << endl; 

    return 0;
}