#include <iostream>
using namespace std;

int main()
{
    string password;
    int attempts = 3;
    do {
        if (attempts == 0)
        {
            break;
        }
        cout << "Enter a password: \n";
        cin >> password;
        attempts -= 1;
    } while (password != "abc123");

    return 0;
}