#include <iostream>
using namespace std;

class Interest
{
public:
    // Inline function to calculate Simple Interest
    inline float calculateSI(float P, float R, float T)
    {
        return (P * R * T) / 100;
    }
};

int main()
{
    Interest obj;

    float P = 5000;
    float R = 5;
    float T = 2;

    cout << "Principal = " << P << endl;
    cout << "Rate = " << R << "%" << endl;
    cout << "Time = " << T << " years" << endl;

    cout << "Simple Interest = "
         << obj.calculateSI(P, R, T) << endl;

    return 0;
}