// Author – Shruti Choudhary-241497

#include <iostream>
using namespace std;
class Complex {
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    Complex operator+(const Complex &c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(const Complex &c) {
        return Complex(real - c.real, imag - c.imag);
    }
    Complex operator++() {
        ++real;
        ++imag;
        return *this;
    }
    bool operator==(const Complex &c) {
        return (real == c.real && imag == c.imag);
    }

    friend ostream& operator<<(ostream &out, const Complex &c);
};

ostream& operator<<(ostream &out, const Complex &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

int main() {
    Complex c1(3, 4), c2(1, 2), c3;

     c3 = c1 + c2;
    cout << "Addition: " << c3 << endl;

    c3 = c1 - c2;
    cout << "Subtraction: " << c3 << endl;

    ++c1;
    cout << "After Increment: " << c1 << endl;

    
    if (c1 == c2)
        cout << "c1 and c2 are Equal" << endl;
    else
        cout << "c1 and c2 are Not Equal" << endl;

    return 0;
}
