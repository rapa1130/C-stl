#include<iostream>
#include<algorithm>
//함수 객체의 서명이 같아도 타입이 다르면 다르게 인식!!!!!

struct Functor1{
    void operator()(int arg){
        std::cout<<"In first:"<<arg<<std::endl;        
    }
};
struct Functor2{
    void operator()(int arg){
        std::cout<<"In second:"<<arg<<std::endl;        
    }
};
struct Functor3{
    void operator()(int arg){
        std::cout<<"In third:"<<arg<<std::endl;
    }
};

int main(){
    using std::for_each;
    int a[5]={1,2,3,4,5};
    for_each(a,a+5,Functor1());
    for_each(a,a+5,Functor2());
    for_each(a,a+5,Functor3());
}
