#include <iostream>
using namespace std;

int main() {
     int array[] = { 191, 500, 600, 400, 150 };
     // The size of the array[0]
     cout << "The size of one element in array is: " << sizeof(array[0]) << endl;
     // The size of the array
     cout << "The size of the array is: " << sizeof(array) << endl;
     // length of the array
     int lengthOfArray = sizeof(array) / sizeof(array[0]);
        cout << "The length of the array is: " << lengthOfArray << endl;
return 0;
}
