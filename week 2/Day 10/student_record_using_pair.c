#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, string> student;

    student.first = 101;
    student.second = "Riya";

    cout << "Student ID: " << student.first << endl;
    cout << "Student Name: " << student.second << endl;

    return 0;
}