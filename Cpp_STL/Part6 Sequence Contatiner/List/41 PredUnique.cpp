#include<iostream>
#include<list>
using namespace std;

bool Predicate(int a,int b){
    return b-a<=0;
}

int main(){
    list<int> lt;
    lt.push_back(1);
    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(3);
    lt.push_back(3);
    lt.push_back(4);
    lt.push_back(5);
    lt.push_back(1);

    list<int>::iterator iter;
    for(iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    lt.unique(Predicate);

    for(iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    
}