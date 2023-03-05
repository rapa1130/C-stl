#include"Point.h"
#include<iostream>
#include"PointPtr.h"
int main(){
    using namespace PointNS;
    using std::cout;
    using std::cin;
    using std::endl;
    PointPtr ptr(new Point(1,2));
    Point p(1,2);
    int val=p;
    std::cout<<val<<std::endl;
}