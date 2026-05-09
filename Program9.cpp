// Author – Shruti Choudhary-241497

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* ptr;   

    Circle c;
    Rectangle r;

    ptr = &c;
    ptr->draw();   

    ptr = &r;
    ptr->draw();   

    return 0;
}

