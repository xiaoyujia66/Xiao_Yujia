#include "Account.h"
#include <iostream>
using namespace std;

Account::Account( double initialBalance )
{
    if ( initialBalance >= 0.0 )
        balance = initialBalance;
    else
    {
        cout << "Error: Initial balance cannot be negative.";
        balance = 0.0;
    }
}

void Account::credit( double amount )
{
    balance = balance + amount;
}

bool Account::debit( double amount )
{
    if ( amount > balance )
    {
        cout << "Debit amount exceeded account balance.";
    }
    else
    {
        balance = balance - amount;
        return true;
    }
}

void Account::setBalance( double newBalance )
{
    balance = newBalance;
}

double Account::getBalance()
{
    return balance;
}
