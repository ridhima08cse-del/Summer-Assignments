#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    cout << "Original Vector: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << "\nReverse Vector: ";
    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    v.pop_back();

    return 0;
}s