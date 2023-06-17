#include<iostream>
#include<functional>

struct Plus{
    int operator()(int a,int b){
        return a+b;
    }
};
struct Minus{
    int operator()(int a,int b){
        return a-b;
    }
};

int main(){
    using std::cout;
    using std::endl;

    cout<<Plus()(10,20)<<endl;
    cout<<Minus()(20,10)<<endl;
    using std::plus;
    using std::minus;
    cout<<plus<int>()(10,20)<<endl;
    cout<<minus<int>()(20,10)<<endl;

    return 0;
}
