#include <iostream>

using namespace std;

inline int max(int a, int b){//after using inline wherever this function is called this code will get placed to 
//there before compiling and actually on runtime no function is called & there is no creation of extra copy variable in that function.
//but this happens only for small 2-3 lines code functions for more than 3 lines of code in a function compiler doesnot do this and 
//ther is no effect of inline.
    return (a>b)?a:b;//tertiary operator:- if true then returns a if false then returns b
}

int main(){
    int a,b;
    cin>>a>>b;

    int c = max(a,b);

    int x,y;
    x=12;
    y=34;

    int z = max(x,y);
}