#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3;
    
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    // Check if n1 is greater than or equal to both n2 and n3
    if (n1 >= n2 && n1 >= n3) {
        cout << "Largest number: " << n1 << endl;
    }
    // Check if n2 is greater than or equal to both n1 and n3
    else if (n2 >= n1 && n2 >= n3) {
        cout << "Largest number: " << n2 << endl;
    }
    // If neither n1 nor n2 is the largest, n3 must be the largest
    else {
        cout << "Largest number: " << n3 << endl;
    }

    return 0;
}