/*
@author: Kevin Longinett
@date: 6/23/26
@purpose: This program uses a while loop to enter 10 grades and calculate their average.
*/

//include the directives we need for this program
#include <iostream>
using namespace std;

int main() {
    int count = 0; //tracks how many grades have been entered
    double grade, total = 0.0, average; //stores each grade, the total, and the average

    //uses a while loop to collect 10 grades
    while (count < 10) {
        cout << "Enter grade " << (count + 1) << ": ";
        cin >> grade;
        total += grade;
        count++;
    }

    //calculate and print the average after all grades are entered
    average = total / 10.0;
    cout << "The average is: " << average << endl;

    return 0;
}