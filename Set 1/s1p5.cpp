#include <iostream>
using namespace std;

int main() {
    int n = 5; // Change this number to find its factorial
    long long factorial = 1;

    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }

    cout << "Factorial of " << n << " = " << factorial << endl;
    return 0;
}