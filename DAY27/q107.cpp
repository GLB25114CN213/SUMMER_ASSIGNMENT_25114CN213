#include <iostream>
using namespace std;

int main() {
    string name;
    double basicSalary, hra, da, grossSalary;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    hra = basicSalary * 0.20;
    da = basicSalary * 0.10;
    grossSalary = basicSalary + hra + da;

    cout << "\n===== Salary Details =====" << endl;
    cout << "Employee Name: " << name << endl;
    cout << "Basic Salary: " << basicSalary << endl;
    cout << "HRA: " << hra << endl;
    cout << "DA: " << da << endl;
    cout << "Gross Salary: " << grossSalary << endl;

    return 0;
}