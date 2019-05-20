/*
Date:21-03-2019
Description:Implementing member functions 2
*/

#include<iostream>
#include<conio.h>
#include "Account.h"
using namespace std;
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
