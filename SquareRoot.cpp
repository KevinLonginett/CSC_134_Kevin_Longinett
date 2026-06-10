/*
@author: Kevin Longinett
@date: 6/10/2026
@purpose: Take the square root of a real number and print the result
*/

//include the required directives/libraries for this program
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //declare the variable for this program
    double num, result;

    //ask the user for a number and store it in the variable num
    cout << "Enter a real number: ";
    cin >> num;

    //calculate the square root of the number and store it in the variable result
    double result = sqrt(num);

    //print the result
    cout << "The square root of " << num << " is: " << result << endl;

    return 0;
}