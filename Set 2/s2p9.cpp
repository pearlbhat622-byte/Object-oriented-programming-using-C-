#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, double initialBalance)
    {
        accountNumber = accNo;
        balance = initialBalance;
    }

    // Deposit function
    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully.\n";
    }

    // Withdraw function
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance!\n";
        }
    }

    // Display balance
    void displayBalance()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(101, 5000);

    account.displayBalance();

    account.deposit(2000);
    account.displayBalance();

    account.withdraw(3000);
    account.displayBalance();

    account.withdraw(5000);

    return 0;
}