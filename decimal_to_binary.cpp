#include<iostream>
#include<math.h>
using namespace std;
int  main(){
int n;
cin>>n;

int binary=0;
int i=0;


while (n!=0)
{
    int bin=n&1;    //kisi bhe no ko 1 k sath AND krnay pr 
    //agar 0 aaya to even or 1 aaya to odd
    binary=(bin* pow(10,i)) + binary;    //formula for reversing the digit 
    //pow is the function in math libaray pow(10,i) means 10^i

     n=n>>1; //right shift by one for removing of last digit of n
    i++;
    //we have to reverse the answer for gaining the correct output
}

 cout<<binary; 


// int arr[n];

return 0;
}