#include <iostream>

using namespace std;

int main(){

    int *p = new int;
    delete p;//single deletion
    p = NULL;

    p = new int[100];
    delete [] p;//array deletion
    p = NULL;

    /*
    while(true){
        int *p = new int;
    }

    while(true){
        int i = 10;
    }
    */
}