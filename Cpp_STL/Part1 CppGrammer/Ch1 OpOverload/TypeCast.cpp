#include<iostream>

using std::cout;
using std::endl;
using std::cin;

class A{};

class B{
    public:
    B(){}
    B(A& a){
        cout<<"B(A&) is called"<<endl;
    }
    explicit B(int i){
        cout<<"B(int) is called"<<endl;
    }
    explicit B(double b){
        cout<<"B(double) is called"<<endl;
    }
    operator int(){
        return 10;
    }
    operator A(){
        return A();
    }

    };

int main(void){
    B bObj;
    A a;
    bObj=a;
    a=bObj;
    
}