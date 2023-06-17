#include<iostream>
using namespace std;

template<typename RetType,typename ArgType>
struct Functor{
    RetType operator()(const ArgType& arg){
        cout<<arg<<endl;
        return RetType();
    }
};

int main(){
    Functor<void,int> functor;
    functor(3);
    cout<<endl;
    Functor<double,double> functor2;
    cout<<functor2(1.4);
}