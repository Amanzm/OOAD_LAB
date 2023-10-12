#include "money.h"
#include<bits/stdc++.h>
using namespace std;

int main() {
    Money money1(10, 50);
    Money money2(5, 75);

     cout << "Money 1: ";
    money1.display();

     cout << "Money 2: ";
    money2.display();

    Money sum = money1 + money2;
     cout << "Sum: ";
    sum.display();

    Money difference = money1 - money2;
     cout << "Difference: ";
    difference.display();

    return 0;
}
