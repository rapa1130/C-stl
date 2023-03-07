#include"TreeNode.h"
#include<iostream>
namespace DataStructNS{
    template <typename T>
    TreeNode<T>::TreeNode()
        :data(NULL),left(nullptr),right(nullptr)
    {}
    template <typename T>
    TreeNode<T>::TreeNode(const T& data,TreeNode* left,TreeNode* right)
        :data(data),left(left),right(right)
    {}
}