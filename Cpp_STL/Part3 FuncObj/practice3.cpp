#include<iostream>

class Adder{
    public:
    int operator()(int a,int b){
        return a+b;
    }
};

int main(){
    Adder add;
    int sum=add(10,20);
    std::cout<<"sum = "<<sum<<std::endl;
}