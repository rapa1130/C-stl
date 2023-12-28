#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool Predicate(int a){
    return a>35;
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

    vector<int>::iterator iter=find(v.begin(),v.end(),20);
    cout<<*iter<<endl;

    iter=find_if(v.begin(),v.end(),Predicate);
    cout<<*iter<<endl;
    
}