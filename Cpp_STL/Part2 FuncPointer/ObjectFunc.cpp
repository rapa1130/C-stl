#include<iostream>

void Print(){
    std::cout<<"Func_Global()"<<std::endl;
}

class Point{
    public:
    void Print(){
        std::cout<<"Func()"<<std::endl;
    }
};
int main(){
    Point pt;
    Point* ptPtr=&pt;

    Print();
    pt.Print();
    ptPtr->Print();

}