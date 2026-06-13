/*
@author: Kevin Longinett
@Date: 6/12/2026
@Purpose: calculates the area of a circle given the radius (r) using the formula A = πr^2
*/

//include the directives we need for this program
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //equation A = πr^2

    float area;
    float pi = 3.1415;
    float radius = 19;
   
    area = pi * radius * radius;
    cout << "The area of the circle is: " << area << " square feet" << endl;  
    return 0;
}