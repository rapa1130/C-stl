#include"Set.h"
#include"Set.cpp"
int main(){
    using DataStructNS::Set;

    Set<int> set;
    set.add(1);
    set.add(3);
    set.add(7);
    set.add(3);
    set.Output();
    Set<int> cop;
    cop.add(2);
    cop.add(6);
    cop.add(3);
    cop.Output();
    Set<int>* Unioned= set.Union(cop);
    Set<int>* Intersectioned=set.Intersection(cop);
    Unioned->Output();
    Intersectioned->Output();
}