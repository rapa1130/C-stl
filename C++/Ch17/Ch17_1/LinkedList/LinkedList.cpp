#include"LinkedList.h"

namespace LinkedListNS{
    template <typename T>
    LinkedList<T>::LinkedList()
        :link(nullptr),data(0) {}

    template <typename T>
    LinkedList<T>::LinkedList(T data, LinkedList<T>* link)
        :data(data),link(link) {}

    template <typename T>
    LinkedList<T>* LinkedList<T>::getLink()const{
        return link;
    }

    template<typename T>
    T LinkedList<T>::getData() const{
        return data;
    }

    template<typename T>
    void LinkedList<T>::setLink(LinkedList<T>* link){
        this->link=link;
    }

    template<typename T>
    void LinkedList<T>::setData(T data){
        this->data=data;
    }
}