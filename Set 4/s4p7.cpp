#include <iostream>
using namespace std;

class Number
{
private:
    int a, b;

public:
    // Constructor
    Number(int x, int y)
    {
        a = x;
        b = y;
    }

    // Friend function declaration
    friend void findLarger(Number n);
};

// Friend function definition
void findLarger(Number n)
{
    if (n.a > n.b)
        cout << "Larger number = " << n.a << endl;
    else
        cout << "Larger number = " << n.b << endl;
}

int main()
{
    Number n(25, 40);

    findLarger(n);

    return 0;
}