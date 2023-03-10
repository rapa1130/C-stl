#include<iostream>

using namespace std;

class Point{
    public:
    explicit Point(int x,int y):x(x),y(y){}
    void Print(){
        cout<<x<<", "<<y<<endl;
    }
    void PrintInt(int arg){
        cout<<arg<<endl;
    }
    private:
    int x,y;
};

int main(){
    Point pt(2,3);
    Point* ptr=&pt;

    pt.Print();
    pt.PrintInt(5);


   void (Point::*Fptr)();
   void (Point::*Fptr2)(int);
   Fptr=&Point::Print;
   (pt.*Fptr)();
   Fptr2=&Point::PrintInt;
   (pt.*Fptr2)(8);
   (ptr->*Fptr)();
   (ptr->*Fptr2)(1);

   
}