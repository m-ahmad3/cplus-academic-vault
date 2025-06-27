#include <iostream>
using namespace std;

// Abstract base class
class BankAccount {
protected:
    char* title;
    int accountNumber;
    double balance;

public:
    BankAccount(const char* = nullptr, int = 0, double = 0);

    virtual void Deposit(double amount) = 0;
    virtual void Withdraw(double amount) = 0;

    virtual ~BankAccount() {}
};

BankAccount::BankAccount(const char* Title, int AccountNumber, double Balance) {
    int size = 0;
    for (int a = 0; Title[a] != '\0'; a++) {
        size++;
    }
    this->title = new char[size + 1];
    for (int a = 0; a < size; a++) {
        this->title[a] = Title[a];
    }
    this->title[size] = '\0';
    
    this->accountNumber = AccountNumber;
    this->balance = Balance;
}

// Derived class for savings account
class SavingsAccount : public BankAccount {
public:
    SavingsAccount(const char* = nullptr, int = 0, double = 0);

    void Deposit(double amount) override;

    void Withdraw(double amount) override;
};

SavingsAccount::SavingsAccount(const char* title, int accountNumber, double balance)
    : BankAccount(title, accountNumber, balance) {}

void SavingsAccount::Deposit(double amount) {
    balance += amount;
    cout << "Deposited: " << amount << endl;
}

void SavingsAccount::Withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    }
    else {
        cout << "Insufficient funds!" << endl;
    }
}

// Derived class for checking account
class CheckingAccount : public BankAccount {
public:
    CheckingAccount(const char* title, int accountNumber, double balance);

    void Deposit(double amount) override;

    void Withdraw(double amount) override;
};

CheckingAccount::CheckingAccount(const char* title, int accountNumber, double balance)
    : BankAccount(title, accountNumber, balance) {}

void CheckingAccount::Deposit(double amount) {
    balance += amount;
    cout << "Deposited: " << amount << endl;
}

void CheckingAccount::Withdraw(double amount) {
    double fee = 0.05 * amount;
    if ((amount + fee) <= balance) {
        balance -= (amount + fee);
        cout << "Withdrawn: " << amount << " (including fee: " << fee << ")" << endl;
    }
    else {
        cout << "Insufficient funds!" << endl;
    }
}

int main() {
    BankAccount* accounts[2];
    accounts[0] = new SavingsAccount("Savings", 12345, 1000);
    accounts[1] = new CheckingAccount("Checking", 54321, 2000);

    for (int i = 0; i < 2; ++i) {
        accounts[i]->Deposit(500);
        accounts[i]->Withdraw(200);
        accounts[i]->Withdraw(2000);
        delete accounts[i];
    }

    return 0;
}
