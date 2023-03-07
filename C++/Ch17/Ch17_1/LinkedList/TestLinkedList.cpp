#include "LinkedList.h"
#include "LinkedList.cpp"
#include<iostream>
using LinkedListNS::LinkedList;

template<typename T>
void Insert(LinkedList<T>* before,T data){
    before->setLink(new LinkedList<T>(data,before->getLink()));
}

template<typename T>
void headInsert(LinkedList<T>*& head,T data);
template<typename T>
void Delete(LinkedList<T>* before){
    LinkedList<T>* toDelete=before->getLink();
    before->setLink(toDelete->getLink());
    delete toDelete;
}
template<typename T>
void firstDelete(LinkedList<T>*& head){
    LinkedList<T>* newHead=head->getLink();
    delete head;
    head=newHead;
}
template<typename T>
LinkedList<T>* Search(LinkedList<T>* head,T data){
    for(LinkedList<int>* now=head;now!=nullptr;now=now->getLink()){
        if(now->getData()==data){
            return now;
        }
    }
    return nullptr;
}
template<typename T>
void PrintLinkedList(LinkedList<T>* head){
    using std::cout;
    using std::endl;
    cout<<"현재 데이터 상태)"<<endl;
    for(LinkedList<int>* now=head;now!=nullptr;now=now->getLink()){
        cout<<now->getData()<<" ";
    }
    cout<<endl;
}

int main(void){
    using std::cout;
    using std::endl;

    LinkedList<int>* link=nullptr;
    headInsert(link,2);
    headInsert(link,3);
    headInsert(link,5);
    headInsert(link,7);
    
    PrintLinkedList(link);
    Delete(Search(link,5));
    PrintLinkedList(link);
    Insert(Search(link,5),11);
    PrintLinkedList(link);
}

template<typename T>
void headInsert(LinkedList<T>*& head,T data){
    head=new LinkedList<T>(data,head);
}