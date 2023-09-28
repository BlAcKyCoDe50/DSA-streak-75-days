#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
// int arr[n];
int count=0;
while (n!=0)
{
    if(n&1){
        count++;
    }

    n=n>>1;
}
    cout<<count;

// return 0;
}