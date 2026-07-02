#include <iostream>
using namespace std;

int main() {
    string name, email;
    long long phone;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Phone Number: ";
    cin >> phone;

    cout << "Enter Email: ";
    cin >> email;

    cout << "\nContact Details\n";
    cout << "Name: " << name << endl;
    cout << "Phone: " << phone << endl;
    cout << "Email: " << email << endl;

    return 0;
}