#include<iostream>
#include "functions.h"
using namespace std;

int cout_unique(int arr[],int n){
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=ans^arr[i];  // XOR operations with every element
        //because XOR gives 0 with same element and 1 with differnet element.
        }
    return ans;
}



main(){
int n;
cin>>n;
int arr[100];

takeInput(arr,n);
int result=cout_unique(arr,n);
cout<<"Unique Element is: "<<result<<endl;
printArray(arr,n);




return 0;
}