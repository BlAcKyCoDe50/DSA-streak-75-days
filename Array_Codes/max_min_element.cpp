#include<iostream>
using namespace std;

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


main(){
int n;
cin>>n;
int arr[100];
takeInput(arr,n);
// cout<<sizeof(n);

cout<<"The minimum element is "<<minElement(arr,n)<<endl;
cout<<"The maximum element is "<<maxElement(arr,n)<<endl;

cout<<"The whole array is "<<endl;
printArray(arr,n);



return 0;
}