/*
@author: Kevin Longinett
@date: 7/13/26
@purpose: This program defines an array of strings that contains the days of the week and prints them in numbered format.
*/

// Include the input/output library and string library for this program
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Set the size of the array to 7 days in a week
    const int SIZE = 7;

    // Store the names of the days in an array of strings
    string days[SIZE] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    // Use a for-loop to print each day with a number in front of it
    for (int i = 0; i < SIZE; i++) {
        cout << "Day " << (i + 1) << ": " << days[i] << endl;
    }

    return 0;
}
