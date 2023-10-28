#include<iostream>
#include "functions.h"
using namespace std;

int peek_index(int arr[],int n)
{
    int s=arr[0];
    int e=n-1;
    int mid=s+(e-s)/2;

    while(s=e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    return s;
}

main(){
int n;
cin>>n;
int arr[100];
//mountain array means the they have the values like mountain...in simple language consider a graph and mark the the values 0,5,10,4,0 
//now you can see that one mountain is formed when you draw a line joining this points
takeInput(arr,n);
int peek=peek_index(arr,n);
cout<<"Peek element in the array is: "<<peek<<endl;




return 0;
}