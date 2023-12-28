#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> lt1;
    list<int> lt2;

    lt1.push_back(50);
    lt1.push_back(40);
    lt1.push_back(30);
    lt1.push_back(20);
    lt1.push_back(10);

    lt2.push_back(45);
    lt2.push_back(35);
    lt2.push_back(15);
    
    

    for(auto iter=lt1.begin();iter!=lt1.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    for(auto iter=lt2.begin();iter!=lt2.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    //lt1.merge(lt2);
    lt1.merge(lt2,greater<int>());
    

    for(auto iter=lt1.begin();iter!=lt1.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    for(auto iter=lt2.begin();iter!=lt2.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    
}