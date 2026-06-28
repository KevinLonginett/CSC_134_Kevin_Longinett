/*
@author: Kevin Longinett
@date: 6/24/26
@purpose: This program prompts the user to enter a temperature until the correct temperature is entered.
*/

//include the directives we need for this program
#include <iostream>
using namespace std;

int main() {
    
    double temperature; //stores the temperature entered by the user.

    cout << "Enter a temperature: ";
    cin >> temperature;

    //continue asking for the temperature until the correct value is entered.
    while (temperature != 212.34) {
        cout << "Enter a temperature: ";
        cin >> temperature;
    }

    //display a message when the correct temperature is entered
    cout << "The temperature has been successfully set, thank you." << endl;

    return 0;
}
