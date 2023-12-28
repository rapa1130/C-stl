#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Print(int n){
    cout<<n<<" ";
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for_each(v.begin(),v.begin()+2,Print);
    cout<<endl;
    for_each(v.begin(),v.begin()+4,Print);
    cout<<endl;
    for_each(v.begin(),v.end(),Print);
}