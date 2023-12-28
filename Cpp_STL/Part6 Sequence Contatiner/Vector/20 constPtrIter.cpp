#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int arr[5]={1,2,3,4,5};

    const int* cp=arr;
    vector<int>::const_iterator citer=v.begin();
    //(*cp)++; :error
    //(*citer)++; :error
    cout<<*cp<<endl;
    cout<<*citer<<endl;



    //int* const pc; :error
    //must be assined when initialized
    int* const pc=arr;
    const vector<int>::iterator iter_const=v.begin();
    *iter_const=99;
    *pc=88;
    cout<<*pc<<endl;
    cout<<*iter_const<<endl;

    const int* const cpc=arr;
    const vector<int>::const_iterator cciter=v.begin();
    //*cciter=90;
    //*cpc=110;
    cout<<*cciter<<endl;
    cout<<*cpc<<endl;
    
}