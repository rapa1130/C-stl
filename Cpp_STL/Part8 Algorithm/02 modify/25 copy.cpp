#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(40);
    v1.push_back(30);
    v1.push_back(50);

    vector<int> v2(5);
    vector<int>::iterator iter;
    iter=copy(v1.begin(),v1.end(),v2.begin());
    
    if(iter!=v2.end()){
        cout<<*(iter-1)<<endl;
    }
    v2.back()=99;
    for(vector<int>::size_type i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    for(vector<int>::size_type i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
}