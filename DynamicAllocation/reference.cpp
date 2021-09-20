#include <iostream>

using namespace std;

void increment(int &i){//pass by refernce, changes will reflect in main function also
    i++;
}

//bad practice
int &f(int n){
    int a = n;
    return a;
}

//bad practice
int *f2(){
    int i = 10;
    return &i;
}

int main(){
    int i;//first initializes a memory automatically with a garbage value
    i = 10;//then assigns a value

    int &j = i;//here we are creating a refernce variable and we must specify it with an existing memory, so that it initializes with that existing memory
    // it doesn't have its own memory but is pointing to alrdy someother's existing memory that we are assigning)
    /*we cannot write like below:-
      int &j; //here we are creating a refernce variable but we are not initializing it with an existing memory so it will give error.
      j=i; */
    i++;
    cout<<j<<endl;
    cout<<i<<endl;

    int k = 100;
    j = k;
    cout<<i<<endl;
    //reference variables are same memory but with different names. can access that memory with different variables.

    increment(i);
    cout<<i<<endl;

    int& k1 = f(i);

    int *p = f2();
}