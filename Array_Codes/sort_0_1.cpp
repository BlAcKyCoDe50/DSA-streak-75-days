#include<iostream>
using namespace std;
#include "functions.h"

int sort(int arr[],int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = n-1; j >=i ; j--)
        {
            /* code */
            // cout<<"first"<<printArray(arr,n)<<endl;
            if(arr[i]==0){
                i=i+1;
                
            }
            
            else if(arr[j]==1) {
                j=j-1;
                
            }
            else if(arr[i]==1 && arr[j]==0 ){ 
                swap(arr[i],arr[j]);
            //    cout<<"third"<<printArray(arr,n)<<endl;
                i=i+1;
                j=j-1;
        }
        // cout<<"second"<<printArray(arr,n)<<endl;
        }
        
    }
    


}

main(){
int n;
cin>>n;
int arr[100];

takeInput(arr,n);
sort(arr,n);
printArray(arr,n);


return 0;
}