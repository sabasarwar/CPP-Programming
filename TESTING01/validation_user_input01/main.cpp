/*
Date: 12-04-2019
Description: Validating user input 
*/

#include<iostream>
#include<conio.h>
#include<limits>
using namespace std;

int main()
{
    int a;
    cout<<"\nEnter an integer : ";
    cin>>a;
    while(1)
    {
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"\nYou have entered wrong input........."<<endl;
            cout<<"\nEnter again : ";
            cin>>a;
        }
        if(!cin.fail())
            break;
    }
    
    cout<<"\nThe number is : "<<a<<endl;
    cout<<endl;
    return 0;
}
