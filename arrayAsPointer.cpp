#include<iostream>
using namespace std;

void addByOne(int *s){
    *s = *s + 1;
}

void addByTow(const int *s){
    //*s = *s + 10;// We can't not update *s becasue it points to constant data
    cout << *s << endl; // we can read it, first element
    s++; // we can update its address, seond element in the array
    cout<< *s << endl;// we can point to a new address. which value 2
}

void addByThree(int * const s){
    *s = *s + 30; // it's ok becasue it's conatnt address 
    //s++; // we can't not becasue it's pointer points to constat address 
    cout<<*s << endl;// we can read it 31
}

int readOnly (const int * const s){
    cout<<*s << endl;// we can read it// 1
    //*s = *s + 3; // we can't not becasue it's pointer points to constat data
    //s++; // we can't not becasue it's pointer points to constat address
}
int main(){
    int x []={1,2,3,4};
    int *p = x;
    addByOne(p);
    cout<< *p <<endl; // 2 
    addByTow(p);// will print 6 and another unknow value
    addByThree(p);// will print 32
    readOnly(p);// will print 32
}
