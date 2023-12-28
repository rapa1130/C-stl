#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int> s;
    s.insert(10);
    s.insert(50);
    s.insert(20);
    s.insert(40);
    s.insert(30);

    for(auto iter=s.begin();iter!=s.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    set<int>::iterator iter=s.find(30);
    if(iter!=s.end()){
        cout<<*iter<<" 가 Set에 있음";
    }else{
        cout<<"셋 안에 없음"<<endl;
    }
}