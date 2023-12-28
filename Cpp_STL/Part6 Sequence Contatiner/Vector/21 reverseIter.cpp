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

    vector<int>::iterator iter;
    vector<int>::reverse_iterator riter;
    reverse_iterator<vector<int>::iterator> riter2;
    for(iter=v.begin();iter!=v.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    for(riter=v.rbegin();riter!=v.rend();riter++){
        cout<<*riter<<" ";
    }
    cout<<endl;

    for(riter2=v.rbegin();riter2!=v.rend();riter2++){
        cout<<*riter2<<" ";
    }
    cout<<endl;
}