#include <iostream>
using namespace std;

class Area
{
public:
    // Area of square
    void calculate(int side)
    {
        cout << "Area of square = " << side * side << endl;
    }

    // Area of rectangle
    void calculate(int length, int breadth)
    {
        cout << "Area of rectangle = " << length * breadth << endl;
    }

    // Area of circle
    void calculate(double radius)
    {
        cout << "Area of circle = " << 3.14159 * radius * radius << endl;
    }
};

int main()
{
    Area a;

    a.calculate(5);       // Square
    a.calculate(4, 6);    // Rectangle
    a.calculate(3.5);     // Circle

    return 0;
}