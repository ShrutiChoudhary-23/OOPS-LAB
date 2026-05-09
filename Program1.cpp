// Author – Shruti Choudhary-241497

#include <iostream>
using namespace std;

inline int add(int x, int y)
{
    return x + y;
}

inline int subtract(int x, int y)
{
    return x - y;
}

inline int multiply(int x, int y)
{
    return x * y;
}

inline float divide(int x, int y)
{
    return (float)x / y;
}

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition = " << add(x, y) << endl;
    cout << "Subtraction = " << subtract(x, y) << endl;
    cout << "Multiplication = " << multiply(x, y) << endl;

    if (y != 0)
        cout << "Division = " << divide(x, y) << endl;
    else
        cout << "Division by zero is not possible." << endl;

    return 0;
}
