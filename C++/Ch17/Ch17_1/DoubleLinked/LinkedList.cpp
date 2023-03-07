/*// Created on iPad.

#include <iostream>
using namespace std;

class Node;

class Node{
    public:
    Node():data(0),next(nullptr){}
    Node(Node* next,int data)
    :next(next),data(data){}
    int data;
    Node * next;
};

void headInsert(Node*& head,int data){
    head=new Node(head,data);
}
void Insert(Node* before,int data){
    before->next= new Node(before->next,data);
}
void Discard(Node*& before){
    Node* toDiscard = before->next;
    before->next=toDiscard->next;
    delete toDiscard;
}
Node* Find(Node* head,int data){
    for(Node* now=head;now->next!=nullptr;now=now->next){
        if(now->data==data){
            return now;
        }
    }
    return nullptr;
}

int main() {
    Node* head=nullptr;
    headInsert(head,5);
    headInsert(head,9);
    headInsert(head,999);
    headInsert(head,7);
    

    for(Node* next=head;next!=nullptr;next=next->next){
        cout<<next->data<<" ";
    }
    cout<<endl;
    cout<<"Insert"<<endl;
    for(Node* next=head;next!=nullptr;next=next->next){
        if(next->data==999){
            Insert(next,1234);
        }
    }
    for(Node* next=head;next!=nullptr;next=next->next){
        cout<<next->data<<" ";
    }
    cout<<endl;
    cout<<"Discard"<<endl;
    for(Node* next=head;next!=nullptr;next=next->next){
        if(next->data==999){
            Discard(next);
        }
    }
    for(Node* next=head;next!=nullptr;next=next->next){
        cout<<next->data<<" ";
    }
    cout<<"Find"<<endl;
    Node* finded=Find(head,7);
    cout<<finded->data;
}*/