/*
 @author: Kevin Longinett
 @date: 6/12/2026
 @purpose: This program calculates the volume of a sphere.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // equation: V = (4/3)πr^3
    double radius, volume;
    const double PI = 3.1415;
    radius = 7.0;
    volume = (4.0/3.0) * PI * radius * radius * radius;
    cout << "The volume of the sphere is: " << fixed << setprecision(2) << volume << endl;
    return 0;
}