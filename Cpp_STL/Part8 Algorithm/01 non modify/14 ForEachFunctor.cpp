#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Functor{
    char fmt;
    public:
    explicit Functor(char fmt=' ')
    :fmt(fmt){}
    void operator()(int n)const{
        cout<<n<<fmt;
    }
};

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    
    for_each(v.begin(),v.begin()+2,Functor());
    cout<<endl;
    for_each(v.begin(),v.begin()+4,Functor(','));
    cout<<endl;
    for_each(v.begin(),v.end(),Functor('\n'));
       
}