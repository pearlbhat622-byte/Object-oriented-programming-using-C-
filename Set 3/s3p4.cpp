#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    // Transfer money using object reference
    void transfer(BankAccount &receiver, double amount) {
        if (amount <= 0) {
            cout << "Invalid amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        }
        else {
            balance -= amount;
            receiver.balance += amount;

            cout << "Transfer successful!" << endl;
        }
    }

    // Display account details
    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account1(101, 5000);
    BankAccount account2(102, 2000);

    cout << "Before Transfer:\n";
    account1.display();
    account2.display();

    // Transfer 1500 from account1 to account2
    account1.transfer(account2, 1500);

    cout << "\nAfter Transfer:\n";
    account1.display();
    account2.display();

    return 0;
}