#include <iostream>
using namespace std;

class Marks
{
private:
    int marks[5];

public:
   
    Marks()
    {
        cout << "Enter marks of 5 students:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Student " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    
    int findHighest()
    {
        int highest = marks[0];

        for (int i = 1; i < 5; i++)
        {
            if (marks[i] > highest)
            {
                highest = marks[i];
            }
        }

        return highest;
    }


    void displayResult()
    {
        cout << "\nMarks of students:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Student " << i + 1 << ": " << marks[i] << endl;
        }

        cout << "\nHighest Mark = " << findHighest() << endl;
    }
};

int main()
{
    Marks m;

    m.displayResult();

    return 0;
}