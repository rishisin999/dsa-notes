 #include <iostream>

using namespace std;

int main(){
    int a[] = {1,2,3};
    char b[] ="abc";
    cout<<a<<endl;
    cout<<b<<endl;//this will print whole array

    char* c = &b[0];//here c actually contains address of first character only but it plays different with cout
    cout<<c<<endl;//this will also print whole array
    //but if you want address you need to typecast (void*) before c (cout<<(void*)c<<endl;)
//But remember the concept: c actually contains address of a character we can pass that as an argument to a different function 
//But it plays differnt only with cout as it will print whole character array after that address.

    char c1 = 'a';
    char* pc = &c1;
    cout<<c1<<endl;
    cout<<pc<<endl;//this will print garbage values after character value until it finds NULL.

    //char *pstr = "abcde";//we should NOT INITIALIZE character pointer to a string coz it is in temporary memory
    char str[] = "abcde";//we should initialize like this.

}