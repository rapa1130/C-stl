#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    vector<int>::iterator iter;
    vector<int>::iterator iter2;
    for(iter=v.begin();iter!=v.end();iter++){
        cout<<*iter<<" ";   
    }
    cout<<endl;

    iter=v.begin()+2;
    iter2=v.erase(iter);
    for(iter=v.begin();iter!=v.end();iter++){
        cout<<*iter<<" ";   
    }
    cout<<endl;
    v.erase(v.begin()+1,v.end());

    for(iter=v.begin();iter!=v.end();iter++){
        cout<<*iter<<" ";   
    }
    cout<<endl;

}