#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
template<typename T>
class Less{
    public:
    bool operator()(const T& a,const T& b) const{
        return a<b;   
    }
};
int main(){
    vector<int> v1;
    vector<int> v2;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v2.push_back(10);
    v2.push_back(25);
    v2.push_back(30);

    if(lexicographical_compare(v1.begin(),v1.end(),v2.begin(),v2.end(),less<int>())){
        cout<<"1"<<endl;
    }else{
        cout<<"2"<<endl;
    }
    if(lexicographical_compare(v1.begin(),v1.end(),v2.begin(),v2.end(),greater<int>())){
        cout<<"3"<<endl;
    }else{
        cout<<"4"<<endl;
    }
    if(lexicographical_compare(v1.begin(),v1.end(),v2.begin(),v2.end(),Less<int>())){
        cout<<"5"<<endl;
    }
    else{
        cout<<"6"<<endl;
    }
}