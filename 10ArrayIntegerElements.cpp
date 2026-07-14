/*
@author: Kevin Longinett
@date: 7/13/26
@purpose: This program uses an array of 10 integer grades, prompts the user to enter each grade, calculates the average, and prints the result.
*/

// Include the input/output library for this program
#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;   // Number of grades in the array
    int grades[SIZE];      // Array that stores the 10 grades
    int sum = 0;

    // Prompt the user to enter each grade
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter grade " << (i + 1) << ": ";
        cin >> grades[i];
        sum += grades[i];
    }

    // Calculate the average of the grades
    double average = static_cast<double>(sum) / SIZE;

    // Print the average to the console
    cout << "The average grade is: " << average << endl;

    return 0;
}
