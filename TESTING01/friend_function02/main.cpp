/*
Date:
Description:
*/

#include<iostream>
#include<conio.h>
using namespace std;

//forward declaration of class B
class B;

//class A definition
class A
{
private:
    int a;
public:
    A():a(4) {}
    
    friend int sum(A,B);
    
};

class B
{
private:
    int b;
public:
    B(): b(5) {}
    
    friend int sum(A,B);
};

int sum(A obj1,B obj2)
{
    return(obj1.a+obj2.b);
}

int main()
{
    A obj1;
    B obj2;
    cout<<endl;
    cout<<"\nSum is : "<<sum(obj1,obj2)<<endl;
    return 0;
}
