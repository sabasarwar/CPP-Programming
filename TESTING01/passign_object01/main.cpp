/*
Date:05-may-2019
Description:passing object as argument
*/

#include<iostream>
#include<conio.h>
using namespace std;

class temp
{
public:
    int a;

    temp(): a(0) {}
    temp(int x)
    {
        a=x;
    }
    void add_numbers(temp obj)
    {
         a=a+obj.a;
    }
    
};

int main()
{
    temp obj1(10);
    temp obj2(20);
    cout<<"\ninitial values are"<<endl;
    cout<<"\nfirst object : "<<obj1.a<<endl;
    cout<<"\nsecond object : "<<obj2.a<<endl;
    cout<<"\n..............................."<<endl;
    //passing object as argemunt to the function
    obj2.add_numbers(obj1);
    
    cout<<"\nfinal values are"<<endl;
    cout<<"\nfirst object : "<<obj1.a<<endl;
    cout<<"\nsecond object : "<<obj2.a<<endl;
    return 0;
}
