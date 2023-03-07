#ifndef SET_H
#define SET_H
#include"../Node/Node.h"
#include"../Node/Node.cpp"
namespace DataStructNS{
    template<typename T>
    class Set{
        public:
            Set();
            Set(const Set& other);
            Set& operator=(const Set& right);
            virtual ~Set();
            void add(const T& data);
            Set* Union(const Set& right);
            Set* Intersection(const Set& right);
            void Output() const;
        private:
            Node<T>* head;
    };
}
#endif