#include <iostream>
using namespace std;

class Complex {
private:
    int real;
    int imag;

public:
    // Constructor
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Member function for addition
    Complex add(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    // Member function returning a new object for multiplication
    Complex multiply(Complex c) {
        int r = (real * c.real) - (imag * c.imag);
        int i = (real * c.imag) + (imag * c.real);

        return Complex(r, i);
    }

    // Display function
    void display() {
        cout << real;

        if (imag >= 0)
            cout << " + " << imag << "i";
        else
            cout << " - " << -imag << "i";

        cout << endl;
    }

    // Friend function for subtraction
    friend Complex subtract(Complex c1, Complex c2);
};

// Non-member function for subtraction
Complex subtract(Complex c1, Complex c2) {
    return Complex(c1.real - c2.real,
                   c1.imag - c2.imag);
}

int main() {
    Complex c1(5, 3);
    Complex c2(2, 1);

    // Addition
    Complex sum = c1.add(c2);

    // Subtraction
    Complex difference = subtract(c1, c2);

    // Multiplication
    Complex product = c1.multiply(c2);

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    difference.display();

    cout << "Multiplication: ";
    product.display();

    return 0;
}