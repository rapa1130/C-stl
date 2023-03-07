#ifndef NODE_CPP
#define NODE_CPP
#include"Node.h"
namespace DataStructNS{
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
