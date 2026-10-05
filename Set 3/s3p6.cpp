#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    double salary;

    // Constructor
    Employee(string n = "", double s = 0) {
        name = n;
        salary = s;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

// Non-member function to find employee with highest salary
Employee highestSalary(Employee employees[], int n) {
    Employee highest = employees[0];

    for (int i = 1; i < n; i++) {
        if (employees[i].salary > highest.salary) {
            highest = employees[i];
        }
    }

    return highest;
}

// Function to return employee with 10% salary increment
Employee reviseSalary(Employee e) {
    e.salary = e.salary + (e.salary * 0.10);
    return e;
}

int main() {

    // Array of Employee objects
    Employee employees[3] = {
        Employee("Alice", 40000),
        Employee("Bob", 55000),
        Employee("Charlie", 45000)
    };

    // Find employee with highest salary
    Employee highest = highestSalary(employees, 3);

    cout << "Employee with Highest Salary:" << endl;
    highest.display();

    // Give 10% increment to an employee
    Employee revised = reviseSalary(employees[0]);

    cout << "\nAfter 10% Increment:" << endl;
    revised.display();

    return 0;
}