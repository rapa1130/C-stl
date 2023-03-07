#include"../SetLinked/Set.h"
#ifndef Node_H
#define Node_H
namespace DataStructNS{
    template <class T>
    class Set;

    template <typename T>
    class Node{
        public:
        Node();
        Node(const T& data,Node<T>* link);
        void setData(const T& data);
        void setLink(Node<T>* link);
        T getData() const;
        Node<T>* getLink() const;
        friend class Hashtable;
        friend class Set<T>;
        private:
        T data;
        Node<T>* link;
    };
}
#endif