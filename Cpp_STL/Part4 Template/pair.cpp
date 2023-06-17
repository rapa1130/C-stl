#include<iostream>
#include<string>
using namespace std;

template<typename T1,typename T2>
struct Pair{
        Pair(const T1& first,const T2& second)
            :first(first),second(second){}
        T1 first;
        T2 second;
};
int main(){
    Pair<int,string> pair(1,"abc");
    cout<<pair.first<<endl;
    cout<<pair.second<<endl;
}