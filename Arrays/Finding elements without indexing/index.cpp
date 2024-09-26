#include <iostream>
using namespace std;

int main() {
     int array[] = { 10, 20, 30, 40, 50 };
        //printing the elements without indexing
        cout << "First Element: array[0] = " << *array << endl;
        cout << "Second Element: array[1] = " << *(array + 1) << endl;
        cout << "Third Element: array[2] = " << *(array + 2) << endl;
        cout << "Fourth Element: array[3] = " << *(array + 3) << endl;
        cout << "Fifth Element: array[4] = " << *(array + 4) << endl;
return 0;
}
