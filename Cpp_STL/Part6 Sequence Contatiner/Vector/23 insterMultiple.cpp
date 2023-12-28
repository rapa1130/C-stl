#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    vector<int>::iterator iter=v.begin()+2;
    v.insert(iter,3,100);
    for(iter=v.begin();iter!=v.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    vector<int> v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);

    iter=v2.begin()+1;

    v2.insert(iter,v.begin(),v.end());

    for(iter=v2.begin();iter!=v2.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    
}