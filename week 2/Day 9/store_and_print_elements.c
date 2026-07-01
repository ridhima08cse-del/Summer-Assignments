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

    cout << "Elements after push_back(): ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    v.pop_back();

    cout << "\nElements after pop_back(): ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}