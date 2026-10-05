#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int index;

    cout << "Enter 10 elements:" << endl;

    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Enter an index (0-9): ";
    cin >> index;

    try {
        if (index < 0 || index > 9) {
            throw "Invalid index! Index must be between 0 and 9.";
        }

        cout << "Element at index " << index << " = " << arr[index] << endl;
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}