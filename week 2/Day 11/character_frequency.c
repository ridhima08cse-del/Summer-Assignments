#include <iostream>
#include <map>
using namespace std;

int main()
{
    string str;
    map<char, int> freq;

    cout << "Enter a string: ";
    cin >> str;

    for (char ch : str)
    {
        freq[ch]++;
    }

    cout << "\nCharacter Frequency:\n";
    for (auto i : freq)
    {
        cout << i.first << " -> " << i.second << endl;
    }

    return 0;
}