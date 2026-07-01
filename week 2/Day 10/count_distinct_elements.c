#include <iostream>
#include <set>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 20, 10, 40, 50, 40};
    int n = 8;

    set<int> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    cout << "Distinct elements = " << s.size();

    return 0;
}