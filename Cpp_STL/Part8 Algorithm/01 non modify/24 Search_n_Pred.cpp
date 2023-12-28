#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Predicate(int a,int b){
    return abs(a-b)<=5;
}

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(28);
    v.push_back(31);
    v.push_back(33);
    v.push_back(40);
    v.push_back(50);
    vector<int>::iterator iter;
    iter=search_n(v.begin(),v.end(),3,30,Predicate);
    if(iter!=v.end()){
        cout<<*iter<<endl;
        cout<<*(iter-1)<<endl;
        cout<<*(iter+1)<<endl;
    }
    
}