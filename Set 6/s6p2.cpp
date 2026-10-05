#include <iostream>
#include <cmath>
using namespace std;

// User-defined exception
class NegativeNumberException {
public:
    const char* message() const {
        return "Square root of a negative number is not allowed!";
    }
};

int main() {
    double num;

    cout << "Enter a number: ";
    cin >> num;

    try {
        if (num < 0) {
            throw NegativeNumberException();
        }

        double result = sqrt(num);
        cout << "Square root = " << result << endl;
    }
    catch (NegativeNumberException &e) {
        cout << "Error: " << e.message() << endl;
    }

    return 0;
}