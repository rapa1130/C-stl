#ifndef POINTPTR_H
#define POINTPTR_H

#include"Point.h"

namespace PointNS{
    class PointPtr{
        public:
        PointPtr(Point* ptr);
        Point* operator->(){
            return ptr;
        }
        Point& operator*(){
            return *ptr;
        }
        ~PointPtr();
        private:
            Point* ptr;
    };
}
#include"PointPtr.cpp"
#endif