#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<pair<int, string>> students;

    students.insert({101, "Riya"});
    students.insert({102, "Aman"});
    students.insert({103, "Neha"});
    students.insert({101, "Riya"});

    cout << "Student Records:\n";

    for (auto s : students)
    {
        cout << s.first << " " << s.second << endl;
    }

    return 0;
}