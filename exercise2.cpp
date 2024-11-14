#include <iostream>
using namespace std;

int main() 
{
    int n = 0;
    int displayNumber;
    int sum = 0;

    cout << "Enter any positive integer: \n";
    cin >> n;
    sum = n;
    displayNumber = n;

    while(n > 0)
    {
        n--;
        sum = sum + n;
    }
    cout << "The sum from 1 to " << displayNumber << " is equal to " << sum << endl;
}