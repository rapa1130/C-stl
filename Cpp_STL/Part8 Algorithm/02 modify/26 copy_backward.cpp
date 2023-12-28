#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);   
    v1.push_back(4);
    v1.push_back(5);

    vector<int> v2(10);
    vector<int>::iterator iter;
    iter=copy_backward(v1.begin(),v1.end(),v2.end());
    cout<<*iter<<endl;
    for(vector<int>::size_type i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(vector<int>::size_type i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    
}