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

    
    lt2.push_back(6);
    lt2.push_back(7);
    lt2.push_back(8);
    lt2.push_back(9);
    lt2.push_back(10);
    list<int>::iterator iter;
    list<int>::iterator iter2;
    for(iter=lt1.begin();iter!=lt1.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    for(iter=lt2.begin();iter!=lt2.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    iter=lt1.begin();
    iter++;
    iter2=lt2.begin();
    iter2++;
    iter2++;
    lt1.splice(iter,lt2,iter2);

    for(iter=lt1.begin();iter!=lt1.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    for(iter=lt2.begin();iter!=lt2.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    lt1.splice(lt1.end(),lt2,lt2.begin(),lt2.end());
    for(iter=lt1.begin();iter!=lt1.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    for(iter=lt2.begin();iter!=lt2.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

}