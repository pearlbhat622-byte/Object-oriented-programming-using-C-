#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person() {
        name = "";
        age = 0;
    }

    Person(string n, int a) {
        name = n;
        age = a;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Teacher class
class Teacher : public Person {
private:
    string subject;
    int experience;

public:
    Teacher() : Person() {
        subject = "";
        experience = 0;
    }

    Teacher(string n, int a, string s, int e)
        : Person(n, a) {
        subject = s;
        experience = e;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Experience: " << experience << " years" << endl;
    }
};

// Research Scholar class
class ResearchScholar : public Person {
private:
    string researchTopic;
    string university;

public:
    ResearchScholar() : Person() {
        researchTopic = "";
        university = "";
    }

    ResearchScholar(string n, int a, string topic, string uni)
        : Person(n, a) {
        researchTopic = topic;
        university = uni;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Research Topic: " << researchTopic << endl;
        cout << "University: " << university << endl;
    }
};

// Template class
template <class T>
class RecordManager {
private:
    T records[5];
    int count;

public:
    RecordManager() {
        count = 0;
    }

    void addRecord(T record) {
        if (count < 5) {
            records[count] = record;
            count++;
        }
    }

    void displayRecords() {
        for (int i = 0; i < count; i++) {
            records[i].display();
            cout << "----------------------" << endl;
        }
    }
};

int main() {

    // Teacher objects
    Teacher t1("Rahul", 40, "Computer Science", 15);
    Teacher t2("Priya", 35, "Mathematics", 10);

    // Research Scholar objects
    ResearchScholar r1(
        "Aman", 27,
        "Artificial Intelligence",
        "IIT Delhi"
    );

    ResearchScholar r2(
        "Neha", 29,
        "Machine Learning",
        "IIT Bombay"
    );

    // Teacher record manager
    RecordManager<Teacher> teacherManager;

    teacherManager.addRecord(t1);
    teacherManager.addRecord(t2);

    // Research Scholar record manager
    RecordManager<ResearchScholar> scholarManager;

    scholarManager.addRecord(r1);
    scholarManager.addRecord(r2);

    // Display teacher records
    cout << "===== TEACHER RECORDS =====" << endl;
    teacherManager.displayRecords();

    // Display research scholar records
    cout << endl;
    cout << "===== RESEARCH SCHOLAR RECORDS =====" << endl;
    scholarManager.displayRecords();

    return 0;
}