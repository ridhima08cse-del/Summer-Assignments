#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual void start() = 0;
};

class Car : public Vehicle
{
public:
    void start()
    {
        cout << "Car Started." << endl;
    }
};

int main()
{
    Car c;
    c.start();

    return 0;
}