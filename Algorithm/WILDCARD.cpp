#include<iostream>
#include<string>
using namespace std;

bool WildCard(const string& wildcard, const string& str){
    int wildLen=wildcard.length();
    int strLen=str.length();
    if(wildLen==0||strLen==0){
        return wildLen==0 && strLen==0;
    }
    string nowWild=wildcard.substr(0,1);
    if(nowWild=="*"){
        if(wildcard.length()==1){
            return str.length()>=1;
        }else{
            string nextWild=wildcard.substr(1,2);
            int findIndex=1;
            while(findIndex<str.length()){
                findIndex=str.find(nextWild,findIndex);
                if(findIndex==string::npos){
                    return false;
                }
                if(WildCard(wildcard.substr(1),str.substr(findIndex))){
                   return true; 
                }
            }
            return false;
        }
    }else if(nowWild=="?"){
        return WildCard(wildcard.substr(1),str.substr(1));
    }else{
        if(str.substr(0,1)!=nowWild){
            return false; 
        }
        return WildCard(wildcard.substr(1),str.substr(1));
    }
}

int main(){
    using std::string;
    using std::cout;
    using std::endl;

    string str1("*p*");
    string str2("papa");
    cout<<WildCard(str1,str2)<<endl;

}