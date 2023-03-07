#include<iostream>
#define INF 987654321
int cash[20][20][20];

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

int main(void){
    std::cout<<1;
    using std::cout;
    using std::cin;
    using std::endl;
    for(int i=0;20;i++){
        for(int j=0;j<20;j++){
            for(int k=0;k<20;k++){
                cash[i][j][k]=INF;
            }
        }
    }
    while(true){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==-1&&b==-1&&c==-1){
            return 0;
        }
        cout<<"w("<<a<<", "<<b<<", "<<c<<") = "
        <<w(a,b,c)<<endl;
    }
}