#include<iostream>
#include<string.h>

class String{
    public:
    String():size(0){
        str=new char[100];
    }
    String(const char* str){
        int size= strlen(str);
        this->str=new char[size];
        for(int i=0;i<size;i++){
            this->str[i]=str[i];
        }
        this->size=size;
    }
    operator char*()const{
        return str;
    }
    private:
    char* str;
    int size;
};

int main(){
    
    String str("ABCDEFG");
    const char* cStr=str;
    std::cout<<cStr;
    str=cStr;
}