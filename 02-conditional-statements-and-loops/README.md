## Data Structure & Algorithm - [Danyal Khan](https://github.com/codeXdanyal)

### Lecture 2 : Conditional Statements & Loops 

### Conditional Statements

Conditional statements allow the program to make decisions based on certain conditions. The flow of execution depends on whether the condition evaluates to true or false.

#
### If-Else Statement

**Syntax**
```cpp
if (condition) {
    // Executes if condition is true
} else {
    // Executes if condition is false
}
```

**Example**
```cpp
int num;
cin >> num;
if (num % 2 == 0) {
    cout << "Even";
} else {
    cout << "Odd";
}
```

#
### If - Else If 

Used to check multiple conditions sequentially. If one condition is true, its block executes, and the rest are skipped.

**Syntax**  
```cpp
if (condition1) {
    **// executes if condition1 is true**
} else if (condition2) {```cpp
    // executes if condition2 is true
} else {
    // executes if all above are false
}
```

**Example: Character Case Check**  
```cpp
char ch;
cin >> ch;
if (ch >= 'a' && ch <= 'z') {
    cout << "Lowercase";
} else if (ch >= 'A' && ch <= 'Z') {
    cout << "Uppercase";
} else {
    cout << "Not an alphabet";
}
```

#
### Ternary Operator

A shorthand for simple if-else statements.

**Syntax**
```cpp
condition ? expression_if_true : expression_if_false;
```

**Example**
```cpp
int n;
cin >> n;
cout << (n > 45 ? "Greater than 45" : "Less or equal to 45");
```
#
### Loops

Loops allow executing a block of code multiple times until a condition is met. Common loop types in C++ include while, for, and do-while.


### While Loop

**Syntax**
```cpp
while (condition) {
    // Work to be repeated
}
```

**Example: Print numbers 1 to n**
```cpp
int n, count = 1;
cin >> n;
while (count <= n) {
    cout << count << " ";
    count++;
}
```
### For Loop

**Syntax**
```cpp
for (initialization; condition; update) {
    // Work to be repeated
}
```

**Example: Print numbers 0 to 10**
```cpp
for (int i = 0; i <= 10; i++) {
    cout << i << " ";
}
```

**Example: Sum of numbers from 1 to n**
```cpp
int sum = 0, n;
cin >> n;
for (int i = 1; i <= n; i++) {
    sum += i;
}
cout << sum;
```

**Example: Sum of all odd numbers from 1 to n**
```cpp
int sum = 0, n;
cin >> n;
for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) sum += i;
}
cout << sum;
```
#
### Do-While Loop

**Syntax**
```cpp
do {
    // Work to be executed at least once
} while (condition);
```

**Example: Check prime number**
```cpp
int n;
cin >> n;
bool isPrime = true;

for (int i = 2; i * i <= n; i++) {
    if (n % i == 0) {
        isPrime = false;
        break;
    }
}

if (isPrime && n > 1) {
    cout << "Prime";
} else {
    cout << "Not Prime";
}

```
***Optimization Tip:*** Only check factors up to √n because factors repeat beyond that.

#
### Nested Loops

A loop inside another loop. The outer loop controls the number of rows, and the inner loop controls what is printed in each row.

**Syntax**
```cpp
for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= columns; j++) {**
        // Work```cpp
    }
}
```
#
### Continue and Break Keywords

**Continue:** Skips the rest of the current iteration and moves to the next iteration.

**Break:** Exits the loop immediately.

**Example**
```cpp
for (int i = 0; i <= 10; i++) {
    if (i == 5) continue;  // Skip printing 5
    if (i == 8) break;     // Stop loop at 8
    cout << i << " ";
}
```
#
### Practice Questions

1. **Sum of numbers from 1 to n divisible by 3:**  

    ```cpp
    int sum = 0, n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) sum += i;
    }
    cout << sum;
    ```
2. **Factorial of a number n:**  

    ```cpp
    int n, fact = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << fact;
    ```