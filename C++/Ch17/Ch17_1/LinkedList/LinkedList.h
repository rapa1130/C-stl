#ifndef LINKEDLIST_H
#define LINKEDLIST_H

namespace LinkedListNS{
    template <typename T>
    class LinkedList{
    public:
        LinkedList();
        LinkedList(T data ,LinkedList* link);
        void setLink(LinkedList* link);
        void setData(T data);
        LinkedList* getLink() const;
        T getData() const;
        
    private:
        T data;
        LinkedList* link;
    };
}
#endif 