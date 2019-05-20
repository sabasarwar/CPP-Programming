/*
Date:05-may-2019
Description: Accessing data members using friend function
*/

#include<iostream>
#include<conio.h>
using namespace std;

class Person
{

private:
//protected:
    string name;
public:
    Person(): name{"saba"} {};
    friend void printstring(Person obj);
};

void printstring(Person obj)
{
    cout<<"\nName is : "<<obj.name<<endl;
    cout<<endl; 
}

int main()
{
    Person obj;
    printstring(obj);
    return 0;
}
