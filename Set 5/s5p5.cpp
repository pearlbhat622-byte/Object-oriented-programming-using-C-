#include <iostream>
using namespace std;

// Base class
class Account {
protected:
    int accountNumber;
    double balance;

public:
    // Constructor
    Account(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    // Virtual display function
    virtual void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived class SavingsAccount
class SavingsAccount : public Account {
private:
    double interestRate;

public:
    // Constructor
    SavingsAccount(int accNo, double bal, double rate)
        : Account(accNo, bal) {
        interestRate = rate;
    }

    // Overriding display()
    void display() override {
        cout << "Savings Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "--------------------------" << endl;
    }
};

// Derived class CurrentAccount
class CurrentAccount : public Account {
private:
    double overdraftLimit;

public:
    // Constructor
    CurrentAccount(int accNo, double bal, double limit)
        : Account(accNo, bal) {
        overdraftLimit = limit;
    }

    // Overriding display()
    void display() override {
        cout << "Current Account" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
        cout << "Overdraft Limit: Rs. " << overdraftLimit << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {

    // Multiple objects
    SavingsAccount savings1(101, 50000, 4.5);
    SavingsAccount savings2(102, 75000, 5.0);

    CurrentAccount current1(201, 100000, 25000);
    CurrentAccount current2(202, 150000, 30000);

    // Display details
    savings1.display();
    savings2.display();

    current1.display();
    current2.display();

    return 0;
}