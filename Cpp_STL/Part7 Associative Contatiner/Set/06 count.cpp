#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(40);
    s.insert(60);
    s.insert(30);

    for(auto iter=s.begin();iter!=s.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    cout<<s.count(20);
    cout<<s.count(100);
}