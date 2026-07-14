/*
@author: Kevin Longinett
@date: 7/13/26
@purpose: This program uses an array and a for-loop to print the 8 planets and Pluto.
*/

// Include the input/output library for this program
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Set the size of the array to 9 items: 8 planets plus Pluto
    const int SIZE = 9;

    // Store the names of the planets and Pluto in a string array
    string planets[SIZE] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

    // Print the main planets of the solar system
    cout << "Planets of the Solar System:" << endl;
    for (int i = 0; i < 8; i++) {
        cout << planets[i] << endl;
    }

    // Print Pluto as the dwarf planet separately
    cout << "\nDwarf planet:" << endl;
    cout << planets[8] << endl;

    return 0;
}
