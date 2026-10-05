#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l = 0, double w = 0) {
        length = l;
        width = w;
    }

    // Member function to check equal area
    bool equalArea(Rectangle r) {
        return (length * width) == (r.length * r.width);
    }

    // Display rectangle
    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    // Friend declaration for non-member function
    friend Rectangle addDimensions(Rectangle r1, Rectangle r2);
};

// Non-member function returning a new Rectangle
Rectangle addDimensions(Rectangle r1, Rectangle r2) {
    return Rectangle(r1.length + r2.length,
                     r1.width + r2.width);
}

int main() {

    Rectangle r1(10, 5);
    Rectangle r2(5, 10);

    // Check whether areas are equal
    if (r1.equalArea(r2))
        cout << "Both rectangles have equal area." << endl;
    else
        cout << "Both rectangles do not have equal area." << endl;

    // Create a new rectangle by adding dimensions
    Rectangle r3 = addDimensions(r1, r2);

    cout << "\nNew Rectangle:" << endl;
    r3.display();

    return 0;
}