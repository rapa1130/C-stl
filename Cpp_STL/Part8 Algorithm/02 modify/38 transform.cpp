#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Func(int a){
    return a+5;
}

int main(){

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for(vector<int>::size_type i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    transform(v.begin(),v.end(),v.begin(),Func);

    for(vector<int>::size_type i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}