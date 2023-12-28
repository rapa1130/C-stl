#include<iostream>
#include<map>

using namespace std;

int main(){
    multimap<int,int> mm;
    mm.insert(pair<int,int>(5,90));
    mm.insert(pair<int,int>(1,90));
    mm.insert(pair<int,int>(1,45));
    mm.insert(pair<int,int>(4,200));
    mm.insert(pair<int,int>(2,500));
    mm.insert(pair<int,int>(3,11100));

    multimap<int,int>::iterator iter;
    for(iter=mm.begin();iter!=mm.end();iter++){
        cout<<"("<<iter->first<<","<<iter->second<<") ";
    }
    cout<<endl;

    int count=mm.count(1);
    cout<<count<<endl;
    iter=mm.find(1);
        cout<<"("<<iter->first<<","<<iter->second<<")"<<endl;
}