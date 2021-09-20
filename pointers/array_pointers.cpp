#include <iostream>

using namespace std;

int main(){
    int a[10];
    cout<<*a<<endl;//dereference the 0th index address
    cout<<a+1<<endl;//address of 1st index
    cout<<*(a+1)<<endl;//derefernce the 1st index address
    int* p = &a[0];

    cout<<a<<endl;//address of first index(a[0])
    cout<<p<<endl;//address of 1st index(a[0])

    cout<<&p<<endl;//address of itself(p)
    cout<<&a<<endl;//this will also give address of first index only

    cout<<sizeof(p)<<endl; //8 bytes
    cout<<sizeof(a)<<endl; //40 bytes (int a[10])

    p = p+1;
    p = a+1;//here we cannot write a++ infact we cannot write a++ anywhere
    //we cannot do a = a + 1. we cannot reassign 'a' coz there is no memory corresponding to a.
}