#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    vector<int>::iterator iter;
    iter=search(v.begin(),v.end(),v2.begin(),v2.end());

    if(iter!=v.end()){
        cout<<*iter<<endl;
        cout<<*(iter-1)<<endl;
        cout<<*(iter+1)<<endl;
    }
}