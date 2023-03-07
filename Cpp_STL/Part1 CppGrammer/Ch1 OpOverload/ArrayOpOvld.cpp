#include<iostream>

class Array{
    public:
        Array():capacity(100),size(0)
        {
            arr=new int[capacity];
        }
        Array(int capacity):capacity(capacity),size(0)
        {
            arr=new int[capacity];
        }
        void Add(int element){
            if(size==capacity){
                std::cout<<"out of range!"<<std::endl;
                exit(1);
            }
            arr[size++]=element;
        }
        const int operator[](int index)const{
            if(index<0||index>capacity){
                std::cout<<"Out of Array Range"<<std::endl;
                exit(1);
            }
            return arr[index];
        }
        int& operator[](int index) {
            if(index<0||index>capacity){
                std::cout<<"Out of Array Range"<<std::endl;
                exit(1);
            }
            return arr[index];
        }
        int getSize() const{
            return size;
        }
        
    private:
        int* arr;
        int size;
        int capacity;
};

int main(){
    Array arr;
    for(int i=0;i<10;i++){
        arr[i]=i;
    }
    for(int i=0;i<10;i++){
        std::cout<<arr[i]<<std::endl;
    }
}