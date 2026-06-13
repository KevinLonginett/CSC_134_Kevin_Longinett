/*
 @author: Kevin Longinett
 @date: 6/12/2026
 @purpose: This program calculates the square footage of a new home.
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // equation: area = length * width
    double length, width, area;
    length = 50.0; // length in feet
    width = 32.0; // width in feet
    area = length * width;
    cout << "The square footage of the new home is: " << fixed << setprecision(2) << area << " square feet" << endl;
    return 0;
}