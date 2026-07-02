#include <iostream>
using namespace std;

void addStudent(string name[], int roll[], int marks[], int &n) {
    cout << "Enter Roll No: ";
    cin >> roll[n];

    cout << "Enter Name: ";
    cin >> name[n];

    cout << "Enter Marks: ";
    cin >> marks[n];

    n++;

    cout << "Student added successfully.\n";
}

void displayStudents(string name[], int roll[], int marks[], int n) {
    cout << "\nStudent Records\n";

    for(int i = 0; i < n; i++) {
        cout << "\nRoll No: " << roll[i];
        cout << "\nName: " << name[i];
        cout << "\nMarks: " << marks[i] << endl;
    }
}

int main() {
    string name[100];
    int roll[100], marks[100];
    int n = 0, choice;

    do {
        cout << "\n===== Student Management Mini Project =====\n";
        cout << "1. Add Student\n";
        cout << "2. Display Students\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                addStudent(name, roll, marks, n);
                break;

            case 2:
                displayStudents(name, roll, marks, n);
                break;

            case 3:
                cout << "Exiting program.";
                break;

            default:
                cout << "Invalid choice.";
        }

    } while(choice != 3);

    return 0;
}