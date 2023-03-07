
#include"hashtable.h"
#include"hashtable.cpp"
#include<iostream>



int main(){
    using DataStructNS::Hashtable;
    using std::cout;
    using std::endl;

    Hashtable table;
    table.put("dog");
    table.put("cat");
    table.put("turtle");
    table.put("bird");

    cout<<"dog:"<<table.containsString("dog")<<endl;
    cout<<"cat:"<<table.containsString("cat")<<endl;
    cout<<"turtle:"<<table.containsString("turtle")<<endl;
    cout<<"bird:"<<table.containsString("bird")<<endl;
    
}