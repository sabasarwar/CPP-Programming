/*
Date:05-may-2019
Description: Accessing data members using different access specifiers
*/

#include<iostream>
#include<conio.h>
using namespace std;

class Person
{
public:
//private:
//protected:
    string name;
//public:
    Person(): name{NULL} {};
    void printstring()
    {
        cout<<"\nName is : "<<name<<endl;
        cout<<endl; 
    }
};
int main()
{
    Person obj;
    obj.name="Mohammad Anas";
    obj.printstring();
    return 0;
}
