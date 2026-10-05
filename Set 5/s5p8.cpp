#include <iostream>
using namespace std;

// Template class
template <class T>
class Array {
private:
    T arr[5];

public:
    // Function to input elements
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    // Function to display elements
    void display() {
        cout << "Elements: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Function to find largest element
    T largest() {
        T max = arr[0];

        for (int i = 1; i < 5; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }

    // Function to find smallest element
    T smallest() {
        T min = arr[0];

        for (int i = 1; i < 5; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }

        return min;
    }
};

int main() {

    // Integer array
    Array<int> intArray;

    cout << "Integer Array" << endl;
    cout << "=============" << endl;

    intArray.input();
    intArray.display();

    cout << "Largest element: " << intArray.largest() << endl;
    cout << "Smallest element: " << intArray.smallest() << endl;

    cout << endl;

    // Floating-point array
    Array<float> floatArray;

    cout << "Floating-Point Array" << endl;
    cout << "====================" << endl;

    floatArray.input();
    floatArray.display();

    cout << "Largest element: " << floatArray.largest() << endl;
    cout << "Smallest element: " << floatArray.smallest() << endl;

    return 0;
}