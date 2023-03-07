#include"Queue.h"
#include<stdlib.h>
#include<iostream>
namespace DataStructNS{
    template<typename T>
    Queue<T>::Queue()
    :front(nullptr),back(nullptr){}

    template<typename T>
    Queue<T>::Queue(const Queue<T>& other)
    :front(nullptr),back(nullptr)
    {
        if(other.front==nullptr&&other.back==nullptr)return;
        for(Node<T>* now=other.back;now!=nullptr;now=now->getLink()){
            add(now->getData());
        }
    }
    
    template<typename T>
    Queue<T>& Queue<T>::operator=(const Queue<T>& right){
        if(&right== this){
            return *this;
        }
        Queue<T>::~Queue();
        if(right.front==nullptr&&right.back==nullptr)return *this;
        for(Node<T>* now=right.back;now!=nullptr;now=now->getLink()){
            add(now->getData());
        }
        return *this;
    }
    template<typename T>
    Queue<T>::~Queue(){
        while(!isEmpty()){
            remove();
        }
    }
    template<typename T>
    void Queue<T>::add(const T& data){
        if(front==nullptr&&back==nullptr){
            front=back=new Node<T>(data,nullptr);
        }else{
            Node<T>* newNode=new Node<T>(data,nullptr);
            front->setLink(newNode);
            front=newNode;
        }
    }
    template<typename T>
    T Queue<T>::remove(){
        if(front==nullptr&&back==nullptr){
            std::cout<<"null queue remove error!"<<std::endl;
            std::exit(1);
        }
        Node<T>* toDiscard=back;
        T data=toDiscard->getData();
        back=toDiscard->getLink();
        if(back==nullptr){
            front=nullptr;
            }
        delete toDiscard;
        return data;
    }
    template<typename T>
    bool Queue<T>::isEmpty() const{
        return back==nullptr&&front==nullptr;
    }
}