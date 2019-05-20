/*
Date:25-march-2019
Description:constructor, their types and overloading constructors
*/

#include<iostream>
#include<conio.h>
using namespace std;
class Player
{
private:
    string name;
    int health;
    int xp;
public:
    void set_name(string name_val)
    {
        name=name_val;
    }
    
    //overloaded constructors
    Player()
    {
        cout<<"\nNo args constructor";
    }
    Player(string name)
    {
        cout<<"\nString args constructor";
    }
    Player(string name,int health, int xp)
    {
        cout<<"\nThree args constructor";
    }
    
    ~Player()
    {
        cout<<"\nDestructor called for "<<name<<endl;
    }
};
int main()
{
    {
        Player slayer;
        slayer.set_name("Slayer");
    }
    
    {
        Player frank;
        frank.set_name("Frank");
        Player hero("Hero");
        hero.set_name("Hero");
        Player villain("Villain",100,3);
        villain.set_name("Villain");
    }
    
    Player *enemy=new Player;
    enemy->set_name("Enemy");
    
    Player *levelboss=new Player("Levelboss",100,4);
    levelboss->set_name("Levelboss");
    
    delete enemy;
    delete levelboss;
    return 0;
}
