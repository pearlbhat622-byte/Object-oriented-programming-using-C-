#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imaginary = i;
    }

    // Overload + operator
    Complex operator+(Complex c)
    {
        Complex result;

        result.real = real + c.real;
        result.imaginary = imaginary + c.imaginary;

        return result;
    }

    // Display complex number
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(2, 5);

    Complex c3 = c1 + c2;

    c3.display();

    return 0;
}