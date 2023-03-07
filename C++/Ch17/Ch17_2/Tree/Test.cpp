#include"Tree.h"
#include<iostream>
int main(){
    using DataStructNS::Tree;
    
    {
        Tree<int> a;
    a.Add(1);
    a.Add(2);
    a.Add(0);
    a.PrintTree();
    a.~Tree();
    a=Tree<int>();
    a.Add(3);
    a.Add(78);
    a.Add(-11);
    a.PrintTree();
    }
}