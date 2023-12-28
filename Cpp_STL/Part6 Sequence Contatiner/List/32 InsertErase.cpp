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
    list<int>::iterator iter=lt.begin();
    list<int>::iterator iter2;
    iter++;
    iter++;
    iter2=lt.erase(iter);

    for(iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    cout<<*iter2<<endl;

    iter=iter2;
    iter2=lt.insert(iter,300);
 
    for(iter=lt.begin();iter!=lt.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    cout<<*iter2<<endl;
   
}