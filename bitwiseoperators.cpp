#include<iostream>
using namespace std;
main(){



cout<<"Enter the number1 for bitwise Operation:- "<<endl;
int n;
cin>>n;
cout<<"Enter the number2 for bitwise Operation:- "<<endl;
int b;
cin>>b;
cout<<"AND: "<<(n&&b)<<endl;
cout<<"OR: "<<(n | b)<<endl;
cout<<"NOT of "<<n<<": "<<(~n)<<endl;
cout<<"NOT of "<<b<<": "<<(~b)<<endl;
cout<<"XOR: "<<(n^b)<<endl;

cout<<"********************"<<endl;
cout<<"Bitwise Shifting"<<endl;

cout<<"Right Shift of "<<n<<": "<<(n<<1)<<endl;
cout<<"Left Shift "<<n<<": "<<(n>>1)<<endl;




// int arr[n];

return 0;
}