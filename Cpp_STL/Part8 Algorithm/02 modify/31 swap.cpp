#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int a=10,b=20;
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    cout<<"a:"<<a<<" b:"<<b<<endl;
    swap(a,b);
    cout<<"a:"<<a<<" b:"<<b<<endl;

    cout<<"v[0]:"<<v[0]<<" v[1]:"<<v[1]<<endl;
    iter_swap(v.begin(),v.begin()+1);
    cout<<"v[0]:"<<v[0]<<" v[1]:"<<v[1]<<endl;

    swap(v[0],v[1]);
    cout<<"v[0]:"<<v[0]<<" v[1]:"<<v[1]<<endl;
}