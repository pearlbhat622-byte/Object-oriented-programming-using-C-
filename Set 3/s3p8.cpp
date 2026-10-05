#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    int copies;

public:
    // Constructor
    Book(int id = 0, string t = "", int c = 0) {
        bookID = id;
        title = t;
        copies = c;
    }

    // Member function to exchange information
    void exchange(Book &other) {
        int tempID = bookID;
        bookID = other.bookID;
        other.bookID = tempID;

        string tempTitle = title;
        title = other.title;
        other.title = tempTitle;

        int tempCopies = copies;
        copies = other.copies;
        other.copies = tempCopies;
    }

    // Display book details
    void display() {
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Number of Copies: " << copies << endl;
    }

    // Friend declaration for non-member function
    friend Book moreCopies(Book b1, Book b2);
};

// Non-member function
Book moreCopies(Book b1, Book b2) {
    if (b1.copies > b2.copies)
        return b1;
    else
        return b2;
}

int main() {

    Book b1(101, "C++ Programming", 5);
    Book b2(102, "Data Structures", 8);

    cout << "Before Exchange:\n";
    cout << "\nBook 1:\n";
    b1.display();

    cout << "\nBook 2:\n";
    b2.display();

    // Exchange information
    b1.exchange(b2);

    cout << "\nAfter Exchange:\n";
    cout << "\nBook 1:\n";
    b1.display();

    cout << "\nBook 2:\n";
    b2.display();

    // Find book with more copies
    Book result = moreCopies(b1, b2);

    cout << "\nBook with More Copies:\n";
    result.display();

    return 0;
}