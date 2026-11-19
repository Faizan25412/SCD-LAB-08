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
    Student s1, s2;
    cout << "Enter first student name: ";
    cin >> s1.name;
    cout << "Enter first student roll number: ";
    cin >> s1.roll;
    cout << "Enter first student GPA: ";
    cin >> s1.gpa;
    cout << "Enter second student name: ";
    cin >> s2.name;
    cout << "Enter second student roll number: ";
    cin >> s2.roll;
    cout << "Enter second student GPA: ";
    cin >> s2.gpa;
    cout << "First student: " << s1.name << ", GPA: " << s1.gpa << endl;
    cout << "Second student: " << s2.name << ", GPA: " << s2.gpa << endl;
    if (s1.gpa > s2.gpa) {
        cout << s1.name << " has higher GPA" << endl;
    } else if (s2.gpa > s1.gpa) {
        cout << s2.name << " has higher GPA" << endl;
    } else {
        cout << "Both students have equal GPA" << endl;
    }
    return 0;
}
