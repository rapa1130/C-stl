#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> lt;
    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(4);
    lt.push_back(5);

    for(auto iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    lt.reverse();

    for(auto iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}