#include <iostream>
using namespace std;

// User-defined exception
class NotEligibleException {
public:
    const char* message() const {
        return "You are not eligible to vote. Minimum age is 18.";
    }
};

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 18) {
            throw NotEligibleException();
        }

        cout << "You are eligible to vote." << endl;
    }
    catch (NotEligibleException &e) {
        cout << "Error: " << e.message() << endl;
    }

    return 0;
}