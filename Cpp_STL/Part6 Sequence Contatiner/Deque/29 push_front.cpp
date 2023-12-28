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

    for(deque<int>::iterator iter=dq.begin();iter!=dq.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    dq.push_front(9);
    dq.push_front(8);
    for(deque<int>::size_type i=0;i<dq.size();i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
}