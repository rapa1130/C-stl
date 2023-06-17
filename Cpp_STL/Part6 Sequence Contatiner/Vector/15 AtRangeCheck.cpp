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

    try
    {
        cout<<v.at(0)<<endl;
        cout<<v.at(3)<<endl;
        cout<<v.at(6)<<endl;
    }
    catch(out_of_range &e){
        cout<<e.what()<,endl;
    }
}