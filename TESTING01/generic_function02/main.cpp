/*
Date:07-may-2019
Description:generic function having more than one type of argument
*/

#include<iostream>
#include<conio.h>
using namespace std;

template <class X,class Y>

Y max_value(X a, Y b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    cout<<"\nMaximum value is : "<<max_value(6,4.5)<<endl;
    cout<<"\nMaximum value is : "<<max_value(3,4.5)<<endl;
    cout<<endl;
    return 0;
}
