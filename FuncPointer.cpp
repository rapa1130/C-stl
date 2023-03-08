#include<iostream>

void Print(int arg){
    std::cout<<arg<<std::endl;
}

int main(){
    void (*pf)(int);
    pf=Print;
    Print(1);
    pf(11);
    (*pf)(33);
}