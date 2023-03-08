#include<iostream>
#include<algorithm>

using namespace std;

void Print1(int n){
    cout<<n<<" ";
}

void Print2(int n){
    cout<<"정수:"<<n<<endl;
}
void Print3(int n){
    cout<<n*n<<" ";
}

void Server(int* begin,int* end,void (*client)(int)){
    while(begin!=end){
        client(*begin++);
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    for_each(arr,arr+5,Print1);
}