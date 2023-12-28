#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);

    deque<int>::iterator iter;
    for(iter=dq.begin();iter!=dq.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    iter=dq.begin()+2;
    cout<<*iter<<endl;
    iter+=2;
    cout<<*iter<<endl;
    iter-=3;
    cout<<*iter<<endl;
}