/*
@author: Kevin Longinett
@date: 6/19/26
@purpose: This program determines whether an entered letter is a vowel or consonant.
*/

// include the directives we need for this program
#include <iostream>
using namespace std;

int main() {

    char letter; // stores the character entered

    cout << "Enter a single character: ";
    cin >> letter;

    // verify that the input is an alphabetic character
    if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z')) {
        char lower = (letter >= 'A' && letter <= 'Z') ? letter + ('a' - 'A') : letter; //converts uppercase letters to lowercase so only one vowel check is needed

        // determines whether the letter is one of the five vowels
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            cout << letter << " is a vowel." << endl;
        } else {
            // any alphabetic character that is not a vowel is a consonant
            cout << letter << " is a consonant." << endl; 
        }    
    }
     else {
        cout << "Invalid input. Please enter a valid alphabetic character." << endl; //displays an error message if the input is not a letter
    }

    return 0;
}
