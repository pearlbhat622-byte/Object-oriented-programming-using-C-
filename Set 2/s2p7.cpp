#include <iostream>
using namespace std;
class Employee {
private:
	string employeeName;
	double salary;
	double HRA;
	double DA;
	double gross_salary;

public:
	Employee() {
		cout<<"Enter the employee name: ";
		cin>>employeeName;
		cout<<"Enter the salary: ";
		cin>>salary;
	}
	void calculateHRA() {
		HRA=0.2*salary;
	}
	void calculateDA() {
		DA=0.1*salary;
	}
	void grossSalary() {
		gross_salary=HRA+DA;
		cout<<"The gross salary is: "<<gross_salary;
	}
};
int main() {
	Employee e1;
	e1.calculateHRA();
	e1.calculateDA();
	e1.grossSalary();
}
