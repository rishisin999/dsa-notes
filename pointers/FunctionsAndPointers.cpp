#include <iostream>

using namespace std;

int sum(int a[]/*int *a*/,int size){
    cout<<sizeof(a)<<endl;//here the size will 8 bytes though it resembles whole array but its a single pointer.
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=a[i];
    }
    return ans;
}

int main(){
    int a[10];
    cout<<sizeof(a)<<endl;//here the size will be 40 bytes
    cout<<sum(a,10)<<endl;//though we are passing whole array but it will be sent as a single pointer(size- 8 bytes)
    
    cout<<sum(a+3,7)<<endl;//we can also send a part of array by passing that address in paranthesis
}