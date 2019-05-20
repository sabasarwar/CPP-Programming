#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include<string>
class Account
{
private:
    //atributes
    std::string name;
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
    void set_name(std::string n);
    std::string get_name();
    
    bool deposit(double amount);
    bool withdraw(double amount);
};
 
#endif // _ACCOUNT_H_
