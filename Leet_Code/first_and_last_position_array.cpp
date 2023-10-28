#include<iostream>
using namespace std;
#include "functions.h"


int first_occurece(int arr[],int n,int key){

 int start=arr[0];
 int end=n-1;

 int mid=start+(end-start)/2;
int ans=-1;
while (start<=end)
{
    if(arr[mid]==key){
        ans=mid;
        cout<<mid;
        end=mid-1;
    }

    else if(key>arr[mid]){
        start=mid+1;
    }
    else if(key<arr[mid]){
        end=mid-1;
    }
    mid=start+(end-start)/2;

}
return ans;
}

int last_occurece(int arr[],int n,int key){

 int start=arr[0];
 int end=n-1;

 int mid=start+(end-start)/2;
int ans=-1;
while (start<=end)
{
    if(arr[mid]==key){
        ans=mid;
        start=mid+1;
    }

    else if(key>arr[mid]){
        start=mid+1;
    }
    else if(key<arr[mid]){
        end=mid-1;
    }
    mid=start+(end-start)/2;

}
return ans;





}


main(){
int n;
cin>>n;
int arr[100];
int key=0;
takeInput(arr,n);
cout<<"Enter the element you want to know occurence: "<<endl;
cin>>key;
int first=first_occurece(arr,n,key);
int last=last_occurece(arr,n,key);
cout<<"First occurence of "<<key<<" is at index: "<<first<<endl;
cout<<"Last occurence of "<<key<<" is at index: "<<last<<endl;
// printArray(arr,n);





return 0;
}