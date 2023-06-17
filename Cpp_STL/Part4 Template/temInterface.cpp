#include<iostream>

using namespace std;

class Arr{
    public:
    Arr(int size):size(size){
        arr=new int[size];
    }
    int* arr;
    int size;
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    Arr(const Arr& copy){
        cout<<"copy constructor is called"<<endl;
        arr=new int[copy.size];
        size=copy.size;
        for(int i=0;i<size;i++){
            arr[i]=copy.arr[i];
        }
    }
    Arr& operator=(Arr& right){
        cout<<"operator= is called"<<endl;
        if(this==&right){
            return *this;
        }
        this->arr=new int[right.size];
        for(int i=0;i<size;i++){
            arr[i]=right.arr[i];
        }
        return *this;
    }
};

template<typename T>
void Swap(T& a,T& b){
    T temp=a;
    a=b;
    b=temp;
}

int main(){
    Arr a(10);
    Arr b(20);
    a.print();
    b.print();
    Swap(a,b);
    a.print();
    b.print();
}