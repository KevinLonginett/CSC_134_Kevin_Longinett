/*
@author: Kevin Longinett
@date: 6/29/26
@purpose: This program reads an integer value and uses a for loop to print 0 through value-1.
*/

// include the directives we need for this program
#include <iostream>
using namespace std;

int main() {

    int value; // stores the integer entered by the user.

    // prompt the user to enter an integer
    cout << "Enter an integer: ";
    cin >> value;

    // use a for loop to print the iteration count from 0 to value - 1
    for (int i = 0; i < value; i++) {
        cout << i << endl;
    }

    return 0;
}
