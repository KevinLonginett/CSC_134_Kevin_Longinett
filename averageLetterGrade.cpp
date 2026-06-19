/*
@author: Kevin Longinett
@date: 6/19/2026
@purpose: This program calculates the average letter grade for a student based on the number grade.
*/

//include the directives we need for this program
#include <iostream>
using namespace std;

int main() {
double grade1, grade2, grade3; // store the three number grades entered
    cout << "Enter three number grades: ";
    cin >> grade1 >> grade2 >> grade3;
    double average = (grade1 + grade2 + grade3) / 3.0; // calculate the average
    char letterGrade; // store the letter grade based on the average

    // compare the average to the grading scale
    if (average >= 90) {
        letterGrade = 'A';
    } else if (average >= 80) {
        letterGrade = 'B';
    } else if (average >= 70) {
        letterGrade = 'C';
    } else if (average >= 60) {
        letterGrade = 'D';
    } else if (average < 60)
        letterGrade = 'F';
    
    cout << "The average of your three grades is: " << average << endl;
    cout << "The average letter grade is: " << letterGrade << endl; 

    return 0;
}