#include<iostream>
#include<string>

using namespace std;
class TestGrader{

string Ans;

public:
void setKey(string ans);
void  grade(string ans);



};
void TestGrader:: setKey( string ans)
{
   
    Ans=ans;

}
void TestGrader:: grade(string ans)
{
     if(ans.length()!=20)
        {cout<<"Attempt all 20";
        return;}
    int i,corr=0,j=0,k;
    string s;
    int wrong[20];
    for (i=0;i<ans.length();i++)
    {
        if(Ans[i]==ans[i])
            corr++;
            else 
            wrong[j++]=i+1;

        
    }
cout<<"Incorrectly Answered Questions :"<<endl;

for ( k=0;k<j;k++)
    {
        cout<<wrong[k]<<" ";
    }
    cout<<endl;
    if(corr>=15)
    s="PASSED";
    else
    s="FAILED";

cout<<s<<endl;
cout<<"Correctly Answered :"<<corr<<endl;
cout<<"Incorrectly Answered :"<<20-corr<<endl;

    
}

int main(){
    TestGrader c1;
    c1.setKey("AAAAAAAAAAAAAAAAAAAA");
    c1.grade("ACAADAAAAABBAAACAADA");

}