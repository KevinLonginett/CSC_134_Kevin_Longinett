/*
@Kevin Longinett
@Date: 6/12/2026
@Purpose: add two floating point numbers and print the result
*/

//include the directives for the libraries we will be using
#include <iostream>
using namespace std;

int main(){
    float num1;
    float num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "The sum is " << num1 + num2 << endl;
    
    return 0;
}