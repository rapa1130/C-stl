#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void PrintPairs(vector<pair<int,int>>& pairs);

bool IsAllExist(const vector<pair<int,int>>& pairs){
    int size=pairs.size()*2;
    bool* isExist=new bool[size];
    for(int i=0;i<size;i++){
        isExist[i]=false;
    }
    for(vector<pair<int,int>>::size_type i=0;i<pairs.size();i++){
        int first=pairs[i].first;
        int second=pairs[i].second;
        //cout<<"first:"<<first<<" second:"<<second<<endl;
        isExist[first]=isExist[second]=true;
    }
    for(int i=0;i<size;i++){
        if(!isExist[i]){
            return false;
        }
    }
    return true;
}
int OrderCount(const int n,const vector<pair<int,int>>& pairs,vector<pair<int,int>> nowPairs){
    //기저사례
    if(nowPairs.size()*2==n){
        if(IsAllExist(nowPairs)){
            return 1;
        }
        else{
            return 0;
            
        }
    }
    //부분문제 분할
    int totalOrderCount=0;
    for(vector<pair<int,int>>::size_type i=0;i<pairs.size();i++){
        nowPairs.push_back(pairs[i]);
        totalOrderCount+=OrderCount(n,vector<pair<int,int>>(pairs.begin()+i+1,pairs.end()),nowPairs);
        nowPairs.pop_back();
    }
    return totalOrderCount;
    
    //리턴
}
void PrintPairs(vector<pair<int,int>>& pairs){
    for(vector<pair<int,int>>::size_type i=0;i<pairs.size();i++){
        cout<<"{"<<pairs[i].first<<","<<pairs[i].second<<"}";
    }
    cout<<endl;
}

int main(){
    int testcase;
    cin>>testcase;
    while(testcase-->0){
        vector<pair<int,int>> pairs;
        int N,M;
        cin>>N>>M;
        for(int i=0;i<M;i++){
            pair<int,int> p;
            cin>>p.first>>p.second;
            pairs.push_back(p);
        }        
        vector<pair<int,int>> pair;
        cout<<OrderCount(N,pairs,pair)<<endl;
    }
}