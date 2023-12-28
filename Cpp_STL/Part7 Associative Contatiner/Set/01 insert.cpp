#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(8);
    s.insert(4);
    s.insert(1);
    s.insert(7);
    s.insert(9);

    for(set<int>::iterator iter=s.begin();iter!=s.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    s.insert(7);
    s.insert(7);
    for(set<int>::iterator iter=s.begin();iter!=s.end();iter++){
        cout<<*iter<<" ";
    }
}