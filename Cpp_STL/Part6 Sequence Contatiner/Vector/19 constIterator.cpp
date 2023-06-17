#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    vector<int>::iterator iter=v.begin();
    vector<int>::const_iterator citer=v.begin();

    cout<<*iter<<endl;
    cout<<*citer<<endl;
    cout<<*++iter<<endl;
    cout<<*++citer<<endl;

    *iter=100;
    //*citer=99;
}