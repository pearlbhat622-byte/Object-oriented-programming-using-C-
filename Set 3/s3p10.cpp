#include <iostream>
using namespace std;

class Result {
private:
    int rollNo;
    int marks[5];

public:
    // Constructor
    Result(int r = 0, int m1 = 0, int m2 = 0, int m3 = 0,
           int m4 = 0, int m5 = 0) {
        rollNo = r;
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
        marks[3] = m4;
        marks[4] = m5;
    }

    // Calculate total marks
    int total() {
        int sum = 0;

        for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }

        return sum;
    }

    // 1. Member function to compare total marks
    void compare(Result other) {
        if (total() > other.total())
            cout << "Roll No. " << rollNo << " has higher marks." << endl;
        else if (total() < other.total())
            cout << "Roll No. " << other.rollNo << " has higher marks." << endl;
        else
            cout << "Both students have equal marks." << endl;
    }

    // Display result
    void display() {
        cout << "Roll Number: " << rollNo << endl;

        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }

        cout << endl;
        cout << "Total: " << total() << endl;
    }

    // Friend function for topper
    friend Result topper(Result r1, Result r2, Result r3);

    // Friend function for grace marks
    friend Result applyGrace(Result r);
};


// 2. Non-member function receiving three objects
//    and returning the topper
Result topper(Result r1, Result r2, Result r3) {

    Result top = r1;

    if (r2.total() > top.total())
        top = r2;

    if (r3.total() > top.total())
        top = r3;

    return top;
}


// 3. Function returning a new Result object after grace marks
Result applyGrace(Result r) {

    int totalGrace = 0;

    for (int i = 0; i < 5; i++) {

        // Give maximum 5 grace marks per subject
        int grace = 5;

        // Don't allow marks to exceed 100
        if (r.marks[i] + grace > 100)
            grace = 100 - r.marks[i];

        // Total grace cannot exceed 20
        if (totalGrace + grace > 20)
            grace = 20 - totalGrace;

        r.marks[i] += grace;
        totalGrace += grace;

        if (totalGrace == 20)
            break;
    }

    return r;
}


int main() {

    Result r1(101, 80, 75, 90, 85, 70);
    Result r2(102, 85, 88, 78, 90, 80);
    Result r3(103, 75, 82, 95, 80, 85);

    // Compare two results
    cout << "Comparison:\n";
    r1.compare(r2);

    // Find topper
    Result top = topper(r1, r2, r3);

    cout << "\nTopper:\n";
    top.display();

    // Apply grace marks
    Result revised = applyGrace(r1);

    cout << "\nResult after Grace Marks:\n";
    revised.display();

    return 0;
}