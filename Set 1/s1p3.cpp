#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    // Handle edge case for 0 or negative terms
    if (n <= 0) {
        cout << "Please enter a positive number of terms." << endl;
        return 0;
    }

    int first = 0, second = 1, nextTerm;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Print the first term
        if (i == 1) {
            cout << first << " ";
            continue;
        }
        // Print the second term
        if (i == 2) {
            cout << second << " ";
            continue;
        }
        // Calculate subsequent terms
        nextTerm = first + second;
        first = second;
        second = nextTerm;

        cout << nextTerm << " ";
    }
    cout << endl;

    return 0;
}