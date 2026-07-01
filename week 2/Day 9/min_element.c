#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(15);
    v.push_back(40);
    v.push_back(25);
    v.push_back(60);
    v.push_back(10);

    cout << "Elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.pop_back();

    int min = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < min)
        {
            min = v[i];
        }
    }

    cout << "\nMinimum element = " << min;

    return 0;
}