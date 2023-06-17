#include<iostream>
#include<functional>
#include<algorithm>

struct Less{
    bool operator()(int a,int b){
        return a<b;
    }
};

int main(){
    int a[10]={1,10,2,9,3,8,4,7,5,6};
    using std::for_each;
    using std::less;
    using std::greater;
    using std::sort;
    std::cout<<less<int>()(10,20)<<std::endl<<std::endl;
    sort(a,a+10,less<int>());
    for_each(a,a+10,[](int arg){std::cout<<arg<<std::endl;});

    typedef greater<int> great;
    sort(a,a+10,great());
    for_each(a,a+10,[](int arg){std::cout<<arg<<std::endl;});
    sort(a,a+10,Less());
    for_each(a,a+10,[](int arg){std::cout<<arg<<std::endl;});

}