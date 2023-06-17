#include<iostream>
using namespace std;

class Point{
    public:
    Point(int x,int y)
    :x(x),y(y){}
    int x,y;
    void print(){
        cout<<x<<","<<y<<endl;
    }
};

template<typename T>
void Print(T a){
    cout<<a<<endl;
}
template<>
void Print(Point p){
    p.print();
}

int main(){
    Point t(1,2);
    Print(t);
    Print(1);
    Print(0.143);
    Print("aa");
}