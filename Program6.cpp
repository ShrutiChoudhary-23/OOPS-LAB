#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;

public:
    // Constructor with dynamic initialization
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

    // Function to calculate area
    float calculateArea() {
        return length * breadth;
    }

    // Function to display result
    void display() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    float l, b;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    Rectangle r(l, b);
    r.display();

    return 0;
}
