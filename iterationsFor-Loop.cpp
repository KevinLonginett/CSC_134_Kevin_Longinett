/*
@author: Kevin Longinett
@date: 6/29/26
@purpose: This program uses an accumulator to count the number of iterations in a for loop.
*/

// include the directives we need for this program
#include <iostream>
using namespace std;

int main() {
    int accumulator = 0; // initialize accumulator to zero

    // loop a maximum of 100 times
    for (int i = 0; i < 100; i++) {
        accumulator++; // add one to the accumulator each iteration
    }

    // print the final accumulator value
    cout << "The accumulator value is: " << accumulator << endl;

    return 0;
}
