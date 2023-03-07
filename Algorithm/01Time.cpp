#include<iostream>
#define INF 0
int cash[1'000'000];

int CaseOfBinary(int n){
    if(ref){
        
    }
    int& ref=cash[n];
    if(ref==INF){
        ref=CaseOfBinary(n-2)+CaseOfBinary(n-1);
    }
    return ref;
}

int main(){
    int n;
    cin>>n;
    std::cout<<CaseOfBinary(n)%15746<<std::endl;

}