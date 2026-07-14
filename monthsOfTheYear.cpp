/*
@author: Kevin Longinett
@date: 7/13/26
@purpose: This program uses a 1-D array and a for-loop to list the months of the year and their number of days.
*/

// Include the input/output library for this program
#include <iostream>
using namespace std;

int main() {
    // Create an array that stores the month numbers from 1 to 12
    int months[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // Create an array that stores the number of days in each month
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Use a for-loop to print each month and the number of days it has
    for (int i = 0; i < 12; i++) {
        cout << "Month " << months[i] << " has " << days[i] << " days." << endl;
    }

    return 0;
}
