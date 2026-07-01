#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 20, 10, 40, 30};
    int n = 7;

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    cout << "Array after removing duplicates: ";

    for (int x : s)
    {
        cout << x << " ";
    }

    return 0;
}