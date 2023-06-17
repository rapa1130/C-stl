#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(5);
    v[0]=1;
    v[1]=2;
    v[2]=3;
    v[3]=4;
    v[4]=5;
    cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
    vector<int>().swap(v);
    cout<<"size:"<<v.size()<<" capacity:"<<v.capacity()<<endl;
}