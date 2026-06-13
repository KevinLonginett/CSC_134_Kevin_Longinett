/*
 @author: Kevin Longinett
 @date: 6/12/2026
 @purpose: This program prints Avogadro's number using E notation to the console.
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double avogadroNumber = 6.02214076e23;
    cout << "Avogadro's Number = " << scientific<< setprecision(8) << avogadroNumber << endl;
    return 0;
}