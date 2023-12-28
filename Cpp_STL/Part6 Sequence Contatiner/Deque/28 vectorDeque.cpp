#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int main(){
    vector<int> v(4,100);
    deque<int> dq(4,100);

    v.push_back(99);
    dq.push_back(99);

    for(vector<int>::iterator iter=v.begin();iter!=v.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    for(deque<int>::iterator iter=dq.begin();iter!=dq.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}