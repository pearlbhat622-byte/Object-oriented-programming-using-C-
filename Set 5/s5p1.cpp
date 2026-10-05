#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    string name;
    int rollNumber;
    int age;

public:
    // Constructor
    Student(string n, int r, int a) {
        name = n;
        rollNumber = r;
        age = a;
    }
};

// Derived class
class EngineeringStudent : public Student {
private:
    string branch;
    int semester;

public:
    // Constructor
    EngineeringStudent(string n, int r, int a, string b, int s)
        : Student(n, r, a) {
        branch = b;
        semester = s;
    }

    // Display function
    void display() {
        cout << "Student Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
        cout << "Branch: " << branch << endl;
        cout << "Semester: " << semester << endl;
    }
};

int main() {
    EngineeringStudent student("Pearl", 101, 18, "Computer Science", 1);

    student.display();

    return 0;
}