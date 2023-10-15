#include<iostream>
#include "functions.h"
using namespace std;
main(){
int n;
cin>>n;
int arr[100];
takeInput(arr,n);

for (int i = 0; i <= n; i=i+2)
{
    cout<<"i is "<<i<<endl;
    if((i+1)<n){
        swap(arr[i],arr[i+1]);
        cout<<"i is "<<i<<endl;
        
    }
    
}

printArray(arr,n);


return 0;
}