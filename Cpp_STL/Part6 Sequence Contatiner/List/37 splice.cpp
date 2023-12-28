#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> lt1;
    list<int> lt2;

    lt1.push_back(1);
    lt1.push_back(2);
    lt1.push_back(3);
    lt1.push_back(4);
    lt1.push_back(5);

    lt2.push_back(10);
    lt2.push_back(20);
    lt2.push_back(30);
    lt2.push_back(40);
    lt2.push_back(50);

    list<int>::iterator iter;

    for(iter= lt1.begin();iter!=lt1.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    for(iter=lt2.begin();iter!=lt2.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    iter=lt1.begin();
    iter++;
    iter++;

    lt1.splice(iter,lt2);
    for(iter= lt1.begin();iter!=lt1.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    for(iter=lt2.begin();iter!=lt2.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
      
}