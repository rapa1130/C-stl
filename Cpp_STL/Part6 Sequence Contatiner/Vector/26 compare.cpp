#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    vector<int> v2;
    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(50);

    if(v==v2){
        cout<<"v==v2"<<endl;
    }
    if(v!=v2){
        cout<<"v!=v2"<<endl;
    }
    if(v<v2){
        cout<<"v<v2"<<endl;
    }
}