#include <iostream>
using namespace std;

class Student
{
private:
    static int count;

public:
    // Constructor
    Student()
    {
        count++;
    }

    // Display total number of objects
    static void displayCount()
    {
        cout << "Total number of student objects created = "
             << count << endl;
    }
};

// Initialize static variable
int Student::count = 0;

int main()
{
    Student s1;
    Student s2;
    Student s3;
    Student s4;

    Student::displayCount();

    return 0;
}