#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Predicate(int a,int b){
    return abs(a-b)<=5;
}
int main(){
    vector<int> v1;
    vector<int> v2;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    v2.push_back(11);
    v2.push_back(25);
    v2.push_back(33);
    v2.push_back(46);
    v2.push_back(50);
    pair<vector<int>::iterator,vector<int>::iterator> iter_pair;
    iter_pair=mismatch(v1.begin(),v1.end(),v2.begin(),Predicate);
    cout<<*iter_pair.first<<endl;
    cout<<*iter_pair.second<<endl;
}