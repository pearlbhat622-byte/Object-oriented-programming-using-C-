#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int rollNumber;
    string name;
    float marks;

    cout << "Enter Roll Number: ";
    cin >> rollNumber;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    // Open file for writing
    ofstream file("students.txt");

    if (file.is_open()) {
        file << "Roll Number: " << rollNumber << endl;
        file << "Name: " << name << endl;
        file << "Marks: " << marks << endl;

        file.close();

        cout << "\nStudent details saved successfully!" << endl;
    }
    else {
        cout << "Error: Unable to open the file." << endl;
    }

    return 0;
}