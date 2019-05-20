/*
Date:05-may-2019
Description:inline function
*/

#include<iostream>
#include<conio.h>
using namespace std;

class A
{

    int a,b;
public:
    A()
    {
        a=0;
        b=0;
    }
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    
    inline int max_number(A obj)
    {
        return (obj.a > obj.b) ? obj.a : obj.b ;
    }
    
};

int main()
{
    A obj;
    A obj1(10,20);
    A obj2(20,30);
    cout<<endl<<obj.max_number(obj1)<<endl;
    cout<<endl<<obj.max_number(obj2)<<endl;
    return 0;
}
