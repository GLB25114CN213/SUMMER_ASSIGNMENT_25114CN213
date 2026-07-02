#include <iostream>
using namespace std;

int main() {
    string name[50];
    int roll[50], marks[50], n;

    cout << "Enter number of students: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;

        cout << "Name: ";
        cin >> name[i];

        cout << "Roll No: ";
        cin >> roll[i];

        cout << "Marks: ";
        cin >> marks[i];
    }

    cout << "\nStudent Records\n";
    for(int i = 0; i < n; i++) {
        cout << "\nName: " << name[i];
        cout << "\nRoll No: " << roll[i];
        cout << "\nMarks: " << marks[i] << endl;
    }

    return 0;
}