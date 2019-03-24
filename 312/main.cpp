#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    string rest;
    string balance;
public:
    explicit Account( string balance );

    void setBalance( string balance )
    {
        if( balance < 0 )
            cout << "初始余额是无效的";
            rest = 0;
        if( balance >= 0 )
            rest = balance;
    }
    string getBalance()
    {
        return rest;
    }
    void credit( string addbalance )
    {
        rest = balance + addbalance;
    }
    void debit( string takebalance )
    {
        if( takebalance <= 0 )
            cout << "Debit amount exceeded account balance." << endl;
        if( takebalance > 0 )
            rest = balance - takebalance;
    }
    void displayMessage()
    {
        cout << "当前余额为: " << getBalance() << endl;
    }
};

int main()
{
    Account account1;
    Account account2;

    account1.credit;
    account2.debit;
    account1.displayMessage();
    account2.displayMessage();
}
