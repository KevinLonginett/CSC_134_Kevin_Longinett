/*
@author: Kevin Longinett
@date: 7/13/26
@purpose: This program manually sorts an array in ascending order using nested loops and prints the sorted list.
*/

// Include the input/output library for this program
#include <iostream>
using namespace std;

int main() {
    const int TOTAL_SIZE = 10;
    int numbers[TOTAL_SIZE] = {10, 90, 2, 25, 44, 88, 0, 4};

    // Fill missing elements with 0 so the array has 10 items
    for (int i = 8; i < TOTAL_SIZE; i++) {
        numbers[i] = 0;
    }

    // Manual bubble sort in ascending order
    for (int i = 0; i < TOTAL_SIZE - 1; i++) {
        for (int j = 0; j < TOTAL_SIZE - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Print the sorted list
    cout << "Numbers in ascending order:" << endl;
    for (int i = 0; i < TOTAL_SIZE; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
