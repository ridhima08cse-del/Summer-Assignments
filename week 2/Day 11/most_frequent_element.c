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

    int element, maxFreq = 0;

    for (auto i : freq)
    {
        if (i.second > maxFreq)
        {
            maxFreq = i.second;
            element = i.first;
        }
    }

    cout << "\nMost Frequent Element = " << element << endl;
    cout << "Frequency = " << maxFreq << endl;

    return 0;
}