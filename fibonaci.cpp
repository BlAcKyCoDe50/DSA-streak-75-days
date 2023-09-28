#include<iostream>
using namespace std;
main(){
int n;
// cin>>n;
cout<<"Enter the number till that fibonaci Series: "<<endl;
cin>>n;
int a=0,b=1;
cout<<a<<endl;
cout<<b<<endl;
for (int i = 0; i < n; i++)
{
    int fib=a+b;
    cout<<fib<<endl;

    a=b;
    b=fib;
}

// int arr[n];

return 0;
}