#include<iostream>
#include<set>

using namespace std;
int main(){
    multiset<int> ms;
    pair<multiset<int>::iterator,multiset<int>::iterator> iter_pair;
    multiset<int>::iterator iter;
    ms.insert(50);
    ms.insert(30);
    ms.insert(80);
    ms.insert(80);
    ms.insert(30);
    ms.insert(70);
    ms.insert(10);

    for(iter=ms.begin();iter!=ms.end();iter++){
        cout<<*iter<<" ";
    }   
    cout<<endl;

    iter_pair=ms.equal_range(80);
    for(iter=iter_pair.first;iter!=iter_pair.second;iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}