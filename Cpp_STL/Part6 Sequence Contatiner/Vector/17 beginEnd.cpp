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

    for(vector<int>::size_type i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;



}