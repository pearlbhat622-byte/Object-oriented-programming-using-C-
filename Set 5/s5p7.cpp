#include <iostream>
using namespace std;

// Template class
template <class T>
class Pair {
private:
    T value1, value2;

public:
    // Constructor
    Pair(T a, T b) {
        value1 = a;
        value2 = b;
    }

    // Function to find maximum
    T maximum() {
        return (value1 > value2) ? value1 : value2;
    }

    // Function to find minimum
    T minimum() {
        return (value1 < value2) ? value1 : value2;
    }

    // Function to display maximum and minimum
    void display() {
        cout << "First Value: " << value1 << endl;
        cout << "Second Value: " << value2 << endl;
        cout << "Maximum: " << maximum() << endl;
        cout << "Minimum: " << minimum() << endl;
    }
};

int main() {

    // Testing with integers
    Pair<int> intPair(25, 10);

    cout << "Integer Pair" << endl;
    cout << "=============" << endl;
    intPair.display();

    cout << endl;

    // Testing with floating-point numbers
    Pair<float> floatPair(12.5f, 18.75f);

    cout << "Floating-Point Pair" << endl;
    cout << "===================" << endl;
    floatPair.display();

    return 0;
}