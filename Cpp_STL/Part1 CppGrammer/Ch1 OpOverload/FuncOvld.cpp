#include<iostream>

void Print(int arg){
    std::cout<<arg<<std::endl;
}

struct FuncObject{
    void operator()(int arg){
        std::cout<<arg<<std::endl;
    }
};

int main(){
    //1 Normal Function Call
    Print(10);
    void (*Print2)(int arg)=Print;
    //2 Function Pointer
    Print(12);
    //3 Function Object Overloading
    FuncObject Print3;
    Print3(18);

}