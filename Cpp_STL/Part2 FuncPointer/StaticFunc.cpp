#include<iostream>

using namespace std;

void Print(){
    cout<<"Global"<<endl;
}

namespace AA{
    void Print(){
        cout<<"AA"<<endl;
    }
}

class Point{
    public:
    static void Print(){
        cout<<"Point"<<endl;
    }
};

int main(){
    Print();
    AA::Print();
    Point::Print();

    void (*funcPtr)(void);
    funcPtr=Print;
    funcPtr();
    funcPtr=AA::Print;
    funcPtr();
    funcPtr=Point::Print;
    funcPtr();
}