#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(50);
    s.insert(40);
    s.insert(30);

    set<int>::iterator lower=s.lower_bound(30);
    set<int>::iterator upper=s.upper_bound(30);
    cout<< *lower << endl;
    cout<<*upper<<endl;

    lower=s.lower_bound(90);
    upper=s.upper_bound(90);
    if(lower!=upper){
        cout<<"Set에 90 있다"<<endl;    
    }
    else{
        cout<<"Set에 90 없다.."<<endl;
    }


}