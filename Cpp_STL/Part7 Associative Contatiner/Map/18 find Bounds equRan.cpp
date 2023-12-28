#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){
    map<int,string> m;
    m[5]="five";
    m[3]="three";
    m[8]="eight";
    m[4]="four";
    m[1]="one";
    m[7]="seven";
    m[9]="nine";
    map<int,string>::iterator iter;
    for(iter=m.begin();iter!=m.end();iter++){
        cout<<"("<<iter->first<<","<<iter->second<<") ";
    }
    cout<<endl;
    iter=m.find(5);
    if(iter!=m.end()){
        cout<<"("<<iter->first<<","<<iter->second<<")"<<endl;
    }
    map<int,string>::iterator upper_iter=m.upper_bound(4);
    map<int,string>::iterator lower_iter=m.lower_bound(4);

    for(iter=lower_iter;iter!=upper_iter;iter++){
        cout<<"("<<iter->first<<","<<iter->second<<") ";
    }
    cout<<endl;


    pair<map<int,string>::iterator,map<int,string>::iterator> pr;
    pr=m.equal_range(4);
    for(iter=pr.first;iter!=pr.second;iter++){
        cout<<"("<<iter->first<<","<<iter->second<<") ";
    }    
}