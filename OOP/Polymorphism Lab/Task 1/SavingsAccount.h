#pragma once
#include "BankAccount.h"

class SavingsAccount :
    public BankAccount
{
public:
    SavingsAccount(const char* = nullptr, int = 0, double = 0);
    SavingsAccount(const SavingsAccount&);

    void Deposit(double) override;
    void Withdraw(double) override;
};

