/*
@author: Kevin Longinett
@date: 7/6/26
@purpose: This program prints a square pattern of asterisks using nested for loops.
*/

// Include the input/output library for this program
#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask the user for the side length of the square
    cout << "Enter the side length of the square: ";
    cin >> size;

    // Outer loop controls the number of rows
    for (int row = 0; row < size; row++) {
        // Inner loop prints the stars for each column in the current row
        for (int col = 0; col < size; col++) {
            // Print a star and a space for each position
            cout << "* ";
        }
        // Move to the next line after each row is printed
        cout << endl;
    }

    return 0;
}
