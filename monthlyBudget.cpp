/*
@author: Kevin Longinett
@date: 7/5/26
@purpose: This program calculates whether the user is over or under their monthly budget.
*/

// Include the directives we need for this program
#include <iostream>
using namespace std;

int main() {

    double budget;       // Stores the user's monthly budget
    double expense;      // Stores each expense entered by the user
    double total = 0.0;  // Stores the total amount of expenses
    int numExpenses;     // Stores the number of expenses to enter

    // Prompt the user to enter their monthly budget
    cout << "Enter your monthly budget: $";
    cin >> budget;

    // Ask the user how many expenses they want to enter
    cout << "How many expenses do you have? ";
    cin >> numExpenses;

    // Use a for loop to collect each expense and calculate the total
    for (int i = 1; i <= numExpenses; i++) {
        cout << "Enter expense " << i << ": $";
        cin >> expense;
        total += expense;
    }

    // Display the total expenses
    cout << "\nTotal Expenses: $" << total << endl;

    // Determine whether the user is over, under, or exactly on budget
    if (total > budget) {
        cout << "You are over budget by $" << total - budget << endl;
    }
    else if (total < budget) {
        cout << "You are under budget by $" << budget - total << endl;
    }
    else {
        cout << "You met your budget exactly." << endl;
    }

    return 0;
}
