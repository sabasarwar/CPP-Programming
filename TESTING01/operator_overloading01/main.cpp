/*
Date:28-003-2019
Description: operator overloading using normal function
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
    
    Complex operator +(Complex const &obj)
    {
        Complex res;
        res.real=real+obj.real;   // real=c1.real       obj.real=c2.real
        res.imag=imag+obj.imag;   // imag=c1.imag       obj.imag=c2.imag
        return res;
    }
    
    void print()
    {
        cout<<real<<" + i "<<imag<<endl;
    }
};


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
