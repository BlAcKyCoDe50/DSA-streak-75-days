#include<iostream>
#include "functions.h"
using namespace std;


int triplet(int arr[],int n,int sum){
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int k = i+1; k < n; k++)
        {
            /* code */
            for (int z = k+1; z < n; z++)
            {
                /* code */
                if (arr[i]+arr[k]+arr[z]==sum)
                {
                    /* code */
                    cout<<"Triplet pair is: "<<endl;
                    cout<<arr[i]<<" "<<arr[k]<<" "<<arr[z]<<endl;
                }
                else{
                    // cout<<"No triplet sum"<<endl;
                }
                
            }
            
        }
        
    }
    


}


main(){
int n;
cin>>n;
int arr[100];
int sum=0;
cin>>sum;

takeInput(arr,n);
triplet(arr,n,sum);

return 0;
}