// Author – Shruti Choudhary -241497

#include <iostream>
using namespace std;

class Calculation
{
public:
    int evaluate(int m, int n)
    {
        return m + n;
    }

    float evaluate(float m, float n)
    {
        return m + n;
    }

    int evaluate(int side)
    {
        return side * side;
    }

    float evaluate(float radius)
    {
        return 3.14 * radius * radius;
    }

    int evaluate(int length, int breadth, int height)
    {
        return length * breadth * height;
    }
};

int main()
{
    Calculation C;
    cout << "Sum of Integers = "
         << C.evaluate(80, 40) << endl;
    cout << "Sum of Floats = "
         << C.evaluate(6.5f, 7.4f) << endl;
    cout << "Area of Square = "
         << C.evaluate(9) << endl;
    cout << "Area of Circle = "
         << C.evaluate(5.0f) << endl;
    cout << "Volume of Cuboid = "
         << C.evaluate(5, 8, 6) << endl;
    return 0;
}
