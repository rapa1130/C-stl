#ifndef NODE_CPP
#define NODE_CPP
#include"Node.h"
namespace DataStructNS{

    template <typename T>
    Iterator<T>::Iterator():now(nullptr){
        
    }
    template <typename T>
    Iterator<T>::Iterator(Node<T>* node):now(node){

    }
    template <typename T>
    Iterator<T>& Iterator<T>::operator++(){
        now=now->getLink();
        return *this;
    }
    template <typename T>
    Iterator<T> Iterator<T>::operator++(int){
        Iterator<T> iter(*this);
        now=now->getLink();
        return iter;
    }
    template <typename T>
    const T Iterator<T>::operator*() const{
        return now->getData();
    }
    template <typename T>
    bool Iterator<T>::operator==(const Iterator<T>& right){
        return now==right.now;
    }
    template <typename T>
    bool Iterator<T>::operator!=(const Iterator<T>& right){
        return now!=right.now;
    }
    
    template <typename T>
    Node<T>::Node()
    :data(0),link(nullptr){}

    template <typename T>
    Node<T>::Node(const T& data, Node<T>* link)
    :data(data),link(link){
        
    }

    template <typename T>
    void Node<T>::setData(const T& data){
        this->data=data;
    }

    template <typename T>
    void Node<T>::setLink(Node<T>* link){
        this->link=link;
    }

    template <typename T>
    T Node<T>::getData() const{
        return this->data;
    }

    template <typename T>
    Node<T>* Node<T>::getLink() const{
        return this->link;
    }

}
#endif
