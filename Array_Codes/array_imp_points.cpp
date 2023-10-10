//intialization of a array with the same value in all indexes

//The array will be initialized to 0 in case we provide empty initializer list or just specify 0 in the initializer list.

int num[5] =  { };                // num = [0, 0, 0, 0, 0]
int num[5] =  { 0 };             // num = [0, 0, 0, 0, 0]

//value till the particular index with same value

//Designated Initializer: This initializer is used when we want to initialize a 
//range with the same value. This is used only with GCC compilers.
//[ first . . . last ] = value;
//int num[5]={ [0 . . . 4 ] = 3 };               // num = { 3, 3, 3, 3, 3}
//We may also ignore the size of array:


#include<iostream>
using namespace std;

int main() {
    int array[100];

    //To initialize the array with value'1'.
    fill_n(array, 100, 1);

    //To check the array input (kewaal 5 hi kari h print)
    for(int i = 0; i <= 5; i++){
        cout << array[i] << endl;
    }

}