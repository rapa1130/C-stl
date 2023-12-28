#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;

    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(40);

    v2.push_back(10);
    v2.push_back(20);
    v2.push_back(30);

    v3.push_back(10);
    v3.push_back(50);
    v3.push_back(0);

    if(lexicographical_compare(v1.begin(),v1.end(),v2.begin(),v2.end())){
        cout<<"v1 < v2"<<endl;
    }else{
        cout<<"v1 >= v2"<<endl;
    }

    if(lexicographical_compare(v1.begin(),v1.end(),v3.begin(),v3.end())){
        cout<<"v1 < v3"<<endl;
    }else{
        cout<<"v1 >= v3"<<endl;
    }
}