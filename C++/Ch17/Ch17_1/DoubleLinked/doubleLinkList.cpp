#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class DoubleLineNode{
    public:
    int data;
    DoubleLineNode* previous;
    DoubleLineNode* next;

    DoubleLineNode():data(987654321),previous(nullptr),next(nullptr){}
    DoubleLineNode(int data,DoubleLineNode* previous,DoubleLineNode* next)
    :data(data),previous(previous),next(next){}
};

void headInsert(DoubleLineNode*& head,int data){
    DoubleLineNode* newHead =new DoubleLineNode(data,nullptr,head);
    if(head!=nullptr){
        head->previous = newHead;
    }
    head=newHead;
}

void DeleteAnswer(DoubleLineNode*&head,DoubleLineNode* discard){
    if(head==discard){
        head=head->next;
        head->previous=nullptr;
    }else{
        DoubleLineNode* previousNode= discard->previous;
        DoubleLineNode* nextNode= discard->next;
        previousNode->next=nextNode;
        if(nextNode!=nullptr){
            nextNode->previous=previousNode;
        }
        
    }
    delete discard;
}

void DeleteNode(DoubleLineNode* toDelete,DoubleLineNode*& head){
    if(toDelete->previous==nullptr&&toDelete->next!=nullptr){
        head=toDelete->next;
        head->previous=nullptr;
    }
    else if(toDelete->previous!=nullptr&&toDelete->next==nullptr){
        toDelete->previous->next=nullptr;
    }
    else if(toDelete->next==nullptr&& toDelete->previous==nullptr){
        head=nullptr;
    }
    else{
        DoubleLineNode* previousNode=toDelete->previous;
        DoubleLineNode* nextNode=toDelete->next;
        previousNode->next=nextNode;
        nextNode->previous=previousNode;
    }
    delete toDelete;
}

int main(void){
    DoubleLineNode* head=nullptr;
    DoubleLineNode* last=nullptr;

    headInsert(head,1);
    headInsert(head,2);
    headInsert(head,3);


    for(DoubleLineNode* now=head;now!=nullptr;now=now->next){
        cout<<now->data<<" ";
        last=now;
    }
    cout<<endl;

    for(DoubleLineNode* now=last;now!=nullptr;now=now->previous){
        cout<<now->data<<" ";
    }
    cout<<endl;

    
    //DeleteAnswer(head,head);
    DeleteNode(head,head);

    for(DoubleLineNode* now=head;now!=nullptr;now=now->next){
        cout<<now->data<<" ";
        last=now;
    }
    cout<<endl;
    DeleteNode(head,head);
    //DeleteAnswer(head,head);
    for(DoubleLineNode* now=head;now!=nullptr;now=now->next){
        cout<<now->data<<" ";
        last=now;
    }
    cout<<endl;
    DeleteNode(head,head);
    //DeleteAnswer(head,head);
    for(DoubleLineNode* now=head;now!=nullptr;now=now->next){
        cout<<now->data<<" ";
        last=now;
    }
    cout<<endl;
}