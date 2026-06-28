/*
@author: Kevin Longinett
@date: 6/24/26
@purpose: This program uses a while loop to run exactly 100 iterations and prints the count when finished.
*/

//include the directives we need for this program
#include <iostream>
using namespace std;

int main() {

    int counter = 0; //tracks the number of iterations through the loop

    //continues looping until the counter reaches 100
    while (counter < 100) {
        counter++;
    }

    //displays the total number of iterations completed
    cout << "The loop completed " << counter << " iterations." << endl;

    return 0;
}
