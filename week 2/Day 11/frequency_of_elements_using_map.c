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

    cout << "\nFrequency of elements:\n";
    for (auto i : freq)
    {
        cout << i.first << " -> " << i.second << endl;
    }

    return 0;
}