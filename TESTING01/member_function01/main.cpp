/*
Date:21-03-2019
Description: Implementing member functions 1
*/

#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Account
{
private:
    //atributes
    string name;
    double balance;
public:
    //mrthods
    //declare inline
    void set_balance(double bal)
    {
        balance=bal;
    }
    double get_balance()
    {
        return balance;
    }
    
    //methods
    //declared outside the class declaration
    void set_name(string n);
    string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account::set_name(string n)
{
    name=n;
}
string Account::get_name()
{
    return name;
}
bool Account::deposit(double amount)
{
   balance+=amount;
   return true;
}
bool Account::withdraw(double amount)
{
    if(balance-amount >= 0)
    {
        balance-=amount;
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000);
    
    if(frank_account.deposit(200))
        cout<<"\nDeposit ok"<<endl;
    else
        cout<<"\nDeposit not allowed"<<endl;
    
    if(frank_account.withdraw(500))
        cout<<"\nWithdraw ok"<<endl;
    else
        cout<<"\nWithdraw not allowed...low balance"<<endl;
        
    if(frank_account.withdraw(1500))
        cout<<"\nWithdraw ok"<<endl;
    else
        cout<<"\nWithdraw not allowed...low balance"<<endl;
    return 0;
}
