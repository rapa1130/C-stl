#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Point{
    int x;
    int y;
    public:
        Point(int x,int y)
        :x(x),y(y){}
        int getX() const{
            return x;
        }
        int getY() const{
            return y;
        }
        void Print() const{
            cout<<"{"<<x<<","<<y<<"}";
        }
};

bool Compare(const Point& left,const Point& right){
    if(left.getX()<right.getX()){
        return true;
    }
    else if(left.getX()>right.getX()){
        return false;
    }else{
        return left.getY()<right.getY();
    }
}
int main(){
    vector<Point> v;
    v.push_back(Point(1,1));
    v.push_back(Point(2,1));
    v.push_back(Point(3,1));
    v.push_back(Point(2,4));
    v.push_back(Point(3,0));

    vector<Point>::iterator iter;
    iter=max_element(v.begin(),v.end(),Compare);
    cout<<"max:";
    iter->Print(); 
    cout<<endl;
    
    cout<<"max:";
    (*iter).Print();
}