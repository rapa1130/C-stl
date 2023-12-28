#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Accumulation{
    int total;
    public:
    explicit Accumulation(int d=0):total(d){}
    void operator()(int& r){
        total+=r;
        r=total;
    }
};

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    for(vector<int>::size_type i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for_each(v.begin(),v.end(),Accumulation(0));
    for(vector<int>::size_type i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}