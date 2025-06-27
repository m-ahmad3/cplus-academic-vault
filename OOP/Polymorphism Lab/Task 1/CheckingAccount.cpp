#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(const char* title, int accountNumber, double balance)
	:BankAccount(title,accountNumber,balance){}

CheckingAccount::CheckingAccount(const CheckingAccount& obj)
	:BankAccount(obj){}

void CheckingAccount::Deposit(double amount) {
	this->Balance += amount;
	this->Balance -= fee;

	cout << "Transaction Successful!... " << endl;
	cout << "New Balance: " << this->Balance << endl << endl;
}

void CheckingAccount::Withdraw(double amount) {
	if (amount > this->Balance) {
		cout << "Transaction Not Possible!...\nLow Balance!" << endl;
	}
	else {
		this->Balance -= amount;
		this->Balance -= fee;

		cout << "Transaction Successful!... " << endl;
		cout << "New Balance: " << this->Balance << endl << endl;
	}
}
