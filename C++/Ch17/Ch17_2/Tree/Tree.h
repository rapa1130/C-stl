#include"TreeNode.h"
#ifndef TREE_H
#define TREE_H
namespace DataStructNS{
    template <typename T>
    class Tree{
        public:
            Tree();
            //search
            bool InTree(const T& data)const;
            //add
            void Add(const T& data);
            //destructor
            virtual ~Tree();
            //PrintSizeOrder
            void PrintTree() const;
        private:
            bool intree(const T& data,TreeNode<T>* sub)const;
            void add(const T& data,TreeNode<T>*& sub);
            void deleteTree(TreeNode<T>*& sub);
            void printTree(TreeNode<T>* sub)const;
            TreeNode<T>* root;
    };
}
#include "Tree.hpp"
#endif