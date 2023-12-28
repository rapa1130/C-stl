#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int,less<int>> s;
    cout<<(!s.key_comp()(20,50)&&!s.key_comp()(50,20))<<endl;
    cout<<(!s.key_comp()(50,50)&&!s.key_comp()(50,50))<<endl;
}