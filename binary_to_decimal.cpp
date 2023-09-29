#include<iostream>
#include<math.h>
using namespace std;
main(){
int n;
cin>>n;
int i=0,a=0;  
while (n!=0)
{
    int digit=n%10;
    if(digit==1){
         a=a+pow(2,i);
    }
    n=n/10;
i++;
}


cout<<a;




// int arr[n];

// return 0;
}