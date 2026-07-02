#include <iostream>
using namespace std;

int main() {
    string name;
    int accNo;
    double balance, amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    cout << "Enter Deposit Amount: ";
    cin >> amount;

    balance += amount;

    cout << "\nBank Account Details\n";
    cout << "Account No: " << accNo << endl;
    cout << "Name: " << name << endl;
    cout << "Final Balance: " << balance << endl;

    return 0;
}