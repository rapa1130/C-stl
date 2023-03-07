#ifndef QUEUE_H
#define QUEUE_H
#include"../Node/Node.h"
#include"../Node/Node.cpp"

namespace DataStructNS{
    template <typename T>
    class Queue{
        public:
        Queue();
        Queue(const Queue<T>& other);
        Queue<T>& operator=(const Queue<T>& right);
        virtual ~Queue();
        void add(const T& data);
        T remove();
        bool isEmpty()const;
        private:
        Node<T>* front;
        Node<T>* back;
    };
}
#endif