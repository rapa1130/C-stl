#include"Point.h"
#include<iostream>
int main(){
    using namespace PointNS;
    using std::cout;
    using std::cin;
    using std::endl;

    Point p1(1,3);
    Point p2(2,3);
    Point result=p1+p2;
    result.Print();
}