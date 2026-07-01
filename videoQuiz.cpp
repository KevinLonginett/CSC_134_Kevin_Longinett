/*
@author: Kevin Longinett
@date: 6/30/26
@purpose: This program processes multiple test scores and calculates the class average. 
*/

// include the directives we need for this program
#include <iostream>
using namespace std;

int main()
{
    int score; // stores each test score entered by the user
    int count = 0; // tracks the total number of scores entered
    int passingScores = 0; // counts how many scores are 70 or higher
    float total = 0.0f; // stores the sum of all scores entered
    bool continueEntering = true; // controls whether the loop continues

    // continue accepting scores while the user chooses to keep entering them
    while (continueEntering)
    {
        cout << "Enter a test score (0 - 100): ";
        cin >> score;

        // add the current score to the running total and increase the score count
        total += score;
        count++;

        // count the score if it is considered passing
        if (score >= 70)
        {
            passingScores++;
        }

        // ask the user if they want to enter another score
        cout << "Enter another score? (1 for true, 0 for false): ";
        cin >> continueEntering;
    }

    float average = 0.0f; // stores the calculated average score

    // calculate the average only if at least one score was entered
    if (count > 0)
    {
        average = total / count;
    }

    // display the final results
    cout << "\nResults" << endl;
    cout << "-------" << endl;
    cout << "Scores Entered: " << count << endl;
    cout << "Passing Scores: " << passingScores << endl;
    cout << "Average Score: " << average << endl;

    // determine whether the class average is passing
    bool classPassed = average >= 70.0f;

    // display whether the class average is passing
    cout << "Class Average Passing: " << classPassed << endl;

    return 0;
}
