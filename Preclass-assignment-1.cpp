#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    double feet, inches, totalCentimeters;

    // Ask user for input and store it
    cout << "Enter any number representing feet: " << endl;
    cin >> feet;
    cout << "Enter any number represnting inches: " << endl;
    cin >> inches;

    // Calculate both the feet and inches into centimeters (cm) and print it
    totalCentimeters = feet * 30.48 + inches * 2.54;
    cout << " The total centimeters are: " << totalCentimeters << endl;


}