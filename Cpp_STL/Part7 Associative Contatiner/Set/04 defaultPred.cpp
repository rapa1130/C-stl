#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int,greater<int>> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    for(set<int>::iterator iter=s.begin();iter!=s.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    
    
}