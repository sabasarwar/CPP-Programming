/*************
 * Description : Understanding working of regex
 * Date : 15 Feb,2019
 ************/


#include <iostream>

using namespace std;

class Complex{
private:
    int real;
    int img;
public:
    //constructor
    Complex(int r, int i){
        real=r;
        img=i;
    }
    //normal overloading
    Complex operator+(Complex const &obj){
        return Complex(real+obj.real,img+obj.img);
    }
    void print(){
        cout<<"Real: "<<real<<endl;
        cout<<"Imaginary: "<<img<<endl;
    }
    //friend function
    friend Complex operator+(Complex const &obj, int num);
    friend float operator+(Complex const &obj, float num);
};

    Complex operator+(Complex const &obj, int num){
        cout<<"\nfriend function(complex,int) is called"<<endl;
        return Complex(obj.real-num,obj.img*num);
    }
    
    float operator+(Complex const &obj, float num){
        cout<<"\nfriend function(with float return) is called"<<endl;
        return (obj.real/num);
    }

int main () {

    float num{0},op{0.5};
    Complex c1(3,4),c2(4,5);
    Complex c3=c1+c2;
    c3.print();
    Complex c4=c1+5;
    c4.print();
    num=c1+op;
    cout<<"\nReturned floating value: "<<num<<endl;
    cout<<endl;
   return 0;
}