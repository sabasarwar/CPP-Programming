/*
Date:05-may-2019
Description: implementation of friend class
*/

#include<iostream>
#include<conio.h>
using namespace std;
//forward declaration
class B;
class A
{
private:
    int a,b;
public:
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    
    //friend class declaration
    friend class B;
};

class B
{
public:
    int findmin(A obj)
    {
        return obj.a<obj.b ? obj.a : obj.b;
    }
};

int main()
{
    A obj(10,20);
    B obj2;
    cout<<obj2.findmin(obj);
    cout<<endl;
    return 0;
}
