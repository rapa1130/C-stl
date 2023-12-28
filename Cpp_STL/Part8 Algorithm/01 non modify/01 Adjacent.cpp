#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    for(vector<int>::size_type i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator iter;
    iter=adjacent_find(v.begin(),v.end());
    if(iter!=v.end()){
        cout<<*iter<<endl;
    }
    for(;iter!=v.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}