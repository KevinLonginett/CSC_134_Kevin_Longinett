/*
@author: Kevin Longinett
@date: 6/29/26
@purpose: This program uses a for loop to print the loop counter from 0 to 10.
*/

// include the directives we need for this program
#include <iostream>
using namespace std;

int main() {
    int count = 0; // initialize counter variable

    // loop from 0 through 10 inclusive
    for (int i = 0; i <= 10; i++) {
        count++; // increment counter variable
        // print the current loop index
        cout << "Index: " << i << endl;
    }

    return 0;
}
