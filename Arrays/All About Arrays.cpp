#include <iostream>
using namespace std;

int main() {
    // Array Decaration in C++
    // int arr[5];

    // Array Initialization in C++
    // int arr[5] = {1, 2, 3, 4, 5};

    // Array Initialization in C++ (Without Specifying Size)
    // int arr[] = {1, 2, 3, 4, 5}; //the length of an array is equal to the number of elements inside curly braces.
    // cout << arr[0] << endl;


    // initlize array after decaration (using loop)
    // int arr[5];
    // for (int i = 0; i < 5; i++) {
    //     arr[i] = i + 1; // we can also take input from the user using cin >> arr[i];
    // }// this method is used when we want to take input from the user or we cant to asssign elements one by one to each index of the array.
    // for (int i = 0; i < 5; i++) {
    //     cout << arr[i] << " "; // output: 1 2 3 4 5
    // }

    // getting input from user and print the array
    // int N;
    // cout<<"Please tell me how many elements you want to enter in the array: ";
    // cin >> N;
    //     int arr[N]; // this is called dynamic array
    //     cout<< "Type the element of the array:";
    //     for( int i = 0; i < N; i++){
    //         cin >> arr[i];
    //     }
    //     cout << " The elements of the array are: ";
    //     for ( int i = 0; i < N; i++){
    //         cout << arr[i] << " ";
    //     }


    // initialize an array partially in C++
    int partialArray[10] = { 55, 33};
    for (int i = 0; i < 10; i++) {
        cout << partialArray[i] << " "; // output: 55 33 0 0 0 0 0 0 0 0
    }
return 0;
}