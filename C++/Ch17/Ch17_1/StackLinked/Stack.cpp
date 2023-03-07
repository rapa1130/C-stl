#include"Stack.h"
#include<stdlib.h>

namespace DataStructNS{
    template<typename T>
    Stack<T>::Stack()
    :top(nullptr){}

    template<typename T>
    Stack<T>::Stack(const Stack& other)
    :top(nullptr)
    {
        if(other.isEmpty()) return;
        top=new Node<T>(other.top->getData(),nullptr);
        Node<T>* newNow=top;
        for(Node<T>* now=other.top->getLink();now!=nullptr;now=now->getLink()){
            newNow->setLink(new Node<T>(now->getData(),nullptr));
            newNow=newNow->getLink();
        }
    }
    template<typename T>
    Stack<T>& Stack<T>::operator=(const Stack<T>& right){
        Stack<T>::~Stack();
        if(right.isEmpty()) return *this;
        top=new Node<T>(right.top->getData(),nullptr);
        Node<T>* newNow=top;
        for(Node<T>* now=right.top->getLink();now!=nullptr;now=now->getLink()){
            newNow->setLink(new Node<T>(now->getData(),nullptr));
            newNow=newNow->getLink();
        }
        return *this;
    }
    template<typename T>
    Stack<T>::~Stack(){
        while(!isEmpty()){
            pop();
        }
    }
    template<typename T>
    void Stack<T>::push(T data){
        using std::cout;
        using std::endl;
        top=new Node<T>(data,top);
    }
    template<typename T>
    T Stack<T>::pop(){
        if(isEmpty()){
            std::cout<<"empty stack pop Error!"<<std::endl;
            std::exit(1);
        }
        Node<T>* newTop=top->getLink();
        T data=top->getData();
        delete top;
        top=newTop;
        return data;
    }
    
    template <typename T>
    bool Stack<T>::isEmpty() const{
        return top==nullptr;
    }
    
}