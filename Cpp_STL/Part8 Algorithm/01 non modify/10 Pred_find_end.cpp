#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Predicate(int a,int b){
    return a<=b;
}

int main(){
    vector<int> v1;
    v1.push_back(40);
    v1.push_back(50);
    v1.push_back(60);
    v1.push_back(10);
    v1.push_back(11);
    v1.push_back(12);
    v1.push_back(80);
    vector<int> v2;
    v2.push_back(10);
    v2.push_back(15);
    v2.push_back(25);
    vector<int>::iterator iter;
    iter=find_end(v1.begin(),v1.end(),v2.begin(),v2.end(),Predicate);
    cout<<*(iter-1)<<endl;
    cout<<*(iter)<<endl;
    cout<<*(iter+1)<<endl;
    
}