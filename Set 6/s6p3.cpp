#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            throw "Insufficient balance!";
        }

        balance -= amount;
        cout << "Withdrawal successful." << endl;
        cout << "Remaining balance = " << balance << endl;
    }
};

int main() {
    double initialBalance, amount;

    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(initialBalance);

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    try {
        account.withdraw(amount);
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}