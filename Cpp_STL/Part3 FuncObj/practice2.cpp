#include<iostream>

class Equal{
    public:
    bool operator()(int a,int b){
        return a==b;
    }
};

int main(){
    Equal cmp;
    using std::cout;
    if(cmp(10,20)){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
}