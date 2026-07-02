/*
@author: Kevin Longinett
@date: 6/29/26
@purpose: This program simulates rolling a single die a user-specified number of times.
*/

// include the directives we need for this program
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int rolls; // stores the number of times the user wants to roll the die

    // prompt the user to enter the number of die rolls
    cout << "How many times would you like to roll the die? ";
    cin >> rolls; 

    // seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // uses a for loop to simulate rolling the die
    for (int i = 1; i <= rolls; i++) {
        int result = (rand() % 6) + 1; // generate a random number between 1 and 6
        cout << "Roll " << i << ": " << result << endl;
    }

    return 0;
}
