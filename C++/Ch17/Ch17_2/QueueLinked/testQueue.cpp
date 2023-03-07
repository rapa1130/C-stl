#include"Queue.h"
#include"Queue.cpp"
#include<iostream>

template<typename T>
void PrintQueue(const DataStructNS::Queue<T>& queue);


int main(){
    using DataStructNS::Queue;
    using std::cout;
    using std::endl;

    Queue<char> queue;
    char ch;
    while((ch=getchar())!='\n'){
        queue.add(ch);
    }

    PrintQueue(queue);
}

template<typename T>
void PrintQueue(const DataStructNS::Queue<T>& queue){

    using std::cout;
    using std::endl;
    DataStructNS::Queue<T> copied(queue);
    while(!copied.isEmpty()){
        cout<<copied.remove()<<" ";
    }
    cout<<endl;
}