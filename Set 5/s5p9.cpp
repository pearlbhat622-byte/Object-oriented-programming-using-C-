#include <iostream>
using namespace std;

template <class T>
class Result {
private:
    T marks[5];

public:
    // Constructor
    Result(T m1, T m2, T m3, T m4, T m5) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }

    // Calculate total marks
    T total() {
        T sum = 0;

        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }

        return sum;
    }

    // Calculate average marks
    double average() {
        return static_cast<double>(total()) / 5;
    }

    // Find highest marks
    T highest() {
        T high = marks[0];

        for (int i = 1; i < 5; i++) {
            if (marks[i] > high) {
                high = marks[i];
            }
        }

        return high;
    }

    // Find lowest marks
    T lowest() {
        T low = marks[0];

        for (int i = 1; i < 5; i++) {
            if (marks[i] < low) {
                low = marks[i];
            }
        }

        return low;
    }

    // Display complete result
    void display() {
        cout << "Marks: ";

        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }

        cout << endl;
        cout << "Total Marks: " << total() << endl;
        cout << "Average Marks: " << average() << endl;
        cout << "Highest Marks: " << highest() << endl;
        cout << "Lowest Marks: " << lowest() << endl;
    }
};

int main() {

    // Integer marks
    Result<int> integerResult(85, 90, 78, 92, 88);

    cout << "===== Integer Result =====" << endl;
    integerResult.display();

    cout << endl;

    // Floating-point marks
    Result<float> floatResult(85.5, 91.2, 78.6, 94.3, 88.7);

    cout << "===== Floating-Point Result =====" << endl;
    floatResult.display();

    return 0;
}