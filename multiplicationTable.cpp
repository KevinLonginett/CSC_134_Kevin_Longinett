/*
@author: Kevin Longinett
@date: 7/6/26
@purpose: This program displays a multiplication table for the numbers 1 through 10 using nested for loops.
*/

// Include the directives we need for this program
#include <iostream>
using namespace std;

int main() {

    // Use the outer loop to control each row of the table
    for (int row = 1; row <= 10; row++) {

        // Use the inner loop to calculate and display each product
        for (int col = 1; col <= 10; col++) {
            // Print the product of the current row and column
            cout << row * col << " ";
        }

        // Move to the next line after each row is finished
        cout << endl;
    }

    return 0;
}
