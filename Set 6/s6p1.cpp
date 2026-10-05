#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;

    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw "Division by zero is not allowed!";
        }

        double result = (double)numerator / denominator;
        cout << "Result = " << result << endl;
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}