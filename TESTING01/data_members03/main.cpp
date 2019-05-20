/*
Date: 20-03-2019
Description: Access Specifiers - private and public
*/

#include<iostream>
#include<conio.h>
using namespace std;
class Player
{
private:
    //attributes
    string name{"Players... "};
    int health;
    int xp;
public:
    //methods
    void talk(string text_to_say)
    {
        cout<<name<<" says "<<text_to_say<<endl;
    }
    bool is_dead();
};
int main()
{
    Player frank;
    //frank.name="Frank"; 
    //cout<<frank.health<<endl;
    frank.talk("Hello there");
    return 0;
}
