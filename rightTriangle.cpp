/*
@author: Kevin Longinett
@date: 7/6/26
@purpose: This program prints a right triangle of stars using nested for loops.
*/

// Include the input/output library for this program
#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask the user how many rows the triangle should have
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop controls the number of rows in the triangle
    for (int i = 1; i <= rows; i++) {
        // Inner loop prints the stars for the current row
        for (int j = 1; j <= i; j++) {
            // Print one star for each column in the row
            cout << "*";
        }
        // Move to the next line after each row is finished
        cout << endl;
    }

    return 0;
}
