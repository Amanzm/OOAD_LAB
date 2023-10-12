#include "money.h"
#include<bits/stdc++.h>
using namespace std;

Money::Money() : dollars(0), cents(0) {}

Money::Money(int dollars, int cents) : dollars(dollars), cents(cents) {}

Money Money::operator+(const Money& other) const {
    int totalDollars = dollars + other.dollars;
    int totalCents = cents + other.cents;

    if (totalCents >= 100) {
        totalDollars += totalCents / 100;
        totalCents %= 100;
    }

    return Money(totalDollars, totalCents);
}

Money Money::operator-(const Money& other) const {
    int totalDollars = dollars - other.dollars;
    int totalCents = cents - other.cents;

    if (totalCents < 0) {
        totalDollars -= 1;
        totalCents += 100;
    }

    if (totalDollars < 0) {
        totalDollars = 0;
        totalCents = 0;
    }

    return Money(totalDollars, totalCents);
}

int Money::getDollars() const {
    return dollars;
}

int Money::getCents() const {
    return cents;
}

void Money::display() const {
   cout << "$" << dollars << "." << cents << endl;
}
