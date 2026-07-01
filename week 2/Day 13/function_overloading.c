#include <iostream>
using namespace std;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    float add(float a, float b)
    {
        return a + b;
    }
};

int main()
{
    Calculator c;

    cout << "Sum of Integers = " << c.add(10, 20) << endl;
    cout << "Sum of Floats = " << c.add(10.5f, 20.3f) << endl;

    return 0;
}