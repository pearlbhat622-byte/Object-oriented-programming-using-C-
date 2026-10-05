#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    int inches;

public:
    // Constructor
    Distance(int f = 0, int i = 0)
    {
        feet = f;
        inches = i;
    }

    // Overload + operator
    Distance operator+(Distance d)
    {
        Distance result;

        result.feet = feet + d.feet;
        result.inches = inches + d.inches;

        // Convert inches into feet
        if (result.inches >= 12)
        {
            result.feet += result.inches / 12;
            result.inches = result.inches % 12;
        }

        return result;
    }

    // Display distance
    void display()
    {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d1(5, 8);
    Distance d2(3, 7);

    Distance d3 = d1 + d2;

    cout << "First distance: ";
    d1.display();

    cout << "Second distance: ";
    d2.display();

    cout << "Total distance: ";
    d3.display();

    return 0;
}