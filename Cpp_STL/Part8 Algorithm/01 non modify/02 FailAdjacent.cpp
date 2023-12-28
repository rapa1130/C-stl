#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(vector<int>::size_type i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator iter_b=v.begin();
    vector<int>::iterator iter_e=v.begin()+2;

    vector<int>::iterator iter=adjacent_find(iter_b,iter_e);

    if(iter!=iter_e){
        cout<<*iter<<endl;
    }
    if(iter!=v.end()){
        cout<<*iter<<endl;
    }

    iter_e=v.end();
    iter=adjacent_find(iter_b,iter_e);
    if(iter!=iter_e){
        cout<<*iter<<endl;
    }
    if(iter!=v.end()){
        cout<<*iter<<endl;
    }
}