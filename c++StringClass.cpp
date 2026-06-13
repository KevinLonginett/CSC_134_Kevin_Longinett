/*
@author: Kevin Longinett
@date: 6/12/2026
@purpose: This program prints "Today I am 25 years old!" to the console using c++ string class.
*/

//includethe directives we need for this program
#include <iostream>
#include <string>
using namespace std;

int main(){
    string verbiage = "Today I am";
    string age = "25";
    string verbiage_end = "years old!";
    cout << verbiage << " " << age << " " << verbiage_end << endl;
    return 0;
}