#include"Point.h"
#include<iostream>

namespace PointNS{
    Point::Point():x(0),y(0){}
    Point::Point(int x,int y)
    :x(x),y(y){}
    
void Point::Print()const{
    using std::cout;
    using std::endl;
    cout<<"{"<<x<<", "<<y<<"}"<<endl;
}

int Point::GetX() const{
    return this->x;
}

int Point::GetY() const{
    return this->y;
}
void Point::SetX(int x){
    this->x=x;
}
void Point::SetY(int y){
    this->y=y;
}
const Point& Point::operator++(){
    this->x++;
    this->y++;
    return *this;
}
const Point Point::operator++(int){
    Point ret(x,y);
    this->x++;
    this->y++;
    return ret;
}

const Point& Point::operator--(){
    x--;
    y--;
    return *this;
}
const Point Point::operator--(int){
    Point ret(x,y);
    x--;
    y--;
    return ret;
}
const bool Point::operator==(const Point& right) const{
    return right.x==this->x && right.y == this->y;
}
const bool Point::operator!=(const Point& right) const{
    return right.x!=x || right.y != y;
}
Point operator-(const Point& left,const Point& right){
    return Point(left.GetX()-right.GetX(),left.GetY()-right.GetY());
}
Point operator+(const Point& left,const Point& right){
    return Point(left.x+right.x,left.y+right.y);
}
}