/*
@author: Kevin Longinett
@date: 6/29/26
@purpose: This program sums the loop index and an adder value over 50 iterations.
*/

// include the directives we need for this program
#include <iostream>
using namespace std;

int main() {

    int sumOp = 0; // stores the result of the addition.
    int adder = 10; // stores the value that will be added each iteration.

    // loop 50 times and add the loop counter and the adder value
    for (int i = 0; i < 50; i++) {
        sumOp = i + adder;
        cout << "Iteration " << i << ": " << sumOp << endl;
    }

    return 0;
}
