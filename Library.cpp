#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bookName;
    float price;

public:
    Book(string name, float p) {
        bookName = name;
        price = p;
    }

    // Declare friend function from Library class
    friend class Library;
};

class Library {
public:
    void book_price(Book b) {
        cout << "Book Name: " << b.bookName << endl;
        cout << "Book Price: ₹" << b.price << endl;
    }
};

int main() {
    Book b("C++ Programming", 499.99);
    Library lib;
    lib.book_price(b);
    return 0;
}
