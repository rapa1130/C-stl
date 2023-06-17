#include<iostream>
using namespace std;


template <typename T>
void Copy(T*& source,T*& destination,int size){
    T* ret=new T[size];
    for(int i=0;i<size;i++){
        ret[i]=source[i];
    }
    destination=ret;
}
template <typename T>
void print(T* arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){    
    int* arr1=new int[]{1,2,3,4,5};
    int* arr2;
    Copy(arr1,arr2,5);
    print(arr2,5);
}