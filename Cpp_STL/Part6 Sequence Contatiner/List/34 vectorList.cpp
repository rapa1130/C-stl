#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main(){
    vector<int> v;
    list<int> lt;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    lt.push_back(1);
    lt.push_back(2);
    lt.push_back(3);
    lt.push_back(4);
    lt.push_back(5);

    vector<int>::iterator viter=v.begin();
    list<int>::iterator liter=lt.begin();
    
    viter++;
    liter++;
    viter=v.insert(viter,99);
    liter=lt.insert(liter,99);
    cout<<"viter:"<<*viter<<endl;
    cout<<"liter:"<<*liter<<endl;

    for(viter=v.begin();viter!=v.end();viter++){
        cout<<*viter<<" ";
    }
    cout<<endl;
    for(liter=lt.begin();liter!=lt.end();liter++){
        cout<<*liter<<" ";
    }
    cout<<endl;
}