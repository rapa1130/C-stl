#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> lt;
    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(1);
    lt.push_back(4);
    lt.push_back(1);
    lt.push_back(5);
    lt.push_back(1);

    for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    lt.remove(1);
    for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

}