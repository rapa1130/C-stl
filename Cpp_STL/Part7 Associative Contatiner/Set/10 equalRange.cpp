#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(10);
    s.insert(50);
    s.insert(80);
    s.insert(20);
    s.insert(60);
    s.insert(30);

    for (auto iter=s.begin();iter!=s.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    pair<set<int>::iterator,set<int>::iterator> iterPair;
    iterPair=s.equal_range(20);
    cout<<*iterPair.first<<endl;
    cout<<*iterPair.second<<endl;

    iterPair=s.equal_range(90);
    if(iterPair.first!=iterPair.second){
        cout<<"Set에 90 있음"<<endl;
    }else{
        cout<<"Set에 90 없음"<<endl;
    }
}