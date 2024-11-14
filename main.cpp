#include <iostream>
#include <string>
using namespace std;

#include "BankAccount.cpp"

int main() {
    // Create a BankAccount object
    bankAccount myAccount("123456789", "John Doe", 1000.0);

    // Deposit money
    myAccount.deposit(500.0);
    cout << "Balance after deposit: $" << myAccount.checkBalance() << endl;

    // Withdraw money
    myAccount.withdraw(200.0);
    cout << "Balance after withdrawal: $" << myAccount.checkBalance() << endl;

    // Get account details
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Owner Name: " << myAccount.getOwnerName() << endl;

    // Change owner's name
    myAccount.setOwnerName("Jane Doe");
    cout << "Updated Owner Name: " << myAccount.getOwnerName() << endl;

    return 0;
}