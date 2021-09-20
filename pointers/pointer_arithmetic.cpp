#include <iostream>

using namespace std;

int main(){
    char i = 'a';
    char* p =&i;

    cout<<p<<endl;
    p = p + 2;
    cout<<p<<endl;

    p = p-2;
    cout<<p<<endl;

}