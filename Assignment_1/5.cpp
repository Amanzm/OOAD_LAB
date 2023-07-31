// ==========================================================================
// Amanzm
// 31 july 2023
// ==========================================================================

#include<iostream>
using namespace std;


void Prime(int n)
{
    int i,j,k;
    int Arr[n];
    for(i=2;i<n;i++) Arr[i]=1; // Assigning 1 to all Arr elements.

    for(i=2;i<n;i++)
    {
        for(j=2;i*j<n;j++)
       { 
        Arr[(j*i)]=0;
       }

    }

// Printing Result.
    for(k=2;k<n;k++) 
   { 
    if(Arr[k]==1) cout<<k<<" | ";
    }
}


int main(){

Prime(1000);

return 0;
}