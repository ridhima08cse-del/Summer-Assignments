#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> result;

    v.push_back(10);
    v.push_back(20);
    v.push_back(10);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);

    cout << "Original Elements: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    for (int i = 0; i < v.size(); i++)
    {
        bool found = false;

        for (int j = 0; j < result.size(); j++)
        {
            if (v[i] == result[j])
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            result.push_back(v[i]);
        }
    }

    result.pop_back();

    cout << "\nAfter Removing Duplicates: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}