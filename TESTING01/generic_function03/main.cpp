/*
Date:07-may-2019
Description:generic function having more than one type of argument
*/

#include<iostream>
#include<conio.h>
using namespace std;

template <typename T>

T max_value(T a, T b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    cout<<"\nMaximum value is : "<<max_value<int>(6,4)<<endl;
    cout<<"\nMaximum value is : "<<max_value<float>(3.6,4.5)<<endl;
    cout<<"\nMaximum value is : "<<max_value<char>('g','h')<<endl;
    cout<<endl;
    return 0;
}
