#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNo;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;

    cout << "===== Marksheet Generation System =====" << endl;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Marks of 5 Subjects (out of 100):" << endl;

    cout << "Subject 1: ";
    cin >> m1;

    cout << "Subject 2: ";
    cin >> m2;

    cout << "Subject 3: ";
    cin >> m3;

    cout << "Subject 4: ";
    cin >> m4;

    cout << "Subject 5: ";
    cin >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';

    cout << "\n========== MARKSHEET ==========" << endl;
    cout << "Student Name : " << name << endl;
    cout << "Roll Number  : " << rollNo << endl;

    cout << "\nMarks:" << endl;
    cout << "Subject 1 : " << m1 << endl;
    cout << "Subject 2 : " << m2 << endl;
    cout << "Subject 3 : " << m3 << endl;
    cout << "Subject 4 : " << m4 << endl;
    cout << "Subject 5 : " << m5 << endl;

    cout << "\nTotal Marks : " << total << "/500" << endl;
    cout << "Percentage  : " << percentage << "%" << endl;
    cout << "Grade       : " << grade << endl;

    if (grade == 'F')
        cout << "Result      : Fail" << endl;
    else
        cout << "Result      : Pass" << endl;

    return 0;
}