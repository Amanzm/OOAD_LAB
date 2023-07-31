// ==========================================================================
// Amanzm
// 31 july 2023
// ==========================================================================

#include<cstdlib>
#include<iostream>
#include<time.h>
using namespace std;

int main()
{
   srand(time(0));   // To generate diff num every time program runs .


int SumArr[13]={0}; 
int i,dice_roll=1, dice_a, dice_b;

while(dice_roll<=36000)
{
    dice_a=(rand()%6)+1;
    dice_b=(rand()%6)+1;
    int sum=dice_a + dice_b;
    SumArr[sum]++; 
// cout<<SumArr[i]<<" "; Check what sum is..
    dice_roll ++;
}cout<<endl;

// Printing Result
i=0;
cout<<"\t"<<"Sum"<<"\t"<<"Occurence"<<endl;
for( i=2;i<13;i++)
{
        cout<<"\t"<<i<<"\t"<<SumArr[i]<<endl;

}
   
}