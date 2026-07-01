#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    void setBalance(float b)
    {
        balance = b;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void display()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.setBalance(1000);
    b.deposit(500);
    b.display();

    return 0;
}#include <iostream>
using namespace std;

class BankAccount
{
private:
    float balance;

public:
    void setBalance(float b)
    {
        balance = b;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void display()
    {
        cout << "Balance = " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    b.setBalance(1000);
    b.deposit(500);
    b.display();

    return 0;
}