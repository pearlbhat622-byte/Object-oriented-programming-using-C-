#include <iostream>
using namespace std;

int main() {
    int n;
    bool is_prime = true;

    cout << "Enter a positive integer: ";
    cin >> n;

    // 0 and 1 are not prime numbers
    if (n <= 1) {
        is_prime = false;
    } else {
        // Loop to check if n is divisible by any number up to n/2
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                is_prime = false; // Found a factor, so it's not prime
                break;            // Exit the loop early
            }
        }
    }

    // Print the final result
    if (is_prime) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}