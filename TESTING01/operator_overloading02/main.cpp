/*
Date:28-003-2019
Description: operator overloading using friend function
*/

#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
    int real,imag;
public:
    Complex(int r=0,int i=0)
    {
        real=r;
        imag=i;
    }
    
    friend Complex operator +(Complex const &, Complex const &);
   
    void print()
    {
        cout<<real<<" + i "<<imag<<endl;
    }
};

Complex operator +(Complex const &c1, Complex const &c2)
{
    return Complex(c1.real+c2.real , c1.imag+c2.imag);
}
int main()
{
    Complex c1(2,3);
    Complex c2(1,2);
    c1.print();
    c2.print();
    Complex c3=c1+c2;       // c1+c2 means c1.operator(c2)
    c3.print();
    return 0;
}
