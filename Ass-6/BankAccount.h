#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
using namespace std;

#include<string>
class BankAccount {
public:
    BankAccount(int , const string &hol, double );

    virtual void Info() const;

protected:
    int accountNumber;
    string accountHolder;
    double balance;
};

class Savings : public BankAccount {
public:
    Savings(int no, const string &hol , double , double );

    void Info() const override;

private:
    double interestRate;
};

class Checking : public BankAccount {
public:
    Checking(int , const string & , double , double );

    void Info() const override;

private:
    double overdraftLimit;
};

#endif

