#ifndef QUEUE_H
#define QUEUE_H
#include"../Node/Node.h"
#include"../Node/Node.cpp"

namespace DataStructNS{
    template <typename T>
    class Queue{
        public:
        typedef Iterator<T> iterator;

        Queue();
        Queue(const Queue<T>& other);
        Queue<T>& operator=(const Queue<T>& right);
        virtual ~Queue();
        void add(const T& data);
        T remove();
        bool isEmpty()const;

        Node<T>* begin(){
            return last;
        }
        Node<T>* end(){
            return nullptr;
        }

        private:
        Node<T>* first;
        Node<T>* last;
    };
}
#endif