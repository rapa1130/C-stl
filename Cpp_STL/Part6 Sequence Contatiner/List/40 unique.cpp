#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> lt;
    lt.push_back(10);
    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(30);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(10);

    for(auto iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    lt.unique();
    for(auto iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}