/*
Date:05-may-2019
Description:copy constructor
*/

#include<iostream>
#include<conio.h>
using namespace std;

class demo
{
private:
    int a,b;
public:
    demo(int x,int y)
    {
        a=x;
        b=y;
    }
    
    demo(demo &obj2)
    {
        a=obj2.a;
        b=obj2.b;
    }
    
    int get_a()
    {
        return a;
    }
    
    int get_b()
    {
        return b;
    }

};

int main()
{
    //normal paratmeterized constructor called here
    demo obj1(13,23);
    
    //copy constructor called here
    demo obj2=obj1;
    
    //accessing values assigned by the constructor
    cout<<"\nvalues accessed by normal parameterized constructor : "<<endl;
    cout<<"\nobj1.a = "<<obj1.get_a()<<"       "<<"obj1.b = "<<obj1.get_b()<<endl;
    
    cout<<"\nvalues accessed by copy constructor : "<<endl;
    cout<<"\nobj2.a = "<<obj2.get_a()<<"        "<<"obj2.b = "<<obj2.get_b()<<endl;
    return 0;
}
