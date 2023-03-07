#ifndef TREENODE_H
#define TREENODE_H
namespace DataStructNS{
    template <typename T> class Tree;

    template <typename T>
    class TreeNode{
        public:
            TreeNode();
            TreeNode(const T& data,TreeNode* left,TreeNode* right);
            friend class Tree<T>;
        private:
            T data;
            TreeNode* left;
            TreeNode* right;
    };
}
#include"TreeNode.hpp"
#endif