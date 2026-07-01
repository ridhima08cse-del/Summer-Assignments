#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};

    set<int> s;

    for (int i = 0; i < 4; i++)
        s.insert(arr1[i]);

    cout << "Intersection of arrays: ";

    for (int i = 0; i < 4; i++)
    {
        if (s.find(arr2[i]) != s.end())
            cout << arr2[i] << " ";
    }

    return 0;
}