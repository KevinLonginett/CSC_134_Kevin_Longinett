/*
@author: Kevin Longinett
@date: 7/6/26
@purpose: This program prints a chessboard pattern of asterisks and spaces using nested for loops.
*/

// Include the input/output library for this program
#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask the user for the size of the chessboard
    cout << "Enter the size of the chess board: ";
    cin >> size;

    // Outer loop controls each row of the board
    for (int row = 0; row < size; row++) {
        // Inner loop controls each column in the current row
        for (int col = 0; col < size; col++) {
            // Alternate between printing a star and a blank space
            if ((row + col) % 2 == 0) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        // Move to the next line after each row is printed
        cout << endl;
    }

    return 0;
}
