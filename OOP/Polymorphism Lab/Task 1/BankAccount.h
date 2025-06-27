#pragma once
#include <iostream>
using namespace std;

// Abstract Class
class BankAccount
{
protected:
	char* Title;
	int AccountNumber;
	double Balance;
public:
	BankAccount(const char* = nullptr, int = 0, double = 0);
	BankAccount(const BankAccount&);
	virtual ~BankAccount();

	virtual void Deposit(double) = 0;
	virtual void Withdraw(double) = 0;
};

