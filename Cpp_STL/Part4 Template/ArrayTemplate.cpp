#include<iostream>
#include<stdlib.h>
using namespace std;

//defualt template
template<typename T=int,int cap=100>
class Array{
    public:
    Array(int capacity=cap)//cap은 컴파일시 치환되므로 legal
        :capacity(capacity),size(0)
    {
        arr=new T[capacity];
    }
    ~Array(){
        delete arr;
    }
    void Add(const T& element){
        if(capacity<=size){
            return;
        }
        arr[size++]=element;
    }
    T& operator[](int index){
        if(size<=index){
            exit(1);
        }
        return arr[index];
    }
    int Size() const{
        return size;
    }
    private:
    T* arr;
    int size;
    int capacity;
};

int main(){
    Array<> arr;//default 사용법
    for(int i=0;i<10;i++){
        arr.Add(i);
    }
    for(int i=0;i<arr.Size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}