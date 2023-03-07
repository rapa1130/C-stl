#include"hashtable.h"
#include<iostream>
namespace DataStructNS{
    Hashtable::Hashtable()
    {
        for(int i=0;i<PRIME_NUMBER;i++){
            table[i]=nullptr;
        }
    }
    Hashtable::~Hashtable(){
        for(int i=0;i<PRIME_NUMBER;i++){
            for(Node<string>* now=table[i];now!=nullptr;){
                Node<string>* toDiscard=now;
                now=now->link;
                delete toDiscard;
            }
        }
    }
    void Hashtable::put(const string& str){
        int index=hashFunction(str);
        table[index]= new Node<string>(str,table[index]);
    }
    bool Hashtable::containsString(const string& str){
        int index=hashFunction(str);
        Node<string>* head=table[index];
        for(Node<string>* now=head;now!=nullptr;now=now->link){
            if(now->data==str){
                return true;
            }
        }
        return false;
    }
    int Hashtable::hashFunction(const string& str){
        int hash=0;
        for(auto iter=str.begin();iter!=str.end();iter++){
            hash+=(*iter);
        }
        return hash % PRIME_NUMBER;
    }

}