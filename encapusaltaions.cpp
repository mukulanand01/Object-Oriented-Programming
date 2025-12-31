// ncapsulation is a way where we wrap data and methods together in one unit, so that direct access from outside is not allowed. We can only access that data in a controlled manner through public methods like getters and setters.

#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;   // hidden data

public:
    void setBalance(int b) {
        balance = b;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount acc;
    acc.setBalance(5000);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}
