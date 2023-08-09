#include<iostream>
using namespace std;
class Complex{

 double real;
 double imag;

public:
Complex(double real, double imag)
{
    this->real=real;
    this->imag=imag;
cout<<this->real<<" "<<imag<<endl;
}
Complex Add( Complex &c2);
Complex Sub(Complex &c2);
void Print(){
    cout<<"( "<<real<<" ,"<<imag<<" )" <<endl;
}
};
Complex Complex:: Add(Complex& c2){
    double real=this->real+c2.real;
    double imag=this->imag+c2.imag;
     return Complex(real,imag);;
}
Complex  Complex:: Sub(Complex &c2){
    double real=this->real-c2.real;
    double imag=this->imag-c2.imag;
    return Complex(real,imag);
}
int main(){
    Complex a1(2,4);
        Complex *a2=new Complex(-3,-4);

    Complex a3= a2->Add(a1);
    a3.Print();
    
}