#include <iostream>
using namespace std;

class BankAccount
{
    float balance;

public:
    BankAccount()
    {
        balance = 1000;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
    }

    void withdraw(float amount)
    {
        balance = balance - amount;
    }

    void display()
    {
        cout << "Final Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.deposit(500);
    b.withdraw(200);

    b.display();

    return 0;
}