/*
@author: Kevin Longinett
@date: 6/10/2026
@purpose: calculates the distance travelled (x) by an object given the time (t) and the velocity (v) using the formula x = vt
 */

//include necessary libraries
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    double velocity = 80.0; // velocity in miles per hour
    double time = 2.0; // time in hours
    double distance = velocity * time; // calculate distance using the formula x = vt
    cout << "The distance travelled is: " << distance << " miles" << endl;
    return 0;
}