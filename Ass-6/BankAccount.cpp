#include "BankAccount.h"
#include <bits/stdc++.h>
using namespace std;


BankAccount::BankAccount(int no, const string& hol, double bal)
    : accountNumber(no), accountHolder(hol), balance(bal) {
}

void BankAccount::Info() const {
   cout << "Account Number: " << accountNumber << endl;
    cout << "Account Holder: " << accountHolder << endl;
    cout << "Balance: ₹ " << balance << endl;
}

Savings::Savings(int no, const string& hol, double bal, double ir)
    : BankAccount(no, hol, bal), interestRate(ir) {
}

void Savings::Info() const {
    BankAccount::Info();
    cout << "Interest Rate: " << interestRate << "%" << endl;
}

Checking::Checking(int no, const string& hol, double bal, double lim)
    : BankAccount(no, hol, bal), overdraftLimit(lim) {
}

void Checking::Info() const {
    BankAccount::Info();
    cout << "Overdraft Limit: $" << overdraftLimit << endl;
}

