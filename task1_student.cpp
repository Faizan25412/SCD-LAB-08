// Name: Muhammad Faizan
// ID: 25412
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter GPA: ";
    cin >> s.gpa;
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "GPA: " << s.gpa << endl;
    return 0;
}
