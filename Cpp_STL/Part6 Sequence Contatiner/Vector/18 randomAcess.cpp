#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int>::iterator iter=v.begin();
    cout<<*iter<<endl;
    iter+=2;
    cout<<*iter<<endl;
    iter-=1;
    cout<<*iter<<endl;
    
}