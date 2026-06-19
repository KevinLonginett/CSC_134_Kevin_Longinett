/*
@author: Kevin Longinett
@date: 6/19/26
@purpose: This program determines whether an entered year is a leap year.
*/

//include the directives we need for this program
#include <iostream>
using namespace std;

int main() {
    int year; //stores the year entered 

    cout << "Enter a year: ";
    cin >> year;

    // a leap year must be divisible by 400, or by 4 but not by 100
    bool isLeap = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    //display whether the entered year is or is not a leap year
    if (isLeap) {
        cout << "The year you entered " << year << " is a leap year." << endl;
    } else {
        cout << "The year you entered " << year << " is NOT a leap year." << endl;
    }

    return 0;
}
