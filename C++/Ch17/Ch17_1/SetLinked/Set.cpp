#ifndef SET_CPP
#define SET_CPP
#include"Set.h"
#include<iostream>
namespace DataStructNS{
    template<typename T>
    Set<T>::Set()
    :head(nullptr){}
    
    template<typename T>
    Set<T>::Set(const Set<T>& other)
    :head(nullptr)
    {
        for(Node<T>* now=other.head;now!=nullptr;now=now->link){
            head=new Node<T>(now->data,head);
        }
    }
    
    template<typename T>
    Set<T>& Set<T>::operator=(const Set<T>& right){
        if(this!=&right){
            Set<T>::~Set();
        }
        for(Node<T>* now=right.head;now!=nullptr;now=now->link){
            head=new Node<T>(now->data,head);
        }
        return *this;
    }
    
    template<typename T>
    Set<T>::~Set(){
        for(Node<T>* now=head;now!=nullptr;){
            Node<T>* toDiscard=now;
            now = now->link;
            delete toDiscard;
        }
    }
    
    template<typename T>
    void Set<T>::add(const T& data){
        for(Node<T>* now=head;now!=nullptr;now=now->link){
            if(now->data==data){
                return;
            }
        }
        head=new Node<T>(data,head);
    }
    
    template<typename T>
    Set<T>* Set<T>::Union(const Set<T>& other){
        Set<T> *ret=new Set<T>();
        for(Node<T>* now=other.head;now!=nullptr;now=now->link){
            ret->add(now->data);
        }
        for(Node<T>* now=head;now!=nullptr;now=now->link){
            ret->add(now->data);
        }
        return ret;
    }
    
    template<typename T>
    Set<T>* Set<T>::Intersection(const Set<T>& other){
        Set<T> *ret=new Set<T>();
        for(Node<T>* now=other.head;now!=nullptr;now=now->link){
            for(Node<T>* now2=head;now2!=nullptr;now2=now2->link){
                if(now->data==now2->data){
                    ret->add(now->data);
                }
            }
        }
        return ret;
    }
    
    template<typename T>
    void Set<T>::Output() const{
        std::cout<<"{";
        for(Node<T>* now=head;now!=nullptr;now=now->link){
            std::cout<<now->data;
            if(now->link!=nullptr){
                std::cout<<", ";
            }
        }
        std::cout<<"}"<<std::endl;
    }
}
#endif