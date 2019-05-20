/*
Date:05-may-2019
Description:default constructor
*/

#include<iostream>
#include<conio.h>
using namespace std;
class demo
{
public:
    int a,b;
    demo()
    {
        a=20;
        b=5;
    }
    
    int multiply(demo obj)
    {
        return (obj.a*obj.b);
    }
    
};

int main()
{
    demo obj;
    cout<<"\nResult of multiplication is : "<<obj.multiply(obj)<<endl;
    return 0;
}
