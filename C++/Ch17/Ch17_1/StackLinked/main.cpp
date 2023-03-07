#include<iostream>
#include"Stack.h"
#include"Stack.cpp"

int main(void){
    using DataStructNS::Stack;
    using std::cout;
    using std::endl;
    using std::cin;

    Stack<char> stack;
    char ch;
    while((ch=getchar())!='\n'){
        stack.push(ch);
    }
    while(!stack.isEmpty()){
        cout<<stack.pop();
    }
}