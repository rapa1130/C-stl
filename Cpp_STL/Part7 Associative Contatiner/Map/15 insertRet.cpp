#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int> m;
    m.insert(pair<int,int>(5,100));
    m.insert(pair<int,int>(3,100));
    m.insert(pair<int,int>(8,30));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(1,70));
    m.insert(pair<int,int>(7,100));

    pair<map<int,int>::iterator,bool> pr;
    pr=m.insert(pair<int,int>(9,50));
    if(pr.second){
        cout<<pr.first->first<<","<<pr.first->second<<" 삽입 성공"<<endl;
    }else{
        cout<<"삽입 실패"<<endl;
    }
    pr=m.insert(pair<int,int>(9,50));
    if(pr.second){
        cout<<pr.first->first<<","<<pr.first->second<<" 삽입 성공"<<endl;
    }else{
        cout<<"삽입 실패"<<endl;
    }
}