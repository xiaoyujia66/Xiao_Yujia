#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account
{
    public:
        CheckingAccount( double, double );

        virtual void credit( double );
        virtual bool debit( double );
    private:
        double transactionFee;
};

#endif // CHECKINGACCOUNT_H
