#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    void setName(string n)
    {
        name = n;
    }

    void setRollNo(int r)
    {
        rollNo = r;
    }

    string getName()
    {
        return name;
    }

    int getRollNo()
    {
        return rollNo;
    }
};

int main()
{
    Student s;

    s.setName("Ridhima");
    s.setRollNo(21);

    cout << "Name: " << s.getName() << endl;
    cout << "Roll No: " << s.getRollNo() << endl;

    return 0;
}