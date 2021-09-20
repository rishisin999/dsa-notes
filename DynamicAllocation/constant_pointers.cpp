#include <iostream>

using namespace std;

int main(){
    int i = 10;
    int j = 21;
    int const *p = &i;//here I can change the address but not the value through p

    p = &j;
    int * const p2 = &i;
    (*p2)++;
    //p2 = &j; not allowed coz here pointer pointing to the address is fixed not the path
    //we can change the value through pointer but not the address

    int const *const p3 = &i;
    //here niether we can change the value through p3 nor we can change the address of p3
    //p3 = &j; not allowed
    //(*p3)++; not allowed
}