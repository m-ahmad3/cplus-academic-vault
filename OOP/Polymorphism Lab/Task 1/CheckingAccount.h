#pragma once
#include "BankAccount.h"

class CheckingAccount :
    public BankAccount
{
    double fee = 30.0;
public:
    CheckingAccount(const char* = nullptr, int = 0, double = 0);
    CheckingAccount(const CheckingAccount&);

    void Deposit(double) override;
    void Withdraw(double) override;
};

