// ==========================================================================
// Amanzm
// 31 july 2023
// ==========================================================================

#include<iostream>
using namespace std;
float Balance;
void Deposit(float amount)
{
 Balance +=amount;
 cout<<"Yout Balance is"<<Balance<<endl;
}
void Withdraw(float amount)
{
 if(amount>Balance)
 cout<<"Not Enough Balance"<<endl;
 else 
 {
    Balance-=amount;
    cout<<"Yout Balance is"<<Balance<<endl;
 }
}
int main()
{
int z;

cout<<" 1. To Deposit"<<endl;
cout<<" 2. To Withdraw "<<endl;
cin>>z;
float amount;
switch(z)
{
    case 1:
        cout<<" Enter amount to deposit"<<endl;
        cin>>amount;
        Deposit(amount);
    break;
    case 2:
        cout<<" Enter amount to Withdraw"<<endl;
        cin>>amount;
        Withdraw(amount);
    break;
    default:
        cout<<" Chose correct option"<<endl;
    

}
}