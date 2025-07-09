/*
 Author:Hope Kimani
 Reg no:BBIT-01-0009/2025
 Description:Program to help calculate the body mass index.
 Date:28/05/2025
 Version 1
 */

#include <iostream>
using namespace std;

class AccountHolder {
protected:
    string name;

public:
    void setName(string n) {
        name = n;
    }

    string getName() {
        return name;
    }
};

class BankAccount : public AccountHolder {
private:
    int accountNumber;
    double balance;

public:

    BankAccount(string n, int accNum, double bal) {
        name = n;              
        accountNumber = accNum;
        balance = bal;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:

    SavingsAccount(string n, int accNum, double bal, double rate)
        : BankAccount(n, accNum, bal) {
        interestRate = rate;
    }

    double getInterestRate() {
        return interestRate;
    }
};


int main() {

    SavingsAccount acc("Hope", 123, 200000.0, 3.5);

    cout << "Account Holder Name: " << acc.getName() << endl;
    cout << "Account Number: " << acc.getAccountNumber() << endl;
    cout << "Balance: $" << acc.getBalance() << endl;
    cout << "Interest Rate: " << acc.getInterestRate() << "%" << endl;

    return 0;
}