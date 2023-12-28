#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Predicate(int a){
    return a<=30;
}

int main(){
    vector<int> v1;
    vector<int> v2(6);
    vector<int> v3(6);

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(30);

    for(vector<int>::size_type i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for(vector<int>::size_type i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    for(vector<int>::size_type i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator iter_end;
    iter_end=replace_copy(v1.begin(),v1.end(),v2.begin(),30,0);
    iter_end=replace_copy_if(v1.begin(),v1.end(),v3.begin(),Predicate,0);

    for(vector<int>::size_type i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for(vector<int>::size_type i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    for(vector<int>::size_type i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;
}