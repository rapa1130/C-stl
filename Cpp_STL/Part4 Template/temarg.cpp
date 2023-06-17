#include<iostream>

using namespace std;

template <typename T,int arg>
void print(T* arr){
    for(int i=0;i<arg;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int* arr=new int[]{1,2,3,4,5};
    print<int,5>(arr);
}