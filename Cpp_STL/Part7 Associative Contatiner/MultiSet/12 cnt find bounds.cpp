#include<iostream>
#include<set>

using namespace std;

int main(){
    multiset<int> ms;
    multiset<int>::iterator iter;
    ms.insert(50);
    ms.insert(30);
    ms.insert(80);
    ms.insert(30);
    ms.insert(70);
    ms.insert(10);

    for(iter=ms.begin();iter!=ms.end();iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    cout<<"30 count:"<<ms.count(30)<<endl;

    iter=ms.find(30);
    cout<<*iter<<endl;

    multiset<int>::iterator upper_iter=ms.upper_bound(30);
    multiset<int>::iterator lower_iter=ms.lower_bound(30);

    cout<<"lower:"<<*lower_iter<<endl;
    cout<<"upper:"<<*upper_iter<<endl;
    

    for(iter=lower_iter;iter!=upper_iter;iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;



}