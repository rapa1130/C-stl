#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<int,int> mm;
    mm.insert(pair<int,int>(9,100));
    mm.insert(pair<int,int>(1,20));
    mm.insert(pair<int,int>(1,30));
    mm.insert(pair<int,int>(5,10));
    mm.insert(pair<int,int>(4,50));

    multimap<int,int>::iterator iter;
    for(iter=mm.begin();iter!=mm.end();iter++){
        cout<<"("<<iter->first<<","<<iter->second<<") ";
    }
    cout<<endl;
    multimap<int,int>::iterator upper_iter=mm.upper_bound(1);
    multimap<int,int>::iterator lower_iter=mm.lower_bound(1);
    for(iter=lower_iter;iter!=upper_iter;iter++){
        cout<<"("<<iter->first<<","<<iter->second<<") ";
    }
    cout<<endl;
    pair<multimap<int,int>::iterator,multimap<int,int>::iterator> pr;
    pr=mm.equal_range(1);
    for(iter=pr.first;iter!=pr.second;iter++){
        cout<<"("<<iter->first<<","<<iter->second<<") ";
    }
}