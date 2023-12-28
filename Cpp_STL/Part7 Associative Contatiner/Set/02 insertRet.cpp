#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    pair<set<int>::iterator,bool> ret;
    ret=s.insert(10);
    s.insert(30);
    s.insert(20);

    if(ret.second){
        cout<<*ret.first<<" 삽입 성공!"<<endl;
    }else{
        cout<<*ret.first<<" 삽입 실패"<<endl;
    }

    for(set<int>::iterator iter=s.begin();iter!=s.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    ret=s.insert(30);
    if(ret.second){
        cout<<*ret.first<<" 삽입 성공!"<<endl;
    }else{
        cout<<*ret.first<<" 삽입 실패"<<endl;
    }
    

    for(set<int>::iterator iter=s.begin();iter!=s.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}