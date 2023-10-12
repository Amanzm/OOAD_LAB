#include <bits/stdc++.h>
#include "BankAccount.h"
using namespace std;

int main() {
    int no;
    string holder;
    double bal, ir, limit;

    cout << "Enter account no.: ";
    cin >> no;
    cout << "Enter account holder name: ";
    //cin.ignore(); 
    getline(cin, holder);
    cout << "Enter balance: $";
    cin >> bal;

    BankAccount* account = nullptr;

    cout << "Choose account type (1 for Savings, 2 for Checking): ";
    int accountType;
    cin >> accountType;

    if (accountType == 1) {
        cout << "Enter interest rate: ";
        cin >> ir;
        account = new Savings(no, holder, bal, ir);
    } else if (accountType == 2) {
        cout << "Enter overdraft limit: $";
        cin >> limit;
        account = new Checking(no, holder, bal, limit);
    }

    if (account != nullptr) {
        cout << "Account Information:" << endl;
        account->Info();
        delete account;
    } else {
        std::cout << "Invalid account type." << endl;
    }

    return 0;
}

