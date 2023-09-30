#include<iostream>
using namespace std;
main(){
int n;
cin>>n;
int ans=0;
while(n!=0){
    if(n<-2,147,483,648 || n>2,147,483,647){
        cout<<"number is out of the integer range..!!"<<endl;
        break;
    }
    int digit=n%10; //extract the last digit
    // ans=(ans*10)+digit;
    cout<<digit; //print
    n=n/10; //remove the las digit
    // n=n>>1;it gives wroong values
}
// cout<<ans;



// int arr[n];

return 0;
}