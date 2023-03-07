#ifndef Node_H
#define Node_H
namespace DataStructNS{
    template<typename T>
    class Node;

    template <typename T>
    class Iterator{
    public:
        Iterator();
        Iterator(Node<T>* node);
        Iterator& operator++();
        Iterator operator++(int);
        const T operator*() const;
        bool operator==(const Iterator& right);
        bool operator!=(const Iterator& right);

    private:
        Node<T>* now;
    };

    template <typename T>
    class Node{
        public:
        Node();
        Node(const T& data,Node<T>* link);
        void setData(const T& data);
        void setLink(Node<T>* link);
        T getData() const;
        Node<T>* getLink() const;
        private:
        T data;
        Node<T>* link;
    };
}
#endif