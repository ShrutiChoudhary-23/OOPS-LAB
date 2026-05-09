// Author – Shruti Choudhary-241497

#include <iostream>
using namespace std;

class Student
{
private:
    int id;
    string name;

public:

    Student()
    {
        id = 0;
        name = "Not Assigned";

        cout << "Default Constructor Called" << endl;
    }

    Student(int i, string n)
    {
        id = i;
        name = n;

        cout << "Parameterized Constructor Called" << endl;
    }

    Student(Student &s)
    {
        id = s.id;
        name = s.name;

        cout << "Copy Constructor Called" << endl;
    }

    Student(int i)
    {
        id =i;
        name = "Unknown";

        cout << "Overloaded Constructor Called" << endl;
    }

    void display()
    {
        cout <<"id: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{

    Student s1;
    s1.display();

    cout << endl;

    Student s2(1001, "Sahil");
    s2.display();

    cout << endl;

    Student s3(s2);
    s3.display();

    cout << endl;

    Student s4(1002);
    s4.display();

    return 0;
}

