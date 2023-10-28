#include<iostream>
#include "functions.h"
using namespace std;

int duplicate(int arr[],int n){
int result=0;
 for (int i = 0; i < n; i++)
 {
    /* code */
    result=result^arr[i];
}
 for (int i = 1; i < n; i++)
 {
    /* code */
    result=result^i;
 }

 return result;
 
}



main(){
int n;
cin>>n;
int arr[100];

takeInput(arr,n);
int ans=duplicate(arr,n);
cout<<"Duplicate element is: "<<ans<<endl;




return 0;
}