// Author – Shruti Choudhary-241497

#include <iostream>
using namespace std;

class Book {
private:
    int bookId;
    static int count;   

public:
    Book() {
        count++;
        bookId = count;
    }

    void display() {
        cout << "Book ID: " << bookId << endl;
    }

    // Static member function
    static void showCount() {
        cout << "Total Books: " << count << endl;
    }
};

int Book::count = 0;

int main() {
    Book b1, b2, b3;

    b1.display();
    b2.display();
    b3.display();

    Book::showCount();

    return 0;
}
