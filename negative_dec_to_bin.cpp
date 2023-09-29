#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int ones=0;
for (int i = 0; i < sizeof(n)*8; i++)  //sizeof  gives the size of the n in bytes so multypying it with 8
//so it will be converted to bits
{
    ones=~n; //performing exclusive OR for 1's compliment
    n>>1;
    cout<<ones;
}

//now two's compliment 



// cout<<;



// while (n!=0)
// {
    
// }




// int arr[n];

return 0;
}