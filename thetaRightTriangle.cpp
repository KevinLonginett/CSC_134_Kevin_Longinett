/*
@author: Kevin Longinett
@date: 6/23/26
@purpose: This program calculates the angle(theta) of a right triangle.
*/

//include the directives we need for this program
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    double x = 3.0; //stores the length of the adjacent side.
    double y = 4.0; //stores the length of the opposite side.

    //calculate the hypotenuse using the Pythagorean Theorem (x^2 + y^2 = c^2)
    double c = sqrt(x * x + y * y);

    //calculate the angle in radians using the atan2 function
    double theta_rad = atan2(y, x);

    //convert the angle from radians to degrees
    double theta_deg = theta_rad * 180.0 / acos(-1.0);

    //print the values of the triangle.
    cout << fixed << setprecision(2);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "c = " << c << endl;
    cout << "theta = " << theta_deg << " degrees" << endl;

    //determine whether the triangle is a 3-4-5 triangle.
    if (fabs(theta_deg - 53.13) <= 0.01) {
        cout << "This is a 3-4-5 triangle." << endl;
    }
    else {
        cout << "This is NOT a 3-4-5 triangle." << endl;
    }

    return 0;
}