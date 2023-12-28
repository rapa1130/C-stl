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
    vector<int>::iterator iter;
    iter=v.begin()+2;
    vector<int>::iterator iter2;
    iter2=v.insert(iter,99);   
    for(iter=v.begin();iter!=v.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
    cout<<*iter2<<endl;

}