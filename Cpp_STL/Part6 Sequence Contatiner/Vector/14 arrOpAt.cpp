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
    v.at(0)=100;
    v.at(4)=900;
    for(vector<int>::size_type i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v[0]=99;
    v[4]=11;
    for(vector<int>::size_type i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}