#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n;
    string word;
    map<string, int> freq;

    cout << "Enter number of words: ";
    cin >> n;

    cout << "Enter words:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        freq[word]++;
    }

    cout << "\nWord Frequency:\n";
    for (auto i : freq)
    {
        cout << i.first << " -> " << i.second << endl;
    }

    return 0;
}