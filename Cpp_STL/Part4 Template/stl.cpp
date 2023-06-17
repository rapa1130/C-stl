#include<iostream>
#include<string>
using namespace std;

template<typename Iter,typename Func>
void For_each(Iter front,Iter end,Func func){
    for(Iter now=front;now!=end;now++){
        func(*now);
    }
}

//1. 템플릿 함수로 함수 포인터 넘기기
template<typename T>
void Print(T data){
    cout<<data<<endl;
}
//2. 템플릿 함수 객체로 함수 포인터 넘기기
//인자를 붙여서 함수를 넘길 수 있다는 특징이 있음
template<typename T>
class Functor{
        string sep;
    public:
        Functor(const string& sep=" ")
            :sep(sep){}
        void operator()(const T& data){ 
            cout<<data<<sep;
        }
};

int main(){
    int* arr=new int[10]{1,2,3,4,5,6,7,8,9,10};
    //For_each(arr,arr+10,Print<int>);
    string* strArr=new string[]{
        "a",
        "bb",
        "ccc",
        "dddd",
        "eeeeee"
    };
    //For_each(strArr,strArr+5,Print<string>);
    
    For_each(strArr,strArr+5,Functor<string>());
    For_each(strArr,strArr+5,Functor<string>("\n"));
}