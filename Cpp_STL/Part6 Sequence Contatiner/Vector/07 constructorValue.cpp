#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1(5);
    for(vector<int>::size_type i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    vector<int> v2(5,0);
    for(vector<int>::size_type i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    vector<int> v3(5,10);
    for(vector<int>::size_type i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    
}