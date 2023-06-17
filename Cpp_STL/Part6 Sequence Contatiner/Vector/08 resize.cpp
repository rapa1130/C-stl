#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1(5);
    v1[0]=10;
    v1[1]=20;
    v1[2]=30;
    v1[3]=40;
    v1[4]=50;
    for(vector<int>::size_type i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"size:"<<v1.size()<<" capacity:"<<v1.capacity()<<endl;

    v1.resize(10);
    for(vector<int>::size_type i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"size:"<<v1.size()<<" capacity:"<<v1.capacity()<<endl;

    v1.resize(5);
    for(vector<int>::size_type i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    cout<<"size:"<<v1.size()<<" capacity:"<<v1.capacity()<<endl;
    
}