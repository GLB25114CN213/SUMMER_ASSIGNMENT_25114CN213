#include <iostream>
using namespace std;

int main() {
    string name[50], department[50];
    int id[50], n;
    double salary[50];

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nEnter Employee " << i + 1 << " Details\n";

        cout << "ID: ";
        cin >> id[i];

        cout << "Name: ";
        cin >> name[i];

        cout << "Department: ";
        cin >> department[i];

        cout << "Salary: ";
        cin >> salary[i];
    }

    cout << "\nEmployee Records\n";
    for(int i = 0; i < n; i++) {
        cout << "\nID: " << id[i];
        cout << "\nName: " << name[i];
        cout << "\nDepartment: " << department[i];
        cout << "\nSalary: " << salary[i] << endl;
    }

    return 0;
}