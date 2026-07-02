#include <iostream>
using namespace std;

int main() {
    int empId;
    string name, department;
    double salary;

    cout << "Enter Employee ID: ";
    cin >> empId;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Department: ";
    cin >> department;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\n===== Employee Details =====" << endl;
    cout << "Employee ID: " << empId << endl;
    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Salary: " << salary << endl;

    return 0;
}