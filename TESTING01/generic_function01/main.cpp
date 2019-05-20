/*
Date:07-may-2019
Description:generic function heving similar type of arguments
*/

#include<iostream>
#include<conio.h>
using namespace std;
template <class X>

X max_value(X a,X b)
{
    if(a>b)
        return a;
    else
        return b;
}


int main()
{
    cout<<"\nMaximum value is : "<<max_value(3,4)<<endl;
    cout<<"\nMaximum value is : "<<max_value(3.4,4.5)<<endl;
    return 0;
}
