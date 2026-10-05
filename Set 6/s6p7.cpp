#include <iostream>
using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "===== MENU-DRIVEN CALCULATOR =====" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    try {
        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result = " << result << endl;
                break;

            case 2:
                result = num1 - num2;
                cout << "Result = " << result << endl;
                break;

            case 3:
                result = num1 * num2;
                cout << "Result = " << result << endl;
                break;

            case 4:
                if (num2 == 0) {
                    throw 0;  // Integer exception
                }

                result = num1 / num2;
                cout << "Result = " << result << endl;
                break;

            default:
                throw 'X';  // Character exception
        }
    }
    catch (int) {
        cout << "Error: Division by zero is not allowed!" << endl;
    }
    catch (char) {
        cout << "Error: Invalid operator/choice!" << endl;
    }

    return 0;
}