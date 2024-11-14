#include <iostream>
#include <string>
#include "bankAccount.h"

bankAccount::bankAccount(string accNumber, string name, double initialBalance)
{
    initBalance = initialBalance;
    accountNum = accNumber;
    ownerName = name;
}
bool bankAccount::deposit(double amount){
    if (amount > 0) 
    {
        initBalance += amount;
        return true;
    }
    else {
        return false;
    }
}
bool bankAccount::withdraw(double amount){
    if(amount > 0 && amount <= initBalance){
        return initBalance -= amount;
        return true;
    } else {
        return false;
    }
}
double bankAccount::checkBalance(){
    return initBalance;
}
string bankAccount::getAccountNumber(){
    return accountNum;
}
string bankAccount::getOwnerName(){
    return ownerName;
}
void bankAccount::setOwnerName(string name){
    ownerName = name;
}