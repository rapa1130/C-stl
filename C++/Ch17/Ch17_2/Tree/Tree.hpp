#include"Tree.h"
#include<iostream>
namespace DataStructNS{

    template<typename T>
    Tree<T>::Tree()
        :root(nullptr)
    {}
    template<typename T>
    bool Tree<T>::InTree(const T& data)const{
        return intree(data,root);
    }

    template<typename T>
    void Tree<T>::Add(const T& data){
        add(data,root);
    }

    template<typename T>
    Tree<T>::~Tree(){
        deleteTree(root);
    }

    template<typename T>
    void Tree<T>::PrintTree()const{
        printTree(root);
    }
    template<typename T>
    bool Tree<T>::intree(const T& data,TreeNode<T>* sub) const{
        if(sub==nullptr){
            return false;
        }
        if(sub->data==data){
            return true;
        }
        return intree(data,sub->left)||intree(data,sub->right);
    }

    template<typename T>
    void Tree<T>::add(const T& data,TreeNode<T>*& sub){
        if(sub==nullptr){
            sub=new TreeNode<T>(data,nullptr,nullptr);
            return;
        }
        if(sub->data>data){
            add(data,sub->left);
        }
        else{
            add(data,sub->right);
        }
    }

    template<typename T>
    void Tree<T>::deleteTree(TreeNode<T>*& sub){
        if(sub==nullptr)return;
        deleteTree(sub->left);
        deleteTree(sub->right);
        delete sub;
        sub=nullptr;
    }

    template<typename T>
    void Tree<T>::printTree(TreeNode<T>* sub)const{
        if(sub==nullptr){
            return;
        }
        printTree(sub->left);
        std::cout<<sub->data<<" ";
        printTree(sub->right);
    }
}