#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(20);
    v1.push_back(40);
    v1.push_back(80);

    vector<int> v2;
    v2.push_back(10);
    v2.push_back(30);
    v2.push_back(50);
    v2.push_back(60);
    v2.push_back(70);

    vector<int> v3(10);
    vector<int>::iterator iter_end;
    iter_end=merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());

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
    cout<<"병합 범위:"<<*v3.begin()<<"~"<<*(iter_end-1)<<endl;
}