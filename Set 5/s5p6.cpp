#include <iostream>
using namespace std;

// Template function to find the larger value
template <class T>
T larger(T a, T b) {
    return (a > b) ? a : b;
}

// Template function to swap two values
template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {

    // Integer
    int a = 10, b = 20;
    cout << "Larger integer: " << larger(a, b) << endl;
    swapValues(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    cout << endl;

    // Float
    float x = 5.5f, y = 3.2f;
    cout << "Larger float: " << larger(x, y) << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    cout << endl;

    // Double
    double p = 12.75, q = 18.50;
    cout << "Larger double: " << larger(p, q) << endl;
    swapValues(p, q);
    cout << "After swapping: p = " << p << ", q = " << q << endl;

    cout << endl;

    // Character
    char c1 = 'A', c2 = 'Z';
    cout << "Larger character: " << larger(c1, c2) << endl;
    swapValues(c1, c2);
    cout << "After swapping: c1 = " << c1 << ", c2 = " << c2 << endl;

    return 0;
}