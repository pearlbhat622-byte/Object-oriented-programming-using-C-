#include <iostream>
using namespace std;

class Maximum
{
public:
    // Maximum of two integers
    int max(int a, int b)
    {
        return (a > b) ? a : b;
    }

    // Maximum of three integers
    int max(int a, int b, int c)
    {
        int largest = a;

        if (b > largest)
            largest = b;

        if (c > largest)
            largest = c;

        return largest;
    }

    // Maximum of two floating-point numbers
    float max(float a, float b)
    {
        return (a > b) ? a : b;
    }
};

int main()
{
    Maximum m;

    cout << "Max of 10 and 20 = " << m.max(10, 20) << endl;
    cout << "Max of 5, 8 and 3 = " << m.max(5, 8, 3) << endl;
    cout << "Max of 3.2 and 4.5 = " << m.max(3.2f, 4.5f) << endl;

    return 0;
}