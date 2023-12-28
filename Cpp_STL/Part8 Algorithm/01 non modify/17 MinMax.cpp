#include<iostream>
#include<algorithm>
using namespace std;

class Point{
    private:
    int x;
    int y;
    public:
        Point(){}
        Point(int x,int y)
            :x(x),y(y){}
        int getX() const{
            return x;
        }
        int getY() const{
            return y;
        }
        void Print()const{
            cout<<"{"<<x<<","<<y<<"}"<<endl;
        }
};

bool X_Compare(const Point& left,const Point& right){
    return left.getX()<right.getX();
}
bool Y_Compare(const Point& left,const Point& right){
    return left.getY()<right.getY();
}


int main(){
    int a=10,b=20;
    int r;
    r=max(a,b);
    cout<<"max:"<<r<<endl;
    r=min(a,b);
    cout<<"min:"<<r<<endl;

    Point pt1(3,9);
    Point pt2(5,4);

    Point pt;
    pt=max(pt1,pt2,X_Compare);
    cout<<"x max:"; pt.Print();
    pt=max(pt1,pt2,Y_Compare);
    cout<<"y max:"; pt.Print();
}