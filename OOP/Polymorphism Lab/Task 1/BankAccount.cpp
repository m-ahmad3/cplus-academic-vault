#include "BankAccount.h"

BankAccount::BankAccount(const char* title, int accountNumber, double balance){
	if (title != nullptr) {
		int size = 0;
		for (int a = 0; title[a] != '\0'; a++) {
			size++;
		}
		this->Title = new char[size + 1];
		for (int a = 0; a < size; a++) {
			this->Title[a] = title[a];
		}
		this->Title[size] = '\0';
	}
	else {
		this->Title = nullptr;
	}

	this->AccountNumber = accountNumber;
	this->Balance = balance;
}

BankAccount::BankAccount(const BankAccount& obj) {
	if (obj.Title != nullptr) {
		int size = 0;
		for (int a = 0; obj.Title[a] != '\0'; a++) {
			size++;
		}
		this->Title = new char[size + 1];
		for (int a = 0; a < size; a++) {
			this->Title[a] = obj.Title[a];
		}
		this->Title[size] = '\0';
	}
	else {
		this->Title = nullptr;
	}

	this->AccountNumber = obj.AccountNumber;
	this->Balance = obj.Balance;
}

BankAccount::~BankAccount() {
	if (Title != nullptr) {
		delete[] Title;
		Title = nullptr;
	}
}