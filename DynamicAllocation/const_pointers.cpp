#include <iostream>

using namespace std;

void f(const int *p){//since p is declared const so in this function we cannot change value through p(benefit of const)
    //(*p)++; not allowed to change.
}

void g(int const &a){//here also we cannot change through a (benefit of const)
    //a++; not allowed to change.
}

int main(){
    int const i = 10;

    int const *p = &i;/*now here we can try to dereference this pointer and write(change) the value of a read only variable(const variable)
    which is not allowed So, here pointer has to promise that it will not rewrite the read only variable by declaring itself a const pointer*/

    int j = 12;//now this is non const so we can read and write
    int const *p2 = &j;//this can only read 
    cout<<*p2<<endl;
    j++;
    cout<<*p2<<endl;

    int *p3 = &j;
    f(p3);
    g(j);

}