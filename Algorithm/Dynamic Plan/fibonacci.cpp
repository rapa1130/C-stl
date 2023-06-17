#include<iostream>
using namespace std;

long cash[1000000];

long fibonacci(int n){
    if(n==1 || n==2) return 1;
    long& ref=cash[n];
    if(ref!=0){
        return ref;
    }
    ref=fibonacci(n-1)+fibonacci(n-2);
    return ref;
}

int main(void){
    using std::cout;
    using std::endl;
    using std::cin;

    while(true){
        int n; cin>>n; 
        cout<<fibonacci(n)<<endl;
    }
    
}