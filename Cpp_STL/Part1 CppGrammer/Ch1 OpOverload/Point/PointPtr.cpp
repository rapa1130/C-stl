#include"PointPtr.h"
#include<iostream>
namespace PointNS{
    PointPtr::PointPtr(Point* ptr)
    :ptr(ptr)
    {
    }
    PointPtr::~PointPtr(){
        delete ptr;
    }
}
