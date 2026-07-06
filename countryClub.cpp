/*
@author: Kevin Longinett
@date: 7/5/26
@purpose: This program calculates the projected membership fee for the next five years using a 6% annual increase.
*/

// Include the directives we need for this program
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // The current yearly membership fee for the country club
    double membershipFee = 250000.0;

    // Annual increase rate, expressed as a decimal (6%)
    double increaseRate = 0.06;

    // Format output so currency displays with two decimal places
    cout << fixed << setprecision(2);
    cout << "Projected membership fees for the next 5 years:" << endl;

    // Loop through the next five years and apply the yearly increase
    for (int year = 1; year <= 5; year++) {
        membershipFee *= (1 + increaseRate); // increase fee by 6%
        cout << "Year " << year << ": $" << membershipFee << endl;
    }

    // End the program successfully
    return 0;
}
