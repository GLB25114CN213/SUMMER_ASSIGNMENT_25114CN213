#include <iostream>
using namespace std;

int main() {
    int rollNo, marks;
    string name;

    cout << "Enter Student Roll Number: ";
    cin >> rollNo;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\n===== Student Record =====" << endl;
    cout << "Roll Number: " << rollNo << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;

    return 0;
}