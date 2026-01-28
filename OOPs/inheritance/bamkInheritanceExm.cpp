#include <iostream>
using namespace std;

// Base class
class Account {
protected:
    int accNo;
    float balance;

public:
    void getAccountDetails() {
        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Balance: ";
        cin >> balance;
    }

    void showBalance() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

// Derived Class 1
class SavingsAccount : public Account {
public:
    float interestRate;

    void calculateInterest() {
        cout << "Enter Interest Rate (%): ";
        cin >> interestRate;

        float interest = (balance * interestRate) / 100;
        cout << "Interest: " << interest << endl;
    }
};

// Derived Class 2
class CurrentAccount : public Account {
public:
    float overdraftLimit;

    void getOverdraftLimit() {
        cout << "Enter Overdraft Limit: ";
        cin >> overdraftLimit;
    }

    void showOverdraft() {
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

int main() {
    SavingsAccount sa;
    CurrentAccount ca;

    cout << "______________Savings Account Details_______________" << endl;
    sa.getAccountDetails();
    sa.showBalance();
    sa.calculateInterest();

    cout << "______________Current Account Details_______________" << endl;
    ca.getAccountDetails();
    ca.showBalance();
    ca.getOverdraftLimit();
    ca.showOverdraft();

    return 0;
}


