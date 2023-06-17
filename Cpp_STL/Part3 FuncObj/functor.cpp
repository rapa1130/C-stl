#include<iostream>

class Functor{
    public:
    void operator()(int arg){
        std::cout<<arg<<std::endl;
    }
    void operator()(int a,int b){
        std::cout<<a<<","<<b<<std::endl;
    }
    void operator()(){
        std::cout<<"No arg"<<std::endl;
    }
};

int main(){
    using std::cout;
    using std::endl;
    Functor functor;
    functor(11);
    functor(1,2);
    functor();
}
