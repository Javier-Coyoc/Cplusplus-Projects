#include <iostream>
#include <string>
using namespace std;

class bankAccount{
    public:
        bankAccount(string accNumber, string name, double initialBalance);
        bool deposit(double amount);
        bool withdraw(double amount);
        double checkBalance();
        string getAccountNumber();
        string getOwnerName();
        void setOwnerName(string name);


    private:
        double initBalance;
        string accountNum;
        string ownerName;
};