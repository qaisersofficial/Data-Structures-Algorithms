#include <iostream>
using namespace std;

int main() {
     //initialize an Array strings
     string students_name [5]= { "Qaiser", "Ali", "Sharif", "Haider", "Soban" }; 
      // Traverse the array using for loop
      cout << "{ ";
     for (int i = 0; i < 5 ; i++)
     {
        // Print the array elements using indexing
        cout << "\"" << students_name[i] << "\"";
        if (i < 4) {
            cout << ", ";
        }
     }
     cout << " }";
     
return 0;
}
