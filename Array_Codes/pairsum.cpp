#include<iostream>
#include "functions.h"
using namespace std;


int pairsum(int arr[],int n,int sum){

for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        /* code */
        if(arr[i]+arr[j]==sum){
            cout<<"Pairs are: "<<endl;
            cout<<arr[i]<<" "<<arr[j]<<endl;
        }

    }
    
}


}

main(){
int n;
cin>>n;
int sum=0;
int arr[100];
cout<<"Enter the sum: "<<endl;
cin>>sum; 
takeInput(arr,n);


pairsum(arr,n,sum);





return 0;
}