#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(const char* title, int accountNumber, double balance)
	:BankAccount(title, accountNumber, balance) {}

SavingsAccount::SavingsAccount(const SavingsAccount& obj)
	: BankAccount(obj) {}

void SavingsAccount::Deposit(double amount) {
	this->Balance += amount;

	cout << "Transaction Successful!... " << endl;
	cout << "New Balance: " << this->Balance << endl << endl;
}

void SavingsAccount::Withdraw(double amount) {
	if (amount > this->Balance) {
		cout << "Transaction Not Possible!...\nLow Balance!" << endl;
	}
	else {
		this->Balance -= amount;

		cout << "Transaction Successful!... " << endl;
		cout << "New Balance: " << this->Balance << endl << endl;
	}
}
