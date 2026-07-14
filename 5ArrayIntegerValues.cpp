/*
@author: Kevin Longinett
@date: 7/13/26
@purpose: This program initializes a 1-D array with 5 integer values, sums the values, and prints the total.
*/

// Include the input/output library for this program
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;       // Number of elements in the array
    int values[SIZE] = {10, 20, 30, 40, 50}; // Initialize the array with 5 integers
    int sum = 0;

    // Add each element in the array to the sum
    for (int i = 0; i < SIZE; i++) {
        sum += values[i];
    }

    // Print the total sum to the console
    cout << "The sum of the array values is: " << sum << endl;

    return 0;
}
