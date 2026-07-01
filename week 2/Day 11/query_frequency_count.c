#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, x;
    map<int, int> freq;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        freq[x]++;
    }

    int q, query;

    cout << "Enter number of queries: ";
    cin >> q;

    while (q--)
    {
        cout << "Enter element to search: ";
        cin >> query;

        cout << "Frequency = " << freq[query] << endl;
    }

    return 0;
}