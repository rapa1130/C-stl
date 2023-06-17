#include<iostream>

class Adder{
    public:
    explicit Adder(int n=0)
    :total(n){}
    int operator()(int n){
        return total+=n;
    }
    private:
    int total;
};

int main(){
    using std::cout;
    using std::endl;
    Adder adder(0);
    cout<<adder(10)<<endl;
    cout<<adder(20)<<endl;
    cout<<adder(30)<<endl;
    
}