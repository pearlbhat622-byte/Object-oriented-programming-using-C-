#include <iostream>
using namespace std;

// Base class
class Book {
protected:
    string title;
    string author;

public:
    // Constructor
    Book(string t, string a) {
        title = t;
        author = a;
    }
};

// Derived class
class EBook : public Book {
private:
    float fileSize;
    string fileFormat;

public:
    // Constructor
    EBook(string t, string a, float size, string format)
        : Book(t, a) {
        fileSize = size;
        fileFormat = format;
    }

    // Display function
    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "File Size: " << fileSize << " MB" << endl;
        cout << "File Format: " << fileFormat << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {

    // Array of 3 EBook objects
    EBook books[3] = {
        EBook("The Alchemist", "Paulo Coelho", 2.5, "PDF"),
        EBook("Atomic Habits", "James Clear", 3.2, "EPUB"),
        EBook("Harry Potter", "J.K. Rowling", 4.8, "PDF")
    };

    // Display details
    cout << "E-Book Details" << endl;
    cout << "==========================" << endl;

    for (int i = 0; i < 3; i++) {
        books[i].display();
    }

    return 0;
}