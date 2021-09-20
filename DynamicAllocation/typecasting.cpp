#include <iostream>
using namespace std;

int main(){
    int i = 65;
    char c = i;//implicit typecasting
    cout<<c<<endl;

    int *p = &i;
    char *pc = (char*)p;//explicit typecasting
    cout<<*p<<endl;
    cout<<*pc<<endl;//here it will read one byte only and start printing until untill it finds NULL;
    //in int(4 bytes) the values are stored in reverse order means LSD is stored in leftmost byte to rightmost byte as opposite to general form right to left.
    //so for small number like 65 it will take only leftmost byte and rest 3 will be NULL. Hence, *(pc+1) will print nothing similarly 
    //for *(pc+2) and *(pc+3) but *(pc+0) will print A as usual.
    cout<<*(pc+1)<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;

    /*Similarly we can also explicitly typecast char pointer to int but as we know char take 1 byte and int(4 bytes), therfore after typecasting
      to int, it will read extra 3 bytes as a garbage value after dereferencing the int pointer*/
}