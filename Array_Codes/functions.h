
#include<iostream>
using namespace std;

#ifndef FUNCTIONS_H
#define FUNCTIONS_H



int takeInput(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
}

int printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int minElement(int arr[],int size){
   
     int min= INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<min)
    {
        /* code */
        min=arr[i];
    }
    }
    return min;
}

int maxElement(int arr[],int size){
     int max= INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max){
    
        /* code */
        max=arr[i];
    }
    }
    return max;
}

int sumOfArray(int arr[],int size){
    int sum=0;
for (int i = 0; i < size; i++){
       sum=arr[i]+sum;
}
    cout<<"The sum of the array is "<<sum<<endl;
}

int reverseArray(int arr[],int size){

 for (int i = size-1; i >=0; i--)
 {
    /* code */
    cout<<arr[i]<<" ";
 }
 

}

#endif


