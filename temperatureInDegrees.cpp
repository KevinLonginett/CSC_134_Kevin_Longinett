/*
 @author: Kevin Longinett
 @date: 6/12/2026
 @purpose: This program converts a temperature from Fahrenheit to Celsius.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // equation: C = (F - 32) * 5/9
    double celsius, fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;
    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    cout << "Temperature in Celsius: " << fixed << setprecision(2) << celsius << endl;
    return 0;
}