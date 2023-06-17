#include<iostream>
#include<string>
using namespace std;

template<typename T>
class ObjectInfo{
        T data;
    public:
        ObjectInfo(const T& data)
            :data(data){}

        void print(){
            //타입,크기,값
            cout<<"타입:"<<typeid(data).name()<<endl;
            cout<<"크기:"<<sizeof(data)<<endl;
            cout<<"값:"<<data<<endl;
        }
};

template<>
class ObjectInfo<string>
{
        string data;
    public:
        ObjectInfo(const string& data)
            :data(data){}
        void print(){
            cout<<"타입:string"<<endl;
            cout<<"문자열 크기:"<<data.length()<<endl;
            cout<<"값:"<<data<<endl;
        }
};

int main(){
    ObjectInfo<int> info1(1);
    ObjectInfo<double> info2(1.534);
    ObjectInfo<string> info3("asd");
    info1.print();
    info2.print();
    info3.print();
    
}