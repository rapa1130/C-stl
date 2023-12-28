#include<iostream>
#include<list>
using namespace std;

bool Predicate(int a){
    return a<=30 && a>=10;
}

int main(){
    list<int> lt;
    lt.push_back(10);
    lt.push_back(20);
    lt.push_back(30);
    lt.push_back(40);
    lt.push_back(50);
    lt.push_back(60);
    lt.push_back(70);

    for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    lt.remove_if(Predicate);
    for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}