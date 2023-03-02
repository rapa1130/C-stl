#ifndef POINT_H
#define POINT_H

namespace PointNS{

class Point{
    public:
    Point();
    Point(int x,int y);
    
    void Print()const;
    const Point& operator++(); //Prefix
    const Point operator++(int); //Postfix
    const Point& operator--();
    const Point operator--(int);
    const bool operator==(const Point& right) const;
    const bool operator!=(const Point& right) const;
    friend Point operator+(const Point& left,const Point& right);
    int GetX() const;
    int GetY() const;
    void SetX(int x);
    void SetY(int y);

    private:
    int x,y;
};
    Point operator-(const Point& left,const Point& right);

}

#include"Point.cpp"

#endif