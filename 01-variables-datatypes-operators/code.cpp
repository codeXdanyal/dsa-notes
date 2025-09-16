// Boiler Plate Code 

#include <iostream>
using namespace std;

int main() {

// Variables
int s = 20;

// Data Types
int age = 35;
char grade = 'A';
float PI = 3.14;
double nums = 2345678.232;

// Tye Casting 
// Implicit TC
char x = 'D';
int val = x;
cout << val << endl;

// Explicit TC
double d = 34567892342;
int g = (int)d;

// Input in CPP
char a;
cout <<"Enter any character: ";
cin >> a;

// Opearators
// Arithmatic operator
cout << (1 + 2 )<< endl; 
cout << (1 - 2 )<< endl; 
cout << (1 * 2 )<< endl; 
cout << (5 / (float)2 )<< endl; 
cout << (1 % 2 )<< endl; 

// Relational opearor
cout << (1 > 2 )<< endl; 
cout << (1 >= 2 )<< endl; 
cout << (1 < 2 )<< endl; 
cout << (1 <= 2 )<< endl; 
cout << (1 != 2 )<< endl; 
cout << (1 == 2 )<< endl; 

// Logical Operator
cout << (1 > 2 && 2 < 1 )<< endl; 
cout << (1 > 2 || 2 < 1 )<< endl; 
cout << (1 > 2 || ! 2 < 1 )<< endl; 

// Unary Operator
cout << age++ << endl; 
cout <<  ++age << endl; 
cout <<  --age << endl; 
cout << age-- << endl; 




return 0;

}
