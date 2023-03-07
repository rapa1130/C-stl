#ifndef STACK_H
#define STACK_H
#include"../Node/Node.h"
#include"../Node/Node.cpp"

namespace DataStructNS{
    template <typename T>
    class Stack{
        public:
        Stack();
        Stack(const Stack<T>& other);
        Stack& operator=(const Stack<T>& right);
        virtual ~Stack();
        void push(T data);
        T pop();
        bool isEmpty() const;
        private:
        Node<T>* top;
    };
}
#endif