/*
@author: Kevin Longinett
@date: 6/19/26
@purpose: This program determines whether a integer is even or odd.
*/

//include the directives we need for this program
#include <iostream>
using namespace std;

int main() {

    int number; //stores the integer entered by the user
    cout << "Enter an integer value: "; 
    cin >> number; //reads the integer entered by the user 
    
    //a remainder of 0 when divided by 2 means the number is even
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } 
    //any other remainder means the number is odd
    else {
        cout << number << " is an odd number." << endl;
    }
    
    return 0;
}
