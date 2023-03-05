#include<iostream>

namespace FunctionOverloading{
    using std::cout;
    using std::endl;

    class FuncObject{
    public:
    void operator()(int arg){
        cout<<arg<<endl;
    }
    void operator()(int arg1,int arg2){
        cout<<arg1<<" "<<arg2<<endl;
    }
    void operator()(int arg1,int arg2,int agr3){
        cout<<arg1<<" "<<arg2<<" "<<agr3<<endl;
    }
};
}


int main(){
    //1 생성 객체에 암시호출
    using FunctionOverloading::FuncObject;
    FuncObject print;
    print(1);
    print(1,2);
    print(1,2,3);
    //2 생성 객체에 명시호출
    print.operator()(1);
    print.operator()(1,2);
    print.operator()(1,2,3);
    //3 임시 객체에 암시호출
    FuncObject()(1);
    FuncObject()(1,2);
    FuncObject()(1,2,3);
    //4 임시 객체에 명시호출
    FuncObject().operator()(1);
    FuncObject().operator()(1,2);
    FuncObject().operator()(1,2,3);


    //36페이지 해야돼!!!!!!!!!!
}