#include <iostream>
using namespace std;

int main() {
    int array[] = { 10, 20, 30, 40, 50 };
    //printing the address using array name
    cout << "The address of the array is: " << &array << endl; //0xe9f97ff7c0
    //defining the pointer
    int *arrayPointer = array ;
    //printing the address using pointer for first element of an array
    cout << "The address of the array[0] is: " << arrayPointer << endl; //0xe9f97ff7c0
    //printing the address using pointer for second element of an array
    cout << "The address of the array[1] is: " << arrayPointer + 1 << endl; //0xe9f97ff7c4
    //printing the address using pointer for third element of an array
    cout << "The address of the array[2] is: " << arrayPointer + 2 << endl; //0xe9f97ff7c8
    //printing the address using pointer for fourth element of an array
    cout << "The address of the array[3] is: " << arrayPointer + 3 << endl; //0xe9f97ff7cc
    //printing the address using pointer for fifth element of an array
    cout << "The address of the array[4] is: " << arrayPointer + 4 << endl;  //0xe9f97ff7d0
     
return 0;
}
