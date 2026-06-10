/*
@author: Kevin Longinett
@date: 06/10/2026
@purpose: This program defines a class ProductOfTwoNumbers that calculates the product of two numbers and displays the result. The class has a constructor that takes two numbers as parameters, a method to calculate the product, and a method to display the result. The main function creates an instance of the ProductOfTwoNumbers class and calls the methods to perform the calculations and display the output.
*/

//include necessary libraries
#include <iostream>
//use the standard namespace to avoid prefixing std:: before every standard library object
using namespace std;

int main(){
    int num1 = 5;
    int num2 = 10;
    int product = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
    return 0;
}


