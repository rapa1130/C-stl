#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Predicate(int a){
    return a>3;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(1);

    for(vector<int>::size_type i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<count_if(v.begin(),v.end(),Predicate);

    
}