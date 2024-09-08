#include <iostream>
#include <cmath>
using namespace std;

int main() {
     int a,b;
     cout<<"Enter first number: ";
        cin>>a;
        cout<<"Enter second number: ";
        cin>>b;
        cout<<"Addition: "<<a+b<<endl;
        cout<<"Subtraction: "<<a-b<<endl;
        cout<<"Multiplication: "<<a*b<<endl;
        if (b==0)
        {
            cout<<"Division: Infinity"<<endl;
            cout<<"Modulus: Undefined"<<endl;
        }
        else
        {
            cout<<"Division: "<< a / static_cast<float>(b) <<endl;
            cout<<"Modulus: "<< a%b <<endl;
        }
return 0;
}
