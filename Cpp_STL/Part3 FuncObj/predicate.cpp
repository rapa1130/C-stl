// Created on iPad.

#include <iostream>
using namespace std;

bool isLess(int a,int b){
    return a<b;
}
struct Less{
    bool operator()(int a,int b){
        return a<b;
    }
};

int main() {
    using std::cout;
    using std::endl;

    cout<<isLess(10,20)<<endl;
    cout<<isLess(20,10)<<endl;
    cout<<endl;
    Less less;
    cout<<less(10,20)<<endl;
    cout<<less(20,10)<<endl;
    cout<<endl;
    
    cout<<Less()(10,20)<<endl;
    
    cout<<less.operator()(10,20)<<endl;
    cout<<Less().operator()(20,10)<<endl;
    return 0;
}