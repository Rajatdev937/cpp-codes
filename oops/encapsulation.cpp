#include <iostream>
#include <string>
using namespace std;

class bank {
private:
    string acc_holder;
    double balance;

public:
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "deposited: " << amount << endl;
        }
    }

    void withdrawn(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "withdrawn: " << amount << endl;
        } else {
            cout << "insufficient balance" << endl;
        }
    }

    double getbalance() {
        return balance;
    }
};

int main() {


    bank emp;
    emp.deposit(100);
    emp.withdrawn(50);
    return 0;
}