#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;

public:
    Employee(string n, int i)
    {
        name = n;
        id = i;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }
};

int main()
{
    Employee e("Riya", 101);
    e.display();

    return 0;
}