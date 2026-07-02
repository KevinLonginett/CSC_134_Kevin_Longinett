/*
@author: Kevin Longinett
@date: 6/29/26
@purpose: This program displays the multiplication table for a user-entered integer from 0 to 12.
*/

// include the directives we need for this program
#include <iostream>
using namespace std;

int main() {
    int number; // stores the integer entered by the user

    cout << "Enter an integer: "; // prompt the user to enter an integer
    cin >> number;

    // use a for loop to display the multiplication table from 0 to 12
    cout << "Multiplication table for " << number << ":" << endl;
    for (int i = 0; i <= 12; i++) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }

    return 0;
}
