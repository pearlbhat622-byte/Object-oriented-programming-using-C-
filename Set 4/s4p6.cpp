#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string customerName;

    static int totalAccounts;

public:
    // Constructor
    BankAccount(int accNo, string name)
    {
        accountNumber = accNo;
        customerName = name;
        totalAccounts++;
    }

    // Display account details
    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
    }

    // Static member function
    static void displayTotalAccounts()
    {
        cout << "Total bank accounts created = "
             << totalAccounts << endl;
    }
};

// Initialize static variable
int BankAccount::totalAccounts = 0;

int main()
{
    BankAccount b1(101, "Pearl");
    BankAccount b2(102, "Rahul");
    BankAccount b3(103, "Ananya");

    b1.display();
    cout << endl;

    b2.display();
    cout << endl;

    b3.display();
    cout << endl;

    // Calling static member function
    BankAccount::displayTotalAccounts();

    return 0;
}