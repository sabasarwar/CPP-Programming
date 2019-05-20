#include<iostream>

using namespace std;

class A{
public:
    int num1;
    int num2;
public:
    A(): num1{0},num2{0}{
        
    }
    A(int x){
        num1=x;
        num2=x;
    }
    
    //opeartor overload
    
    A operator+(A obj){
        A res;
        res.num1=num1+obj.num1;
        res.num2=num2-obj.num2;
        return res;
    }
};


int main(){
    
    A obj1(10),obj2(20),res;
    res=obj1+obj2;
    cout<<"SUM: "<<res.num1<<endl;
    cout<<"DIFF: "<<res.num2<<endl;
    
    return 0;
}