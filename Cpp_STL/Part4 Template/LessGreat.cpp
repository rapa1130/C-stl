#include<iostream>
#include<algorithm>
using namespace std;

template<typename T>
struct Less{
    bool operator()(T left,T right){
        return left<right;
    }
};
template<typename T>
struct Grater{
    bool operator()(T left,T right){
        return left>right;
    }
};

int main(){
    cout<<less<int>()(1,2)<<endl;
    cout<<Less<int>()(1,3)<<endl;
    cout<<Less<string>()("abc","abb")<<endl;
    cout<<Grater<string>()("abd","abc")<<endl;
}