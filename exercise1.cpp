#include <iostream>
using namespace std;

int main()
{
    int array[10];
    int sum = 0;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter a number: \n";
        cin >> array[i];
    }
    cout << "Contents of the array are: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << endl;
        sum = sum + array[i];
    }
    cout << "The sum of the numbers in the array are: " << sum << endl;

    return 0;
}