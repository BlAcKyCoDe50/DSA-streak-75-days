#include<iostream>
#include "functions.h"
using namespace std;

int count(int arr[],int n){

        int ans=0;
        int ar[100];
        for (int i = 0; i < n; i++)
        {
            int ans=ans^arr[i];
        
        for (int k = 0; i < 100; i++)
        {
            ar[k]=ans;
        }
        int ans2=0;
        for (int j= 0; j < 100; j++)
        {
            ans2=ans2^ar[j];
            
        }
        if(ans2==0){
            cout<<"false";
        }
        else{cout<< "true";}
        }

}



main(){
int n;
cin>>n;
int arr[100];

takeInput(arr,n);
int result=count(arr,n);
cout<<result<<endl;

return 0;
}