#include"Queue.h"
#include<stdlib.h>
#include<iostream>
namespace DataStructNS{
    template<typename T>
    Queue<T>::Queue()
    :first(nullptr),last(nullptr){}

    template<typename T>
    Queue<T>::Queue(const Queue<T>& other)
    :first(nullptr),last(nullptr)
    {
        if(other.first==nullptr&&other.last==nullptr)return;
        for(Node<T>* now=other.last;now!=nullptr;now=now->getLink()){
            add(now->getData());
        }
    }
    
    template<typename T>
    Queue<T>& Queue<T>::operator=(const Queue<T>& right){
        if(&right== this){
            return *this;
        }
        Queue<T>::~Queue();
        if(right.first==nullptr&&right.last==nullptr)return *this;
        for(Node<T>* now=right.last;now!=nullptr;now=now->getLink()){
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
        if(first==nullptr&&last==nullptr){
            first=last=new Node<T>(data,nullptr);
        }else{
            Node<T>* newNode=new Node<T>(data,nullptr);
            first->setLink(newNode);
            first=newNode;
        }
    }
    template<typename T>
    T Queue<T>::remove(){
        if(first==nullptr&&last==nullptr){
            std::cout<<"null queue remove error!"<<std::endl;
            std::exit(1);
        }
        Node<T>* toDiscard=last;
        T data=toDiscard->getData();
        last=toDiscard->getLink();
        if(last==nullptr){
            first=nullptr;
            }
        delete toDiscard;
        return data;
    }
    template<typename T>
    bool Queue<T>::isEmpty() const{
        return last==nullptr&&first==nullptr;
    }
}