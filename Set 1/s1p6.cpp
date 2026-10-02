#include <iostream>
using namespace std;

int main() {
    int num, reversed_num = 0;

    cout << "Enter an integer: ";
    cin >> num;

    while (num != 0) {
        reversed_num = reversed_num * 10 + num % 10;
        num /= 10; // Same as num = num / 10
    }

    cout << "Reversed Number = " << reversed_num << endl;
    return 0;
}