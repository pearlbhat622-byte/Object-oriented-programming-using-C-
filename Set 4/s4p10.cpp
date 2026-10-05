#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    int bookID;
    string bookName;
    float price;

    static int totalBooks;

public:
    // Constructor
    Book(int id, string name, float p)
    {
        bookID = id;
        bookName = name;
        price = p;
        totalBooks++;
    }

    // Inline function to calculate discount price
    inline float discountPrice()
    {
        return price - (price * 10 / 100);
    }

    // Overload > operator to compare prices
    bool operator>(Book b)
    {
        return price > b.price;
    }

    // Friend function to display costlier book
    friend void displayCostlier(Book b1, Book b2);

    // Display book details
    void display()
    {
        cout << "Book ID: " << bookID << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Price: " << price << endl;
        cout << "Discount Price: " << discountPrice() << endl;
    }

    // Static member function
    static void displayTotalBooks()
    {
        cout << "Total books = " << totalBooks << endl;
    }
};

// Initialize static variable
int Book::totalBooks = 0;

// Friend function definition
void displayCostlier(Book b1, Book b2)
{
    if (b1 > b2)
    {
        cout << "\nCostlier Book:\n";
        b1.display();
    }
    else
    {
        cout << "\nCostlier Book:\n";
        b2.display();
    }
}

int main()
{
    Book b1(101, "C++ Programming", 500);
    Book b2(102, "Data Structures", 800);

    cout << "Book 1:\n";
    b1.display();

    cout << "\nBook 2:\n";
    b2.display();

    // Display total books
    cout << endl;
    Book::displayTotalBooks();

    // Display costlier book
    displayCostlier(b1, b2);

    return 0;
}