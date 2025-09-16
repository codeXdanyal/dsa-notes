# Data Structure & Algorithm - [Danyal Khan](https://github.com/codeXdanyal)

### Lecture 1 : Flowchart & Pseudocode + Installatio

### Our First Program in C++

C++ is a case-sensitive, compiled programming language. A basic C++ program requires boilerplate code (preprocessor directives, main function) and uses standard input/output streams.

**Code Example**  

```cpp
#include <iostream>           // Preprocessor directive (boilerplate code)
using namespace std;          // Use standard namespace

int main() {
    cout << "Hello World";    // Output statement
    return 0;                 // Program ends successfully
}
```

##

### How Code Runs  

The source code is written in a .cpp file. The compiler translates it into an executable binary file.
**Flow**  

```cpp
Source Code (program.cpp) → Compiler → Executable File (program.exe)
```

#

### Variables

Variables are containers used to store data in memory. User-defined variables are called identifiers, which must start with an underscore (_) or a letter (A–Z, a–z).
**Code Example**  

```cpp
int age = 25;   // Integer variable
```

#

### Data Types

Data types define what kind of data a variable can store. C++ provides primitive types like int, char, float, and double.
**Examples**  

```cpp
int age = 25;           // 4 bytes, integer  
char grade = 'D';       // 1 byte, character  
float pi = 3.14f;       // 4 bytes, floating-point  
double salary = 32234.2; // 8 bytes, double-precision decimal  
```

#

### Type Casting

Type casting converts data from one type to another. It can be implicit (automatic) or explicit (manual).  

**Implicit Type Casting (small → big)**  

```cpp
char grade = 'A';  // ASCII value of A = 65
int val = grade;   // Automatically converted
cout << val;       // Output: 65  
```

**Explicit Type Casting (big → small)**  

```cpp
double price = 100.99;
int x = (int) price;   // Manually converted
cout << x;             // Output: 100
```

#

### Input in C++

cin is used to take input from the user. At the time of declaration, variables hold garbage values until initialized.
**Code Example**  

```cpp
int age;  
cout << "Enter your age: ";  
cin >> age;   // User input stored in age
```

***Note:*** <kbd>>></kbd> and <kbd><<</kbd> are examples of operator overloading in C++ (used differently depending on context).


#
### Operators

Operators perform operations on variables and values.

#### Types of Operators in C++

1. **Arithmetic Operators**  

    +, -, *, /, %   //

    ***Example:***

    ```cpp
    5 / (double)2 → 2.5
    ```

2. **Relational Operators**

    ```cpp
     >, >=, <, <=, ==, != 
    ```

3. **Logical Operators**

    ```cpp
    &&   // AND → Both conditions must be true  
    ||   // OR  → At least one condition must be true  
    !    // NOT → Opposite of condition 
    ```

4. **Unary Operators**

    ```cpp
    ++x   // Pre-increment  
    x++   // Post-increment  
    --x   // Pre-decrement  
    x--   // Post-decrement 
    ```
