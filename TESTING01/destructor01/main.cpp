/*
Date:05-may-2019
Description:parameterized constructor
*/

#include<iostream>
#include<conio.h>
using namespace std;

class demo
{
    int a,b;
public:
    demo(): a(0), b(0) {}
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    
    int multiply(demo obj)
    {
        return (obj.a*obj.b);
    }
    
    ~demo()
    {
        cout<<"\ndestructor is called here......"<<endl;
        cout<<"\n..................................."<<endl;
    }
};

int main()
{
    demo obj;
    demo obj2(6,5);
    cout<<"\nResult after multiplication is : "<<obj.multiply(obj2)<<endl;
    return 0;
}
