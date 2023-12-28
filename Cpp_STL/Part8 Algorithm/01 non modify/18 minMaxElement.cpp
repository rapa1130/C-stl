#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    vector<int>::iterator iter;
    iter=max_element(v.begin(),v.end());
    cout<<*iter<<endl;
    iter=min_element(v.begin(),v.end());
    cout<<*iter<<endl;
}