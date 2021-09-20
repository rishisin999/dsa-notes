#include <iostream>

using namespace std;

int sum(int a[],int size,int si = 0){
    //NOTE:-Always give default values to the rightmost argument in a function
    //      if you are giving default values in middle then it will be very confusing to compiler.
    int ans = 0;
    for(int i=si;i<size;i++){
        ans+=a[i];
    }
    return ans;
}

int sum2(int a, int b, int c = 0, int d = 0){
    return a+b+c+d;
}

int main(){
    int a[20];
    for(int i=0;i<20;i++){
        cin>>a[i];
    }
    cout<<sum(a,20)<<endl;//here we can give two arguments or 3 arguments
    //if we are giving two arguments then function will by default take third argument as zero
    //otherwise it will take what we are giving in the argument.

}