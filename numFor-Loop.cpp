/*
@author: Kevin Longinett
@date: 6/29/26
@purpose: This program prints a table of numbers and their squares from 0 to 100.
*/

// include the directives we need for this program
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int minNum = 0; // stores the starting value.
    int maxNum = 100; // stores the ending value.

    // print table header
    cout << left << setw(12) << "Number" << "| " << "Number Squared" << endl;
    cout << "---------------------------" << endl;

    // print each number and its square
    for (int i = minNum; i <= maxNum; i++) {
        cout << left << setw(12) << i << "| " << (i * i) << endl;
    }

    return 0;
}
