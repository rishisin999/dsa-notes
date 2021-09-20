#include <iostream>

using namespace std;

int main(){
//constant int-
    const int i=10;//here also we have to initialize it with a value like in reference variables
    int const i2 = 10;//same as const int.

    //i=12;// we cannot assign to a variable which is const qualified.

//constant refernce from a non const int-
    int j = 12;
    const int &k = j;
    k++;// we can't do k++ coz const means the PATH to access the memory through k is constant not the actual storage itself is constant.
    //So, as path is constant through k we can only do j++ though the change in the value is also reflected in k, but we can't change it through k bcoz of const.
    j++;
    cout<<k<<endl;

//constant reference from a const int-
    int const j2 = 12;
    int const &k2 = j2;
    //so in above 2 lines(21,22) now we cannot change the value from either of the two variables bcoz of constant path
    //as both paths are constant therfore the value will also be fixed.

//refernce from a const int-
    int const j3 = 123;
    int &k3 = j3;//this will show error it is not allowed
    k3++;//bcoz when j3(I) itself doesnot have access to write in j3(it is read only path not writable)
         //then how can I grant access to other refernce variables to write in j3 therefore it is not allowed.
}
//conclusion:-
/*1. Storage is NOT constant, Path is constant.
  2. if we have a read only path we cannot make another writable path using this read only path. 
*/