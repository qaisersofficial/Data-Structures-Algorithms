#include <iostream>
#include <cmath>
using namespace std;
void starline()
{
    for (int i=0; i<90; i++)
   { 
    cout<<"*";
   }
    cout<<endl;
}
int main() {
 
     int a,b;
        cout<<"\t\tEnter first number: ";
        cin>>a;
        cout<<"\t\tEnter second number: ";
        cin>>b;
         starline();
        cout<<"\tFirst Number: "<<a<<"\tSecond Number: "<<b<<endl;
        cout<<endl;
        starline();
        cout<<"\t\tArithmetic Operations"<<endl;
        starline();
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
        starline();
        cout<<"\t\tRelational Operations"<<endl;
        starline();
        cout<<"Increment of First Number: "<<++a<<endl;
        cout<<"Increment of Second Number: "<<b++<<endl;
        cout<<"Decrement of First Number: "<<a--<<endl;
        cout<<"Decrement of Second Number: "<<--b<<endl;
        starline();
        cout<<"First Number is Greater than Second Number: "<<(a>b)<<endl;
        cout<<"First Number is Less than Second Number: "<<(a<b)<<endl;
        cout<<"First Number is Greater than or Equal to Second Number: "<<(a>=b)<<endl;
        cout<<"First Number is Less than or Equal to Second Number: "<<(a<=b)<<endl;
        cout<<"First Number is Equal to Second Number: "<<(a==b)<<endl;
        cout<<"First Number is Not Equal to Second Number: "<<(a!=b)<<endl;
        starline();
        cout<<"\t\tLogical Operations"<<endl;
        starline();
        cout<<"Logical AND: "<<(a&&b)<<endl;
        cout<<"Logical OR: "<<(a||b)<<endl;
        cout<<"Logical NOT of First Number: "<<(!a)<<endl;
        cout<<"Logical NOT of Second Number: "<<(!b)<<endl;
        starline();
        cout<<"\t\tBitwise Operations"<<endl;
        starline();
        cout<<"Bitwise AND: "<<(a&b)<<endl;
        cout<<"Bitwise OR: "<<(a|b)<<endl;
        cout<<"Bitwise XOR: "<<(a^b)<<endl;
        cout<<"Bitwise NOT of First Number: "<<(~a)<<endl;
        cout<<"Bitwise NOT of Second Number: "<<(~b)<<endl;
        cout<<"Left Shift of First Number: "<<(a<<1)<<endl;
        cout<<"Right Shift of Second Number: "<<(b>>1)<<endl;
        starline();
        cout<<"\t\tMiscellaneous Operations"<<endl;
        starline();
        cout<<"Maximum of First Number and Second Number: "<<max(a,b)<<endl;
        cout<<"Minimum of First Number and Second Number: "<<min(a,b)<<endl;
        starline();
        cout<<"Absolute Value of First Number: "<<abs(a)<<endl;
        cout<<"Absolute Value of Second Number: "<<abs(b)<<endl;
        starline();
        cout<<"Floor Value of First Number: "<<floor(a)<<endl;
        cout<<"Floor Value of Second Number: "<<floor(b)<<endl;
        starline();
        cout<<"Ceiling Value of First Number: "<<ceil(a)<<endl;
        cout<<"Ceiling Value of Second Number: "<<ceil(b)<<endl;
        starline();
        cout<<"Round Value of First Number: "<<round(a)<<endl;
        cout<<"Round Value of Second Number: "<<round(b)<<endl;
        starline();
        cout<<"Truncate Value of First Number: "<<trunc(a)<<endl;
        cout<<"Truncate Value of Second Number: "<<trunc(b)<<endl;
        starline();
        cout<<"Sine of First Number: "<<sin(a)<<endl;
        cout<<"Sine of Second Number: "<<sin(b)<<endl;
        cout<<"Cosine of First Number: "<<cos(a)<<endl;
        cout<<"Cosine of Second Number: "<<cos(b)<<endl;
        cout<<"Tangent of First Number: "<<tan(a)<<endl;
        cout<<"Tangent of Second Number: "<<tan(b)<<endl;
        starline();
        cout<<"Arc Sine of First Number: "<<asin(a)<<endl;
        cout<<"Arc Sine of Second Number: "<<asin(b)<<endl;
        cout<<"Arc Cosine of First Number: "<<acos(a)<<endl;
        cout<<"Arc Cosine of Second Number: "<<acos(b)<<endl;
        cout<<"Arc Tangent of First Number: "<<atan(a)<<endl;
        cout<<"Arc Tangent of Second Number: "<<atan(b)<<endl;
        starline();
        cout<<"Hyperbolic Sine of First Number: "<<sinh(a)<<endl;
        cout<<"Hyperbolic Sine of Second Number: "<<sinh(b)<<endl;
        cout<<"Hyperbolic Cosine of First Number: "<<cosh(a)<<endl;
        cout<<"Hyperbolic Cosine of Second Number: "<<cosh(b)<<endl;
        cout<<"Hyperbolic Tangent of First Number: "<<tanh(a)<<endl;
        cout<<"Hyperbolic Tangent of Second Number: "<<tanh(b)<<endl;
        starline();
        cout<<"Hyperbolic Arc Sine of First Number: "<<asinh(a)<<endl;
        cout<<"Hyperbolic Arc Sine of Second Number: "<<asinh(b)<<endl; 
        cout<<"Hyperbolic Arc Cosine of First Number: "<<acosh(a)<<endl;
        cout<<"Hyperbolic Arc Cosine of Second Number: "<<acosh(b)<<endl;
        cout<<"Hyperbolic Arc Tangent of First Number: "<<atanh(a)<<endl;
        cout<<"Hyperbolic Arc Tangent of Second Number: "<<atanh(b)<<endl;
        starline();
        cout<<"Square of First Number: "<<pow(a,2)<<endl;
        cout<<"Square of Second Number: "<<pow(b,2)<<endl;
        cout<<"Square Root of First Number: "<<sqrt(a)<<endl;
        cout<<"Square Root of Second Number: "<<sqrt(b)<<endl;
        starline();
        cout<<"Cube of First Number: "<<pow(a,3)<<endl;
        cout<<"Cube of Second Number: "<<pow(b,3)<<endl;
        cout<<"Cube Root of First Number: "<<cbrt(a)<<endl;
        cout<<"Cube Root of Second Number: "<<cbrt(b)<<endl;
        starline();
        cout<<"Power of First Number raised to Second Number: "<<pow(a,b)<<endl;
        cout<<"Power of Second Number raised to First Number: "<<pow(b,a)<<endl;   
        starline(); 
        cout<<"Logarithm of First Number: "<<log(a)<<endl;
        cout<<"Logarithm of Second Number: "<<log(b)<<endl;
        cout<<"Logarithm of First Number to the base 10: "<<log10(a)<<endl;
        cout<<"Logarithm of Second Number to the base 10: "<<log10(b)<<endl;
        starline();
        cout<<"Exponential of First Number: "<<exp(a)<<endl;
        cout<<"Exponential of Second Number: "<<exp(b)<<endl;
        starline();  
return 0;
}
