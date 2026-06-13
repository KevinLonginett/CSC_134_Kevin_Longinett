/*
@author: Kevin Longinett
@date: 6/13/2026
@purpose: This program calculates the new average high temperature for different cities in July.
*/

////include the directives we need for this program
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double New_York_City = 85.0; // current average high temperature in degrees
    double Denver = 88.0; // current average high temperature in degrees
    double Phoenix = 106.0; // current average high temperature in degrees
    // each city experiences a 2 percent increase in the average high temperature
    New_York_City *= 1.02; // increase by 2 percent
    Denver *= 1.02; // increase by 2 percent
    Phoenix *= 1.02; // increase by 2 percent
    cout << fixed << setprecision(2);
    cout << "New York City: " << New_York_City << " degrees Fahrenheit" << endl;
    cout << "Denver: " << Denver << " degrees Fahrenheit" << endl;
    cout << "Phoenix: " << Phoenix << " degrees Fahrenheit" << endl;
    return 0;
}