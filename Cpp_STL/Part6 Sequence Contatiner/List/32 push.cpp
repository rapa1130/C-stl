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

    for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    lt.push_front(6);
    lt.push_front(7);
    lt.push_front(8);
    for(list<int>::iterator iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    

}