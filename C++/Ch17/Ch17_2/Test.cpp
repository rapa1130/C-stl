#include<iostream>
#include"QueueLinked/Queue.h"
#include"QueueLinked/Queue.cpp"
int main(){
    using DataStructNS::Queue;
    using DataStructNS::Iterator;
    
    Queue<int> q;
    for(int i=0;i<5;i++){
        q.add(i);
    }
    
    for(Queue<int>::iterator iter=q.begin();iter!=q.end();iter++){
        std::cout<<(*iter)<<std::endl;
        
    }
}