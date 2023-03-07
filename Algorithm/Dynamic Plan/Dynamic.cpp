#include<iostream>
#define INF 98764321
int cash[21][21][21];
int w(int a,int b,int c);
using namespace std;


int main(void){
    
    for(int i=0;i<21;i++){
        for(int j=0;j<21;j++){
            for(int k=0;k<21;k++){
                cash[i][j][k]=INF;
            }
        }
    }
    while(true){
        int a=0,b=0,c=0;
        cin>>a>>b>>c;
        if(a==-1&&b==-1&&c==-1){
            return 0;
        }
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "
        <<w(a,b,c)<<endl;
    }
}

int w(int a,int b,int c){
    if(a<=0 || b <=0 ||c<=0){
        return 1;
    }
    if(a>20 || b>20 || c>20){
        return w(20,20,20);
    }
    int& ref=cash[a][b][c];
    if((INF)!=ref){
        return ref;
    }
    if(a<b&&b<c){
        ref= w(a,b,c-1) +w(a,b-1,c-1)-w(a,b-1,c);
        return ref;
    }
    else{
        ref= w(a-1,b,c)+w(a-1,b-1,c)+w(a-1,b,c-1)-w(a-1,b-1,c-1);
        return ref;
        }
    
}
