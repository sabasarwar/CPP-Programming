/*
Date:
Description:
*/

#include<iostream>
#include<conio.h>
using namespace std;

class circle
{
private:
    int radius;
public:
    circle(): radius(0) {}
    circle(int x)
    {
        radius=x;
        count++;
    }
    
    //friend function declaration
    friend double area(circle obj);
    
    
    //static data member declared
    static int count;
    
};

//initialization of static data member
int circle::count=0;

//friend function definition
double area(circle obj)
{
    return (2*3.14*obj.radius);
}

int main()
{
    circle obj;
    circle obj1(5);
    circle obj2(4);
    circle obj3(3);
    cout<<"\narea of circle 1 is : "<<area(obj1)<<endl;
    cout<<"\narea of circle 2 is : "<<area(obj2)<<endl;
    cout<<"\narea of circle 3 is : "<<area(obj3)<<endl;
    
    cout<<"\ntotal number of objects created are : "<<circle::count<<endl;
    
    return 0;
}
