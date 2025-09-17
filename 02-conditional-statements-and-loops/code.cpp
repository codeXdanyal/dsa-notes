#include <iostream>
using namespace std;

int main()
{
    // if-Else Statement
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    };

    // if - Else If
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase";
    }
    else
    {
        cout << "Not an alphabet";
    }

    // Ternary Operator
    int n;
    cin >> n;
    cout << (n > 45 ? "Greater than 45" : "Less or equal to 45");

    //  While loop
    int x, count = 1;
    cout << "Enter a number: ";
    cin >> x;
    while (count <= x)
    {
        cout << count << " ";
        count++;
    }

    //    Example: Check prime number

    // int n;
    // cin >> n;
    // bool isPrime = true;

    // for (int i = 2; i * i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         isPrime = false;
    //         break;
    //     }
    // }

    // if (isPrime && n > 1)
    // {
    //     cout << "Prime";
    // }
    // else
    // {
    //     cout << "Not Prime";
    // }

    // Sum of numbers from 1 to n divisible by 3:

    // int sum = 0, n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 3 == 0)
    //         sum += i;
    // }
    // cout << sum;
};