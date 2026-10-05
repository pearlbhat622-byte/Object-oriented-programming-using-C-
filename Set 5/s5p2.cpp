#include <iostream>
using namespace std;

// Base class
class Employee {
protected:
    int employeeID;
    string name;

public:
    // Constructor
    Employee(int id, string n) {
        employeeID = id;
        name = n;
    }
};

// Derived class
class Manager : public Employee {
private:
    string department;
    double salary;

public:
    // Constructor
    Manager(int id, string n, string dept, double sal)
        : Employee(id, n) {
        department = dept;
        salary = sal;
    }

    // Display function
    void display() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {

    // Array of 5 Manager objects
    Manager managers[5] = {
        Manager(101, "Rahul", "HR", 50000),
        Manager(102, "Priya", "Finance", 55000),
        Manager(103, "Aman", "IT", 60000),
        Manager(104, "Neha", "Marketing", 52000),
        Manager(105, "Arjun", "Sales", 48000)
    };

    // Display details
    cout << "Manager Details\n";
    cout << "==========================\n";

    for (int i = 0; i < 5; i++) {
        managers[i].display();
    }

    return 0;
}