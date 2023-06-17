#include<iostream>

using namespace std;

template<typename T>
void print(T a){
    cout<<a<<endl;
}
template <typename T1,typename T2>
void print2(T1 a,T2 b){
    cout<<a<<","<<b<<endl;
}

int main(){
    print(1);
    print2(2,"dd");
}