/*
@author: Kevin Longinett
@date: 7/13/26
@purpose: This program uses an array and a for-loop to print each array element based on its index.
*/

// Include the input/output library for this program
#include <iostream>
using namespace std;

int main() {
    // Set the array size to 7 elements
    const int SIZE = 7;

    // Create an integer array with 4 values and leave the rest as zero
    int numberList[SIZE] = {1, 2, 4, 8};

    // Print each element along with its index position
    for (int i = 0; i < SIZE; i++) {
        cout << "numberList[" << i << "] = " << numberList[i] << endl;
    }

    return 0;
}
